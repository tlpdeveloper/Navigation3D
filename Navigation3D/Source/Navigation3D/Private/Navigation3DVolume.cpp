// Fill out your copyright notice in the Description page of Project Settings.

#include "Navigation3DVolume.h"

// Sets default values
ANavigation3DVolume::ANavigation3DVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickInterval(0.1f);
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
	Bounds->AttachToComponent(Root, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	Bounds->SetBoxExtent(FVector(1, 1, 1));
	Bounds->SetWorldScale3D(GetNavBounds(false));

}

// Called when the game starts or when spawned
void ANavigation3DVolume::BeginPlay()
{
	Super::BeginPlay();
	
	BuildNavigationVolume3D();
	
	
}

// Called every frame
void ANavigation3DVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!isBuildingNavigation3D)
	{
		DrawCellsAroundCamera(500);

	}

}


void ANavigation3DVolume::BuildNavigationVolume3D()
{
	isBuildingNavigation3D = true;
	Nodes.Empty();

	double StartTime = FPlatformTime::Seconds();

	FVector NavBounds = GetNavBounds(true);
	int cellindex = 0;

	for (int x = 0; x < NavBounds.X; x++)
	{
		for (int y = 0; y < NavBounds.Y; y++)
		{
			for (int z = 0; z < NavBounds.Z; z++)
			{

				FVector CellPosition = GetActorLocation() + FVector(x, y, z) * CellSize * 2 - GetNavBounds(false);
				bool isBlockedPoint = CheckObstacleAt(CellPosition);

				cellindex++;

				FNodeData Node = FNodeData();
				Node.NodePosition = CellPosition;
				Node.isBlocked = isBlockedPoint;
				Node.NodeID = cellindex;

				

				Nodes.Add(CellPosition, Node);

			
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Navigation 3D: Navigation Volume Built!: %d"), cellindex);
	isBuildingNavigation3D = false;
	
}

bool ANavigation3DVolume::FindPath3D(FVector Start, FVector End, TArray<FVector>& PathPoints, EPathfindingMethod Method,double& PathCreationTime)
{
	if (isBuildingNavigation3D) return false;

	double StartTime = FPlatformTime::Seconds();
	
	FNodeData StartNode;
	FNodeData EndNode;

	TArray<FNodeData> OpenList;
	TSet<int32> CheckedNodeIDs;
	FNodeData CurrentNode;

	FVector LastDir = FVector::ZeroVector;
	
	

	if (!GetNodeFromWorldPosition(Start, StartNode) || !GetNodeFromWorldPosition(End, EndNode)) return false;

	if (StartNode.isBlocked || EndNode.isBlocked)
	{
		UE_LOG(LogTemp, Warning, TEXT("Navigation 3D: Start or End Node is Blocked."));
		return false;
	}

	OpenList.Add(StartNode);

	ResetCellCosts();
	while (OpenList.Num() > 0)
	{
		CurrentNode = OpenList[0];

		OpenList.HeapPop(CurrentNode,FNodeData());

		CheckedNodeIDs.Add(CurrentNode.NodeID);

		//check if we are at the end node so that means we found a path and we can retrace it back to the start node.
		if (CheckIfTwoNodesAreEqual(CurrentNode, EndNode))
		{
			PathPoints = RetracePath(StartNode, CurrentNode);

			PathCreationTime = (FPlatformTime::Seconds() - StartTime) * 1000;
			UE_LOG(LogTemp, Warning, TEXT("Navigation 3D: Path Found! Total Cost: %f ms"), PathCreationTime);

			return true;
		}

		TArray<FNodeData> Neighbors = GetNeighbors(CurrentNode);
		FVector prevDir = { 0,0,1 };
		for (FNodeData neighbor : Neighbors)
		{
			FVector jumpdir = (neighbor.ParentNodeCoords - neighbor.NodePosition).GetSafeNormal();
			int Dir = FMath::RoundToInt(jumpdir.Dot(prevDir));
			GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Red, FString::FromInt(Dir), true);
			
			prevDir = jumpdir;
			//if neighbor is already added to the checked list or neighbor is blocked by obstacle skip to the next neighbor.
			if (neighbor.isBlocked || CheckedNodeIDs.Contains(neighbor.NodeID)) continue;

			int currentGCost = CurrentNode.GCost + GetCostBetweenTwoNodes(CurrentNode, neighbor);

			
			if (currentGCost < neighbor.GCost || !OpenList.Contains(neighbor))
			{
				neighbor.GCost = currentGCost;
				neighbor.HCost = GetCostBetweenTwoNodes(neighbor, EndNode);
				neighbor.ParentNodeCoords = CurrentNode.NodePosition;
				Nodes.Add(neighbor.NodePosition,neighbor);
				
				//if neighbor is not in the openlist add it to the openlist and explore it later.
				if (!OpenList.Contains(neighbor))
				{
					
					OpenList.HeapPush(neighbor, FNodeData());
					
				}
			}

		}
		
	}
	UE_LOG(LogTemp, Warning, TEXT("Navigation 3D: Path not found :("));

	//no path found :((
	return false;

}

bool ANavigation3DVolume::TryFindJumpPoint(FNodeData& CurrentNode, FVector JumpDir)
{
	FVector NextPos = CurrentNode.NodePosition + (JumpDir * CellSize * 2);
	int dir = FMath::RoundToInt((NextPos - CurrentNode.NodePosition).GetSafeNormal().Dot(JumpDir));
	FNodeData* Nodeptr = Nodes.Find(NextPos);
	if (Nodeptr)
	{
		
		if (Nodeptr->isBlocked || dir == 0)
		{
			CurrentNode = *Nodeptr;
			return true;
		}
	}
	return false;
}

void ANavigation3DVolume::ResetCellCosts()
{
	for (auto& Pair : Nodes)
	{
		Pair.Value.GCost = 0;
		Pair.Value.HCost = 0;
		Pair.Value.ParentNodeCoords = FVector::ZeroVector;
	}
}

TArray<FVector> ANavigation3DVolume::RetracePath(FNodeData Start, FNodeData CurrentNode)
{
	TArray<FVector> PathPoints;
	
	while (!CheckIfTwoNodesAreEqual(CurrentNode, Start))
	{
		PathPoints.Add(CurrentNode.NodePosition);
		GetNodeFromWorldPosition(CurrentNode.ParentNodeCoords,CurrentNode);
	}
	return PathPoints;
}


int ANavigation3DVolume::GetCostBetweenTwoNodes(FNodeData& N1, FNodeData& N2)
{
	float dist = FVector::Dist(N1.NodePosition, N2.NodePosition);
	return FMath::RoundToInt(dist);
}

bool ANavigation3DVolume::CheckIfTwoNodesAreEqual(FNodeData& N1, FNodeData& N2)
{
	if (N1.NodeID == N2.NodeID)
	{
		return true;
	}
	return false;
}



FNodeData ANavigation3DVolume::PullTheCheapestNode(TArray<FNodeData> OpenList,FNodeData CurrentNode)
{
	
	FNodeData CheapestNode = OpenList[0];
	for (FNodeData listNode : OpenList)
	{
		if (listNode.FCost() < CurrentNode.FCost() || listNode.FCost() == CurrentNode.FCost() && listNode.HCost < CurrentNode.HCost)
		{
			CheapestNode = listNode;
		}
	}
	return CheapestNode;
}


FVector ANavigation3DVolume::GetNavBounds(bool IncludeCellSize)
{
	if(IncludeCellSize)
	{
	return GetActorScale() * 10 / CellSize;
	}
	return GetActorScale() * 10;

}



TArray<FNodeData> ANavigation3DVolume::GetNavigationNodes()
{
	TArray<FNodeData> NodesArray;
	Nodes.GenerateValueArray(NodesArray);
	return NodesArray;
}

bool ANavigation3DVolume::CheckObstacleAt(FVector Position)
{
	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	bool Hit = GetWorld()->SweepSingleByChannel(HitResult, Position, Position, FQuat::Identity, ECC_Visibility, FCollisionShape::MakeBox(FVector(CellSize)), Params);
	return Hit;
}



bool ANavigation3DVolume::GetNodeFromWorldPosition(FVector WorldPosition, FNodeData& FoundNode)
{
	
	FVector Origin = WorldPosition - FVector(GetActorLocation() - FVector(GetNavBounds(false)));
	FVector CellPos = Origin.GridSnap(CellSize * 2) + FVector(GetActorLocation() - FVector(GetNavBounds(false)));
	FNodeData* Nodeptr = Nodes.Find(CellPos);

	if (Nodeptr)
	{
		FoundNode = *Nodeptr;
		return true;
	}
	else
	{
		FoundNode = FNodeData();
		return false;
	}


}

TArray<FNodeData> ANavigation3DVolume::GetNeighbors(FNodeData& TargetNode)
{
	TArray<FNodeData> Neighbors;
	FVector Directions[6] = { FVector(1,0,0), FVector(-1,0,0), FVector(0,1,0), FVector(0,-1,0), FVector(0,0,1), FVector(0,0,-1) };
	for (FVector Direction : Directions)
	{
		FVector NeighborPos = TargetNode.NodePosition + Direction * CellSize * 2;
		FNodeData* NeighborNode = Nodes.Find(NeighborPos);
		if (NeighborNode)
		{
			Neighbors.Add(*NeighborNode);
		}
	}
	return Neighbors;
}

void ANavigation3DVolume::DrawCellsAroundCamera(int Radius)
{
	if (!DrawDebugCells || isBuildingNavigation3D) return;

	UWorld* World = GetWorld();
	if (!World) return;

	FVector CameraPosition = UGameplayStatics::GetPlayerCameraManager(World, 0)->GetCameraLocation();
	
	for(FNodeData Node : GetNavigationNodes())
	{
		int Distance = FMath::RoundToInt(FVector::Dist(Node.NodePosition, CameraPosition));
		if (Distance < Radius)
		{
			FColor Color = Node.isBlocked ? FColor::Red : FColor::Green;
			DrawDebugBox(World, Node.NodePosition, FVector(CellSize), Color, false, 0.1f, 0, 2);
		}
	}

	
	
	
}

void ANavigation3DVolume::SetDrawDebugCells(bool Toggle)
{
	DrawDebugCells = Toggle;
}


