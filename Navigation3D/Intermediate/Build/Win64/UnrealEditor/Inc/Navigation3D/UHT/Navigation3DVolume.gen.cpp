// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Navigation3DVolume.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNavigation3DVolume() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NAVIGATION3D_API UClass* Z_Construct_UClass_ANavigation3DVolume();
NAVIGATION3D_API UClass* Z_Construct_UClass_ANavigation3DVolume_NoRegister();
NAVIGATION3D_API UEnum* Z_Construct_UEnum_Navigation3D_EPathfindingMethod();
NAVIGATION3D_API UScriptStruct* Z_Construct_UScriptStruct_FNodeData();
UPackage* Z_Construct_UPackage__Script_Navigation3D();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNodeData *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNodeData;
class UScriptStruct* FNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeData, (UObject*)Z_Construct_UPackage__Script_Navigation3D(), TEXT("NodeData"));
	}
	return Z_Registration_Info_UScriptStruct_FNodeData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePosition_MetaData[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeData_Statics::NewProp_NodePosition = { "NodePosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeData, NodePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePosition_MetaData), NewProp_NodePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeData_Statics::NewProp_NodePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Navigation3D,
	nullptr,
	&NewStructOps,
	"NodeData",
	Z_Construct_UScriptStruct_FNodeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeData_Statics::PropPointers),
	sizeof(FNodeData),
	alignof(FNodeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNodeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNodeData()
{
	if (!Z_Registration_Info_UScriptStruct_FNodeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNodeData.InnerSingleton, Z_Construct_UScriptStruct_FNodeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNodeData.InnerSingleton;
}
// ********** End ScriptStruct FNodeData ***********************************************************

// ********** Begin Enum EPathfindingMethod ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathfindingMethod;
static UEnum* EPathfindingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathfindingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathfindingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Navigation3D_EPathfindingMethod, (UObject*)Z_Construct_UPackage__Script_Navigation3D(), TEXT("EPathfindingMethod"));
	}
	return Z_Registration_Info_UEnum_EPathfindingMethod.OuterSingleton;
}
template<> NAVIGATION3D_API UEnum* StaticEnum<EPathfindingMethod>()
{
	return EPathfindingMethod_StaticEnum();
}
struct Z_Construct_UEnum_Navigation3D_EPathfindingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Flying.DisplayName", "Flying" },
		{ "Flying.Name", "Flying" },
		{ "Flying.ToolTip", "Pathfinds in all 3D directions. This is suitable for flying or swimming AI characters" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
		{ "Surface.DisplayName", "Surface" },
		{ "Surface.Name", "Surface" },
		{ "Surface.ToolTip", "Pathfinds on surfaces, This is suitable for AI's that can climb walls,ceilings." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Surface", (int64)Surface },
		{ "Flying", (int64)Flying },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Navigation3D_EPathfindingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Navigation3D,
	nullptr,
	"EPathfindingMethod",
	"EPathfindingMethod",
	Z_Construct_UEnum_Navigation3D_EPathfindingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Navigation3D_EPathfindingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Navigation3D_EPathfindingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Navigation3D_EPathfindingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Navigation3D_EPathfindingMethod()
{
	if (!Z_Registration_Info_UEnum_EPathfindingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathfindingMethod.InnerSingleton, Z_Construct_UEnum_Navigation3D_EPathfindingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathfindingMethod.InnerSingleton;
}
// ********** End Enum EPathfindingMethod **********************************************************

// ********** Begin Class ANavigation3DVolume Function BuildNavigationVolume3D *********************
struct Z_Construct_UFunction_ANavigation3DVolume_BuildNavigationVolume3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_BuildNavigationVolume3D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "BuildNavigationVolume3D", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_BuildNavigationVolume3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_BuildNavigationVolume3D_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ANavigation3DVolume_BuildNavigationVolume3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_BuildNavigationVolume3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execBuildNavigationVolume3D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildNavigationVolume3D();
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function BuildNavigationVolume3D ***********************

// ********** Begin Class ANavigation3DVolume Function CheckIfTwoNodesAreEqual *********************
struct Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics
{
	struct Navigation3DVolume_eventCheckIfTwoNodesAreEqual_Parms
	{
		FNodeData N1;
		FNodeData N2;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_N1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_N2;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_N1 = { "N1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventCheckIfTwoNodesAreEqual_Parms, N1), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_N2 = { "N2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventCheckIfTwoNodesAreEqual_Parms, N2), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
void Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Navigation3DVolume_eventCheckIfTwoNodesAreEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Navigation3DVolume_eventCheckIfTwoNodesAreEqual_Parms), &Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_N1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_N2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "CheckIfTwoNodesAreEqual", Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::Navigation3DVolume_eventCheckIfTwoNodesAreEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::Navigation3DVolume_eventCheckIfTwoNodesAreEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execCheckIfTwoNodesAreEqual)
{
	P_GET_STRUCT_REF(FNodeData,Z_Param_Out_N1);
	P_GET_STRUCT_REF(FNodeData,Z_Param_Out_N2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfTwoNodesAreEqual(Z_Param_Out_N1,Z_Param_Out_N2);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function CheckIfTwoNodesAreEqual ***********************

// ********** Begin Class ANavigation3DVolume Function CheckObstacleAt *****************************
struct Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics
{
	struct Navigation3DVolume_eventCheckObstacleAt_Parms
	{
		FVector Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventCheckObstacleAt_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Navigation3DVolume_eventCheckObstacleAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Navigation3DVolume_eventCheckObstacleAt_Parms), &Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "CheckObstacleAt", Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::Navigation3DVolume_eventCheckObstacleAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::Navigation3DVolume_eventCheckObstacleAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execCheckObstacleAt)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckObstacleAt(Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function CheckObstacleAt *******************************

// ********** Begin Class ANavigation3DVolume Function DrawCellsAroundCamera ***********************
struct Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics
{
	struct Navigation3DVolume_eventDrawCellsAroundCamera_Parms
	{
		int32 Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventDrawCellsAroundCamera_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "DrawCellsAroundCamera", Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::Navigation3DVolume_eventDrawCellsAroundCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::Navigation3DVolume_eventDrawCellsAroundCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execDrawCellsAroundCamera)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawCellsAroundCamera(Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function DrawCellsAroundCamera *************************

// ********** Begin Class ANavigation3DVolume Function FindPath3D **********************************
struct Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics
{
	struct Navigation3DVolume_eventFindPath3D_Parms
	{
		FVector Start;
		FVector End;
		TArray<FVector> PathPoints;
		TEnumAsByte<EPathfindingMethod> Method;
		double PathCreationTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PathCreationTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventFindPath3D_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventFindPath3D_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventFindPath3D_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventFindPath3D_Parms, Method), Z_Construct_UEnum_Navigation3D_EPathfindingMethod, METADATA_PARAMS(0, nullptr) }; // 1173711663
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_PathCreationTime = { "PathCreationTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventFindPath3D_Parms, PathCreationTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Navigation3DVolume_eventFindPath3D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Navigation3DVolume_eventFindPath3D_Parms), &Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_PathCreationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "FindPath3D", Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::Navigation3DVolume_eventFindPath3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::Navigation3DVolume_eventFindPath3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_FindPath3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_FindPath3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execFindPath3D)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PathPoints);
	P_GET_PROPERTY(FByteProperty,Z_Param_Method);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_PathCreationTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindPath3D(Z_Param_Start,Z_Param_End,Z_Param_Out_PathPoints,EPathfindingMethod(Z_Param_Method),Z_Param_Out_PathCreationTime);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function FindPath3D ************************************

// ********** Begin Class ANavigation3DVolume Function GetCostBetweenTwoNodes **********************
struct Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics
{
	struct Navigation3DVolume_eventGetCostBetweenTwoNodes_Parms
	{
		FNodeData N1;
		FNodeData N2;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_N1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_N2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::NewProp_N1 = { "N1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetCostBetweenTwoNodes_Parms, N1), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::NewProp_N2 = { "N2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetCostBetweenTwoNodes_Parms, N2), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetCostBetweenTwoNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::NewProp_N1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::NewProp_N2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "GetCostBetweenTwoNodes", Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::Navigation3DVolume_eventGetCostBetweenTwoNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::Navigation3DVolume_eventGetCostBetweenTwoNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execGetCostBetweenTwoNodes)
{
	P_GET_STRUCT_REF(FNodeData,Z_Param_Out_N1);
	P_GET_STRUCT_REF(FNodeData,Z_Param_Out_N2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCostBetweenTwoNodes(Z_Param_Out_N1,Z_Param_Out_N2);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function GetCostBetweenTwoNodes ************************

// ********** Begin Class ANavigation3DVolume Function GetNavBounds ********************************
struct Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics
{
	struct Navigation3DVolume_eventGetNavBounds_Parms
	{
		bool IncludeCellSize;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IncludeCellSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeCellSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::NewProp_IncludeCellSize_SetBit(void* Obj)
{
	((Navigation3DVolume_eventGetNavBounds_Parms*)Obj)->IncludeCellSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::NewProp_IncludeCellSize = { "IncludeCellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Navigation3DVolume_eventGetNavBounds_Parms), &Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::NewProp_IncludeCellSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetNavBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::NewProp_IncludeCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "GetNavBounds", Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::Navigation3DVolume_eventGetNavBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::Navigation3DVolume_eventGetNavBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execGetNavBounds)
{
	P_GET_UBOOL(Z_Param_IncludeCellSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetNavBounds(Z_Param_IncludeCellSize);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function GetNavBounds **********************************

// ********** Begin Class ANavigation3DVolume Function GetNavigationNodes **************************
struct Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics
{
	struct Navigation3DVolume_eventGetNavigationNodes_Parms
	{
		TArray<FNodeData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetNavigationNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "GetNavigationNodes", Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::Navigation3DVolume_eventGetNavigationNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::Navigation3DVolume_eventGetNavigationNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execGetNavigationNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNodeData>*)Z_Param__Result=P_THIS->GetNavigationNodes();
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function GetNavigationNodes ****************************

// ********** Begin Class ANavigation3DVolume Function GetNeighbors ********************************
struct Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics
{
	struct Navigation3DVolume_eventGetNeighbors_Parms
	{
		FNodeData TargetNode;
		TArray<FNodeData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::NewProp_TargetNode = { "TargetNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetNeighbors_Parms, TargetNode), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetNeighbors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::NewProp_TargetNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "GetNeighbors", Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::Navigation3DVolume_eventGetNeighbors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::Navigation3DVolume_eventGetNeighbors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execGetNeighbors)
{
	P_GET_STRUCT_REF(FNodeData,Z_Param_Out_TargetNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNodeData>*)Z_Param__Result=P_THIS->GetNeighbors(Z_Param_Out_TargetNode);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function GetNeighbors **********************************

// ********** Begin Class ANavigation3DVolume Function GetNodeFromWorldPosition ********************
struct Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics
{
	struct Navigation3DVolume_eventGetNodeFromWorldPosition_Parms
	{
		FVector WorldPosition;
		FNodeData FoundNode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundNode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetNodeFromWorldPosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_FoundNode = { "FoundNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventGetNodeFromWorldPosition_Parms, FoundNode), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
void Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Navigation3DVolume_eventGetNodeFromWorldPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Navigation3DVolume_eventGetNodeFromWorldPosition_Parms), &Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_FoundNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "GetNodeFromWorldPosition", Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::Navigation3DVolume_eventGetNodeFromWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::Navigation3DVolume_eventGetNodeFromWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execGetNodeFromWorldPosition)
{
	P_GET_STRUCT(FVector,Z_Param_WorldPosition);
	P_GET_STRUCT_REF(FNodeData,Z_Param_Out_FoundNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNodeFromWorldPosition(Z_Param_WorldPosition,Z_Param_Out_FoundNode);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function GetNodeFromWorldPosition **********************

// ********** Begin Class ANavigation3DVolume Function PullTheCheapestNode *************************
struct Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics
{
	struct Navigation3DVolume_eventPullTheCheapestNode_Parms
	{
		TArray<FNodeData> OpenList;
		FNodeData CurrentNode;
		FNodeData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpenList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OpenList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_OpenList_Inner = { "OpenList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_OpenList = { "OpenList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventPullTheCheapestNode_Parms, OpenList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventPullTheCheapestNode_Parms, CurrentNode), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventPullTheCheapestNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_OpenList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_OpenList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_CurrentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "PullTheCheapestNode", Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::Navigation3DVolume_eventPullTheCheapestNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::Navigation3DVolume_eventPullTheCheapestNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execPullTheCheapestNode)
{
	P_GET_TARRAY(FNodeData,Z_Param_OpenList);
	P_GET_STRUCT(FNodeData,Z_Param_CurrentNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeData*)Z_Param__Result=P_THIS->PullTheCheapestNode(Z_Param_OpenList,Z_Param_CurrentNode);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function PullTheCheapestNode ***************************

// ********** Begin Class ANavigation3DVolume Function ResetCellCosts ******************************
struct Z_Construct_UFunction_ANavigation3DVolume_ResetCellCosts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_ResetCellCosts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "ResetCellCosts", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_ResetCellCosts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_ResetCellCosts_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ANavigation3DVolume_ResetCellCosts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_ResetCellCosts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execResetCellCosts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCellCosts();
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function ResetCellCosts ********************************

// ********** Begin Class ANavigation3DVolume Function RetracePath *********************************
struct Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics
{
	struct Navigation3DVolume_eventRetracePath_Parms
	{
		FNodeData StartNode;
		FNodeData CurrentNode;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventRetracePath_Parms, StartNode), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventRetracePath_Parms, CurrentNode), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventRetracePath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_StartNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_CurrentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "RetracePath", Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::Navigation3DVolume_eventRetracePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::Navigation3DVolume_eventRetracePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_RetracePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_RetracePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execRetracePath)
{
	P_GET_STRUCT(FNodeData,Z_Param_StartNode);
	P_GET_STRUCT(FNodeData,Z_Param_CurrentNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->RetracePath(Z_Param_StartNode,Z_Param_CurrentNode);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function RetracePath ***********************************

// ********** Begin Class ANavigation3DVolume Function SetDrawDebugCells ***************************
struct Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics
{
	struct Navigation3DVolume_eventSetDrawDebugCells_Parms
	{
		bool Toggle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Toggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Toggle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::NewProp_Toggle_SetBit(void* Obj)
{
	((Navigation3DVolume_eventSetDrawDebugCells_Parms*)Obj)->Toggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::NewProp_Toggle = { "Toggle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Navigation3DVolume_eventSetDrawDebugCells_Parms), &Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::NewProp_Toggle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::NewProp_Toggle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "SetDrawDebugCells", Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::Navigation3DVolume_eventSetDrawDebugCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::Navigation3DVolume_eventSetDrawDebugCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execSetDrawDebugCells)
{
	P_GET_UBOOL(Z_Param_Toggle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawDebugCells(Z_Param_Toggle);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function SetDrawDebugCells *****************************

// ********** Begin Class ANavigation3DVolume Function TryFindJumpPoint ****************************
struct Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics
{
	struct Navigation3DVolume_eventTryFindJumpPoint_Parms
	{
		FNodeData CurrentNode;
		FVector JumpDir;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JumpDir;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventTryFindJumpPoint_Parms, CurrentNode), Z_Construct_UScriptStruct_FNodeData, METADATA_PARAMS(0, nullptr) }; // 450555416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_JumpDir = { "JumpDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Navigation3DVolume_eventTryFindJumpPoint_Parms, JumpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Navigation3DVolume_eventTryFindJumpPoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Navigation3DVolume_eventTryFindJumpPoint_Parms), &Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_CurrentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_JumpDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANavigation3DVolume, nullptr, "TryFindJumpPoint", Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::Navigation3DVolume_eventTryFindJumpPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::Navigation3DVolume_eventTryFindJumpPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigation3DVolume::execTryFindJumpPoint)
{
	P_GET_STRUCT_REF(FNodeData,Z_Param_Out_CurrentNode);
	P_GET_STRUCT(FVector,Z_Param_JumpDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryFindJumpPoint(Z_Param_Out_CurrentNode,Z_Param_JumpDir);
	P_NATIVE_END;
}
// ********** End Class ANavigation3DVolume Function TryFindJumpPoint ******************************

// ********** Begin Class ANavigation3DVolume ******************************************************
void ANavigation3DVolume::StaticRegisterNativesANavigation3DVolume()
{
	UClass* Class = ANavigation3DVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildNavigationVolume3D", &ANavigation3DVolume::execBuildNavigationVolume3D },
		{ "CheckIfTwoNodesAreEqual", &ANavigation3DVolume::execCheckIfTwoNodesAreEqual },
		{ "CheckObstacleAt", &ANavigation3DVolume::execCheckObstacleAt },
		{ "DrawCellsAroundCamera", &ANavigation3DVolume::execDrawCellsAroundCamera },
		{ "FindPath3D", &ANavigation3DVolume::execFindPath3D },
		{ "GetCostBetweenTwoNodes", &ANavigation3DVolume::execGetCostBetweenTwoNodes },
		{ "GetNavBounds", &ANavigation3DVolume::execGetNavBounds },
		{ "GetNavigationNodes", &ANavigation3DVolume::execGetNavigationNodes },
		{ "GetNeighbors", &ANavigation3DVolume::execGetNeighbors },
		{ "GetNodeFromWorldPosition", &ANavigation3DVolume::execGetNodeFromWorldPosition },
		{ "PullTheCheapestNode", &ANavigation3DVolume::execPullTheCheapestNode },
		{ "ResetCellCosts", &ANavigation3DVolume::execResetCellCosts },
		{ "RetracePath", &ANavigation3DVolume::execRetracePath },
		{ "SetDrawDebugCells", &ANavigation3DVolume::execSetDrawDebugCells },
		{ "TryFindJumpPoint", &ANavigation3DVolume::execTryFindJumpPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANavigation3DVolume;
UClass* ANavigation3DVolume::GetPrivateStaticClass()
{
	using TClass = ANavigation3DVolume;
	if (!Z_Registration_Info_UClass_ANavigation3DVolume.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Navigation3DVolume"),
			Z_Registration_Info_UClass_ANavigation3DVolume.InnerSingleton,
			StaticRegisterNativesANavigation3DVolume,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ANavigation3DVolume.InnerSingleton;
}
UClass* Z_Construct_UClass_ANavigation3DVolume_NoRegister()
{
	return ANavigation3DVolume::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANavigation3DVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation3DVolume.h" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNavigationBuiltBudgetPerFrame_MetaData[] = {
		{ "Category", "Navigation3D" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Navigation3D - Cells" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugCells_MetaData[] = {
		{ "Category", "Navigation3D - Cells" },
		{ "ModuleRelativePath", "Public/Navigation3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxNavigationBuiltBudgetPerFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static void NewProp_DrawDebugCells_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavigation3DVolume_BuildNavigationVolume3D, "BuildNavigationVolume3D" }, // 3777571501
		{ &Z_Construct_UFunction_ANavigation3DVolume_CheckIfTwoNodesAreEqual, "CheckIfTwoNodesAreEqual" }, // 3159455841
		{ &Z_Construct_UFunction_ANavigation3DVolume_CheckObstacleAt, "CheckObstacleAt" }, // 1005680986
		{ &Z_Construct_UFunction_ANavigation3DVolume_DrawCellsAroundCamera, "DrawCellsAroundCamera" }, // 1970894251
		{ &Z_Construct_UFunction_ANavigation3DVolume_FindPath3D, "FindPath3D" }, // 4160496200
		{ &Z_Construct_UFunction_ANavigation3DVolume_GetCostBetweenTwoNodes, "GetCostBetweenTwoNodes" }, // 24617
		{ &Z_Construct_UFunction_ANavigation3DVolume_GetNavBounds, "GetNavBounds" }, // 2242810553
		{ &Z_Construct_UFunction_ANavigation3DVolume_GetNavigationNodes, "GetNavigationNodes" }, // 1438642872
		{ &Z_Construct_UFunction_ANavigation3DVolume_GetNeighbors, "GetNeighbors" }, // 3522616107
		{ &Z_Construct_UFunction_ANavigation3DVolume_GetNodeFromWorldPosition, "GetNodeFromWorldPosition" }, // 2746646556
		{ &Z_Construct_UFunction_ANavigation3DVolume_PullTheCheapestNode, "PullTheCheapestNode" }, // 816596108
		{ &Z_Construct_UFunction_ANavigation3DVolume_ResetCellCosts, "ResetCellCosts" }, // 2399662829
		{ &Z_Construct_UFunction_ANavigation3DVolume_RetracePath, "RetracePath" }, // 619408071
		{ &Z_Construct_UFunction_ANavigation3DVolume_SetDrawDebugCells, "SetDrawDebugCells" }, // 45021164
		{ &Z_Construct_UFunction_ANavigation3DVolume_TryFindJumpPoint, "TryFindJumpPoint" }, // 3614300737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigation3DVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_MaxNavigationBuiltBudgetPerFrame = { "MaxNavigationBuiltBudgetPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigation3DVolume, MaxNavigationBuiltBudgetPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNavigationBuiltBudgetPerFrame_MetaData), NewProp_MaxNavigationBuiltBudgetPerFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigation3DVolume, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
void Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_DrawDebugCells_SetBit(void* Obj)
{
	((ANavigation3DVolume*)Obj)->DrawDebugCells = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_DrawDebugCells = { "DrawDebugCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavigation3DVolume), &Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_DrawDebugCells_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugCells_MetaData), NewProp_DrawDebugCells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigation3DVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_MaxNavigationBuiltBudgetPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigation3DVolume_Statics::NewProp_DrawDebugCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigation3DVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavigation3DVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Navigation3D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigation3DVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigation3DVolume_Statics::ClassParams = {
	&ANavigation3DVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANavigation3DVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavigation3DVolume_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigation3DVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigation3DVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigation3DVolume()
{
	if (!Z_Registration_Info_UClass_ANavigation3DVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigation3DVolume.OuterSingleton, Z_Construct_UClass_ANavigation3DVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigation3DVolume.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigation3DVolume);
ANavigation3DVolume::~ANavigation3DVolume() {}
// ********** End Class ANavigation3DVolume ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPathfindingMethod_StaticEnum, TEXT("EPathfindingMethod"), &Z_Registration_Info_UEnum_EPathfindingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1173711663U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNodeData::StaticStruct, Z_Construct_UScriptStruct_FNodeData_Statics::NewStructOps, TEXT("NodeData"), &Z_Registration_Info_UScriptStruct_FNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeData), 450555416U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigation3DVolume, ANavigation3DVolume::StaticClass, TEXT("ANavigation3DVolume"), &Z_Registration_Info_UClass_ANavigation3DVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigation3DVolume), 1300880189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_2190950335(TEXT("/Script/Navigation3D"),
	Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h__Script_Navigation3D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
