// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4URender/Public/VrmSceneCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSceneCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4URender();
	VRM4URENDER_API UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D();
	VRM4URENDER_API UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void UVrmSceneCaptureComponent2D::StaticRegisterNativesUVrmSceneCaptureComponent2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmSceneCaptureComponent2D);
	UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D_NoRegister()
	{
		return UVrmSceneCaptureComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTargetA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTargetB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4URender,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Cine Capture Component extends Scene Capture to allow users to render Cine Camera Component into a render target. \n* Cine Capture has a few modifiable properties, but most of the properties are controlled by Cine Camera Component.\n* Cine Capture Component is required to be parented to Cine Camera Component or a class that extends it.\n* \n*/" },
#endif
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "VrmSceneCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/VrmSceneCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cine Capture Component extends Scene Capture to allow users to render Cine Camera Component into a render target.\nCine Capture has a few modifiable properties, but most of the properties are controlled by Cine Camera Component.\nCine Capture Component is required to be parented to Cine Camera Component or a class that extends it." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetA_MetaData[] = {
		{ "Category", "Capture Settings" },
		{ "ModuleRelativePath", "Public/VrmSceneCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetA = { "RenderTargetA", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmSceneCaptureComponent2D, RenderTargetA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetA_MetaData), Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetB_MetaData[] = {
		{ "Category", "Capture Settings" },
		{ "ModuleRelativePath", "Public/VrmSceneCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetB = { "RenderTargetB", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmSceneCaptureComponent2D, RenderTargetB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetB_MetaData), Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::NewProp_RenderTargetB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmSceneCaptureComponent2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::ClassParams = {
		&UVrmSceneCaptureComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrmSceneCaptureComponent2D()
	{
		if (!Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D.OuterSingleton, Z_Construct_UClass_UVrmSceneCaptureComponent2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D.OuterSingleton;
	}
	template<> VRM4URENDER_API UClass* StaticClass<UVrmSceneCaptureComponent2D>()
	{
		return UVrmSceneCaptureComponent2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmSceneCaptureComponent2D);
	UVrmSceneCaptureComponent2D::~UVrmSceneCaptureComponent2D() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmSceneCaptureComponent2D, UVrmSceneCaptureComponent2D::StaticClass, TEXT("UVrmSceneCaptureComponent2D"), &Z_Registration_Info_UClass_UVrmSceneCaptureComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmSceneCaptureComponent2D), 2388450658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_3843747433(TEXT("/Script/VRM4URender"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
