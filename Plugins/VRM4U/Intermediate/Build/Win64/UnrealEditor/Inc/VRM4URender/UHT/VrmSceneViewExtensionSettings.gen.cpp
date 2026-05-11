// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4URender/Public/VrmSceneViewExtensionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSceneViewExtensionSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRM4URender();
	VRM4URENDER_API UClass* Z_Construct_UClass_AVrmSceneViewExtensionSettings();
	VRM4URENDER_API UClass* Z_Construct_UClass_AVrmSceneViewExtensionSettings_NoRegister();
// End Cross Module References
	void AVrmSceneViewExtensionSettings::StaticRegisterNativesAVrmSceneViewExtensionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrmSceneViewExtensionSettings);
	UClass* Z_Construct_UClass_AVrmSceneViewExtensionSettings_NoRegister()
	{
		return AVrmSceneViewExtensionSettings::StaticClass();
	}
	struct Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExtension_MetaData[];
#endif
		static void NewProp_bUseExtension_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4URender,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrmSceneViewExtensionSettings.h" },
		{ "ModuleRelativePath", "Public/VrmSceneViewExtensionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::NewProp_bUseExtension_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmSceneViewExtensionSettings.h" },
	};
#endif
	void Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::NewProp_bUseExtension_SetBit(void* Obj)
	{
		((AVrmSceneViewExtensionSettings*)Obj)->bUseExtension = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::NewProp_bUseExtension = { "bUseExtension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVrmSceneViewExtensionSettings), &Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::NewProp_bUseExtension_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::NewProp_bUseExtension_MetaData), Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::NewProp_bUseExtension_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::NewProp_bUseExtension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrmSceneViewExtensionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::ClassParams = {
		&AVrmSceneViewExtensionSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVrmSceneViewExtensionSettings()
	{
		if (!Z_Registration_Info_UClass_AVrmSceneViewExtensionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrmSceneViewExtensionSettings.OuterSingleton, Z_Construct_UClass_AVrmSceneViewExtensionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrmSceneViewExtensionSettings.OuterSingleton;
	}
	template<> VRM4URENDER_API UClass* StaticClass<AVrmSceneViewExtensionSettings>()
	{
		return AVrmSceneViewExtensionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrmSceneViewExtensionSettings);
	AVrmSceneViewExtensionSettings::~AVrmSceneViewExtensionSettings() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneViewExtensionSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneViewExtensionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrmSceneViewExtensionSettings, AVrmSceneViewExtensionSettings::StaticClass, TEXT("AVrmSceneViewExtensionSettings"), &Z_Registration_Info_UClass_AVrmSceneViewExtensionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrmSceneViewExtensionSettings), 935815075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneViewExtensionSettings_h_2836198519(TEXT("/Script/VRM4URender"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneViewExtensionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmSceneViewExtensionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
