// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmPoseBlendNode.h"
#include "VRM4U/Public/AnimNode_VrmPoseBlendNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmPoseBlendNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_NoRegister();
// End Cross Module References
	void UAnimGraphNode_VrmPoseBlendNode::StaticRegisterNativesUAnimGraphNode_VrmPoseBlendNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmPoseBlendNode);
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_NoRegister()
	{
		return UAnimGraphNode_VrmPoseBlendNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_PoseHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmPoseBlendNode.h" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmPoseBlendNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmPoseBlendNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmPoseBlendNode, Node), Z_Construct_UScriptStruct_FAnimNode_VrmPoseBlendNode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::NewProp_Node_MetaData) }; // 2881299141
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmPoseBlendNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::ClassParams = {
		&UAnimGraphNode_VrmPoseBlendNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmPoseBlendNode>()
	{
		return UAnimGraphNode_VrmPoseBlendNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmPoseBlendNode);
	UAnimGraphNode_VrmPoseBlendNode::~UAnimGraphNode_VrmPoseBlendNode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmPoseBlendNode, UAnimGraphNode_VrmPoseBlendNode::StaticClass, TEXT("UAnimGraphNode_VrmPoseBlendNode"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmPoseBlendNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmPoseBlendNode), 4116566494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_2680608883(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmPoseBlendNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
