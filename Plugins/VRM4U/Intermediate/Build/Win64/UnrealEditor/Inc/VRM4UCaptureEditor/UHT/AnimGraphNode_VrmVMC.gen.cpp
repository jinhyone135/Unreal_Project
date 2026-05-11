// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UCaptureEditor/Private/AnimGraphNode_VrmVMC.h"
#include "VRM4UCapture/Public/AnimNode_VrmVMC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmVMC() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UCaptureEditor();
	VRM4UCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmVMC();
	VRM4UCAPTUREEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmVMC();
	VRM4UCAPTUREEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmVMC_NoRegister();
// End Cross Module References
	void UAnimGraphNode_VrmVMC::StaticRegisterNativesUAnimGraphNode_VrmVMC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmVMC);
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmVMC_NoRegister()
	{
		return UAnimGraphNode_VrmVMC::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[];
#endif
		static void NewProp_bPreviewLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewForeground_MetaData[];
#endif
		static void NewProp_bPreviewForeground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewForeground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCaptureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmVMC.h" },
		{ "Keywords", "VRM4U" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmVMC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmVMC.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmVMC, Node), Z_Construct_UScriptStruct_FAnimNode_VrmVMC, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_Node_MetaData) }; // 3659429734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmVMC.h" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
	{
		((UAnimGraphNode_VrmVMC*)Obj)->bPreviewLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmVMC), &Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewLive_MetaData), Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewLive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewForeground_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmVMC.h" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewForeground_SetBit(void* Obj)
	{
		((UAnimGraphNode_VrmVMC*)Obj)->bPreviewForeground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewForeground = { "bPreviewForeground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmVMC), &Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewForeground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewForeground_MetaData), Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewForeground_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::NewProp_bPreviewForeground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmVMC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::ClassParams = {
		&UAnimGraphNode_VrmVMC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmVMC()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmVMC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmVMC.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmVMC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_VrmVMC.OuterSingleton;
	}
	template<> VRM4UCAPTUREEDITOR_API UClass* StaticClass<UAnimGraphNode_VrmVMC>()
	{
		return UAnimGraphNode_VrmVMC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmVMC);
	UAnimGraphNode_VrmVMC::~UAnimGraphNode_VrmVMC() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCaptureEditor_Private_AnimGraphNode_VrmVMC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCaptureEditor_Private_AnimGraphNode_VrmVMC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmVMC, UAnimGraphNode_VrmVMC::StaticClass, TEXT("UAnimGraphNode_VrmVMC"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmVMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmVMC), 390897195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCaptureEditor_Private_AnimGraphNode_VrmVMC_h_705459216(TEXT("/Script/VRM4UCaptureEditor"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCaptureEditor_Private_AnimGraphNode_VrmVMC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCaptureEditor_Private_AnimGraphNode_VrmVMC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
