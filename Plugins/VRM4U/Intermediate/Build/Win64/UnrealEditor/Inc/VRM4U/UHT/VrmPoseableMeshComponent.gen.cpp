// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmPoseableMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmPoseableMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmPoseableMeshComponent();
	VRM4U_API UClass* Z_Construct_UClass_UVrmPoseableMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmPoseableMeshComponent::execVRMCopyPoseAndMorphFromSkeletalComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InComponentToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VRMCopyPoseAndMorphFromSkeletalComponent(Z_Param_InComponentToCopy);
		P_NATIVE_END;
	}
	static FName NAME_UVrmPoseableMeshComponent_Init = FName(TEXT("Init"));
	void UVrmPoseableMeshComponent::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVrmPoseableMeshComponent_Init),NULL);
	}
	void UVrmPoseableMeshComponent::StaticRegisterNativesUVrmPoseableMeshComponent()
	{
		UClass* Class = UVrmPoseableMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VRMCopyPoseAndMorphFromSkeletalComponent", &UVrmPoseableMeshComponent::execVRMCopyPoseAndMorphFromSkeletalComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmPoseableMeshComponent, nullptr, "Init", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVrmPoseableMeshComponent_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics
	{
		struct VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms
		{
			USkeletalMeshComponent* InComponentToCopy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponentToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponentToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy = { "InComponentToCopy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms, InComponentToCopy), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData), Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmPoseableMeshComponent, nullptr, "VRMCopyPoseAndMorphFromSkeletalComponent", nullptr, nullptr, Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmPoseableMeshComponent);
	UClass* Z_Construct_UClass_UVrmPoseableMeshComponent_NoRegister()
	{
		return UVrmPoseableMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmPoseableMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParentAsLeader_MetaData[];
#endif
		static void NewProp_bUseParentAsLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParentAsLeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultMaterial_MetaData[];
#endif
		static void NewProp_bUseDefaultMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmPoseableMeshComponent_Init, "Init" }, // 3764675264
		{ &Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent, "VRMCopyPoseAndMorphFromSkeletalComponent" }, // 2864511411
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "VrmPoseableMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader_SetBit(void* Obj)
	{
		((UVrmPoseableMeshComponent*)Obj)->bUseParentAsLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader = { "bUseParentAsLeader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmPoseableMeshComponent), &Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader_MetaData), Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial_SetBit(void* Obj)
	{
		((UVrmPoseableMeshComponent*)Obj)->bUseDefaultMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial = { "bUseDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmPoseableMeshComponent), &Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial_MetaData), Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmPoseableMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::ClassParams = {
		&UVrmPoseableMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrmPoseableMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UVrmPoseableMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmPoseableMeshComponent.OuterSingleton, Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmPoseableMeshComponent.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmPoseableMeshComponent>()
	{
		return UVrmPoseableMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmPoseableMeshComponent);
	UVrmPoseableMeshComponent::~UVrmPoseableMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmPoseableMeshComponent, UVrmPoseableMeshComponent::StaticClass, TEXT("UVrmPoseableMeshComponent"), &Z_Registration_Info_UClass_UVrmPoseableMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmPoseableMeshComponent), 3391227849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_4048882210(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
