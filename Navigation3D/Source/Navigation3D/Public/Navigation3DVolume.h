// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Containers/Set.h"
#include "Templates/TypeHash.h"
#include "Kismet/GameplayStatics.h"

#include "Navigation3DVolume.generated.h"



USTRUCT(BlueprintType)
struct FNodeData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Navigation3D")
	FVector NodePosition;

	bool isBlocked = false;

	FVector ParentNodeCoords;

	int32 NodeID = -1;

	int32 GCost = 0;

	int32 HCost = 0;

	int32 FCost() const { return GCost + HCost; }

	bool operator==(const FNodeData& other) const
	{
		return (NodePosition == other.NodePosition);
	}

	bool operator()(const FNodeData& A, const FNodeData& B) const
	{
		if (A.FCost() != B.FCost())
			return A.FCost() < B.FCost();
		return A.HCost < B.HCost;
	}
};
	FORCEINLINE uint32 GetTypeHash(const FNodeData& Node)
	{
		return GetTypeHash(Node.NodePosition);
	}

UENUM(BlueprintType)
enum EPathfindingMethod
{
	Surface UMETA(DisplayName = "Surface", ToolTip = "Pathfinds on surfaces, This is suitable for AI's that can climb walls,ceilings."),
	Flying UMETA(DisplayName = "Flying", ToolTip = "Pathfinds in all 3D directions. This is suitable for flying or swimming AI characters")
};

UCLASS()
class NAVIGATION3D_API ANavigation3DVolume : public AActor
{
	GENERATED_BODY()

	
	
public:	
	// Sets default values for this actor's properties
	ANavigation3DVolume();

	USceneComponent* Root = nullptr;
	UBoxComponent* Bounds = nullptr;
	

	UFUNCTION(BlueprintCallable,Category="Navigation3D")
	void BuildNavigationVolume3D();

	UFUNCTION(BlueprintCallable,Category="Navigation3D")
	bool FindPath3D(FVector Start,FVector End,TArray<FVector>& PathPoints,EPathfindingMethod Method, double& PathCreationTime);

	UFUNCTION()
	bool TryFindJumpPoint(FNodeData& CurrentNode,FVector JumpDir);

	UFUNCTION()
	TArray<FVector> RetracePath(FNodeData StartNode,FNodeData CurrentNode);

	UFUNCTION()
	void ResetCellCosts();

	UFUNCTION()
	FNodeData PullTheCheapestNode(TArray<FNodeData> OpenList,FNodeData CurrentNode);

	UFUNCTION()
	bool CheckIfTwoNodesAreEqual(FNodeData& N1,FNodeData& N2);

	UFUNCTION()
	int GetCostBetweenTwoNodes(FNodeData& N1,FNodeData& N2);


	UFUNCTION(Category="Navigation3D")
	FVector GetNavBounds(bool IncludeCellSize);

	UFUNCTION(BlueprintCallable,Category="Navigation3D")
	bool GetNodeFromWorldPosition(FVector WorldPosition,FNodeData& FoundNode);

	UFUNCTION(BlueprintCallable, Category = "Navigation3D")
	TArray<FNodeData> GetNeighbors(FNodeData& TargetNode);

	UFUNCTION(BlueprintCallable,Category="Navigation3D")
	TArray<FNodeData> GetNavigationNodes();

	UFUNCTION()
	bool CheckObstacleAt(FVector Position);

	UFUNCTION(BlueprintCallable,Category="Navigation3D")
	void DrawCellsAroundCamera(int Radius);

	UFUNCTION(BlueprintCallable, Category = "Navigation3D")
	void SetDrawDebugCells(bool Toggle);

	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Navigation3D")
	double MaxNavigationBuiltBudgetPerFrame = 20;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Navigation3D - Cells")
	float CellSize = 70;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Navigation3D - Cells")
	bool DrawDebugCells = true;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	
	int32 LastFrameBuiltCells = 0;

	bool isBuildingNavigation3D = false;
	bool isNavigation3DReady = false;
	
	TMap<FVector,FNodeData> Nodes;
	
	FTimerHandle CellTimerHandle;

};
