// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_VrmDynamicHierarchy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4U_RigUnit_VrmDynamicHierarchy_generated_h
#error "RigUnit_VrmDynamicHierarchy.generated.h already included, missing '#pragma once' in RigUnit_VrmDynamicHierarchy.h"
#endif
#define VRM4U_RigUnit_VrmDynamicHierarchy_generated_h


#define FRigUnit_VRMGetCurveNameFromMesh_Execute() \
	void FRigUnit_VRMGetCurveNameFromMesh::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		TArray<FName>& Items_Morph, \
		TArray<FName>& Items_Curve \
	)

#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VRMGetCurveNameFromMesh_Statics; \
	VRM4U_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		TArray<FName>& Items_Morph, \
		TArray<FName>& Items_Curve \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FName>& Items_Morph = *(TArray<FName>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Items_Curve = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items_Morph, \
			Items_Curve \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> VRM4U_API UScriptStruct* StaticStruct<struct FRigUnit_VRMGetCurveNameFromMesh>();


#define FRigUnit_VRMAddCurveFromMesh_Execute() \
	void FRigUnit_VRMAddCurveFromMesh::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FString& Prefix, \
		const FString& Suffix, \
		const bool bIncludeMorphs, \
		const bool bIncludeCurves, \
		TArray<FRigElementKey>& Items_Morph, \
		TArray<FRigElementKey>& Items_Curve \
	)

#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VRMAddCurveFromMesh_Statics; \
	VRM4U_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FString& Prefix, \
		const FString& Suffix, \
		const bool bIncludeMorphs, \
		const bool bIncludeCurves, \
		TArray<FRigElementKey>& Items_Morph, \
		TArray<FRigElementKey>& Items_Curve \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Prefix = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Suffix = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIncludeMorphs = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIncludeCurves = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FRigElementKey>& Items_Morph = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FRigElementKey>& Items_Curve = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Prefix, \
			Suffix, \
			bIncludeMorphs, \
			bIncludeCurves, \
			Items_Morph, \
			Items_Curve \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> VRM4U_API UScriptStruct* StaticStruct<struct FRigUnit_VRMAddCurveFromMesh>();


#define FRigUnit_VRMGenerateBoneToControlTable_Execute() \
	void FRigUnit_VRMGenerateBoneToControlTable::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		TArray<FName>& Items_MannequinBone, \
		TArray<FName>& Items_VRMBone \
	)

#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VRMGenerateBoneToControlTable_Statics; \
	VRM4U_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		TArray<FName>& Items_MannequinBone, \
		TArray<FName>& Items_VRMBone \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FName>& Items_MannequinBone = *(TArray<FName>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Items_VRMBone = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items_MannequinBone, \
			Items_VRMBone \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> VRM4U_API UScriptStruct* StaticStruct<struct FRigUnit_VRMGenerateBoneToControlTable>();


#define FRigUnit_VRMInitControllerTransform_Execute() \
	void FRigUnit_VRMInitControllerTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VRMInitControllerTransform_Statics; \
	VRM4U_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>() \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> VRM4U_API UScriptStruct* StaticStruct<struct FRigUnit_VRMInitControllerTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_RigUnit_VrmDynamicHierarchy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
