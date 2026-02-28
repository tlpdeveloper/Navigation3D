// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation3DVolume.h"

#ifdef NAVIGATION3D_Navigation3DVolume_generated_h
#error "Navigation3DVolume.generated.h already included, missing '#pragma once' in Navigation3DVolume.h"
#endif
#define NAVIGATION3D_Navigation3DVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FNodeData;

// ********** Begin ScriptStruct FNodeData *********************************************************
#define FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNodeData_Statics; \
	NAVIGATION3D_API static class UScriptStruct* StaticStruct();


struct FNodeData;
// ********** End ScriptStruct FNodeData ***********************************************************

// ********** Begin Class ANavigation3DVolume ******************************************************
#define FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDrawDebugCells); \
	DECLARE_FUNCTION(execDrawCellsAroundCamera); \
	DECLARE_FUNCTION(execCheckObstacleAt); \
	DECLARE_FUNCTION(execGetNavigationNodes); \
	DECLARE_FUNCTION(execGetNeighbors); \
	DECLARE_FUNCTION(execGetNodeFromWorldPosition); \
	DECLARE_FUNCTION(execGetNavBounds); \
	DECLARE_FUNCTION(execGetCostBetweenTwoNodes); \
	DECLARE_FUNCTION(execCheckIfTwoNodesAreEqual); \
	DECLARE_FUNCTION(execPullTheCheapestNode); \
	DECLARE_FUNCTION(execResetCellCosts); \
	DECLARE_FUNCTION(execRetracePath); \
	DECLARE_FUNCTION(execTryFindJumpPoint); \
	DECLARE_FUNCTION(execFindPath3D); \
	DECLARE_FUNCTION(execBuildNavigationVolume3D);


NAVIGATION3D_API UClass* Z_Construct_UClass_ANavigation3DVolume_NoRegister();

#define FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavigation3DVolume(); \
	friend struct Z_Construct_UClass_ANavigation3DVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATION3D_API UClass* Z_Construct_UClass_ANavigation3DVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavigation3DVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Navigation3D"), Z_Construct_UClass_ANavigation3DVolume_NoRegister) \
	DECLARE_SERIALIZER(ANavigation3DVolume)


#define FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavigation3DVolume(ANavigation3DVolume&&) = delete; \
	ANavigation3DVolume(const ANavigation3DVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavigation3DVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigation3DVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavigation3DVolume) \
	NO_API virtual ~ANavigation3DVolume();


#define FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_60_PROLOG
#define FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_63_INCLASS_NO_PURE_DECLS \
	FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavigation3DVolume;

// ********** End Class ANavigation3DVolume ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mehme_OneDrive_Belgeler_Unreal_Projects_MovementSystem_Plugins_Navigation3D_Source_Navigation3D_Public_Navigation3DVolume_h

// ********** Begin Enum EPathfindingMethod ********************************************************
#define FOREACH_ENUM_EPATHFINDINGMETHOD(op) \
	op(Surface) \
	op(Flying) 
// ********** End Enum EPathfindingMethod **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
