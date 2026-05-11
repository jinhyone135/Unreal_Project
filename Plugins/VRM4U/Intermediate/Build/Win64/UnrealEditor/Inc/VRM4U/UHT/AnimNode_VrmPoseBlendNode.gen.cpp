// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmPoseBlendNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmPoseBlendNode() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmPoseBlendNode>() == std::is_polymorphic<FAnimNode_PoseBlendNode>(), "USTRUCT FAnimNode_VrmPoseBlendNode cannot be polymorphic unless super FAnimNode_PoseBlendNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode;
class UScriptStruct* FAnimNode_VrmPoseBlendNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmPoseBlendNode"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmPoseBlendNode>()
{
	return FAnimNode_VrmPoseBlendNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutoSearchMetaData_MetaData[];
#endif
		static void NewProp_EnableAutoSearchMetaData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAutoSearchMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemovePoseCurve_MetaData[];
#endif
		static void NewProp_bRemovePoseCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemovePoseCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmPoseBlendNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmPoseBlendNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_EnableAutoSearchMetaData_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmPoseBlendNode.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_EnableAutoSearchMetaData_SetBit(void* Obj)
	{
		((FAnimNode_VrmPoseBlendNode*)Obj)->EnableAutoSearchMetaData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_EnableAutoSearchMetaData = { "EnableAutoSearchMetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmPoseBlendNode), &Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_EnableAutoSearchMetaData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_EnableAutoSearchMetaData_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_EnableAutoSearchMetaData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_bRemovePoseCurve_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Skeleton, meta=(PinHiddenByDefault))\n//const UVrmMetaObject *VrmMetaObject = nullptr;\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmPoseBlendNode.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Skeleton, meta=(PinHiddenByDefault))\nconst UVrmMetaObject *VrmMetaObject = nullptr;" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_bRemovePoseCurve_SetBit(void* Obj)
	{
		((FAnimNode_VrmPoseBlendNode*)Obj)->bRemovePoseCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_bRemovePoseCurve = { "bRemovePoseCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmPoseBlendNode), &Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_bRemovePoseCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_bRemovePoseCurve_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_bRemovePoseCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_EnableAutoSearchMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewProp_bRemovePoseCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode,
		&NewStructOps,
		"AnimNode_VrmPoseBlendNode",
		Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::PropPointers),
		sizeof(FAnimNode_VrmPoseBlendNode),
		alignof(FAnimNode_VrmPoseBlendNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmPoseBlendNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmPoseBlendNode_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmPoseBlendNode::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode_Statics::NewStructOps, TEXT("AnimNode_VrmPoseBlendNode"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmPoseBlendNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmPoseBlendNode), 2881299141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmPoseBlendNode_h_2924178471(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmPoseBlendNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmPoseBlendNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
