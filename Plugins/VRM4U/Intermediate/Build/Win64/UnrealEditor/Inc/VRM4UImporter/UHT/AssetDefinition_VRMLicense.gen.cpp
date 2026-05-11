// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AssetTypeActions/AssetDefinition_VRMLicense.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_VRMLicense() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMAssetList();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMLicense();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMLicense_NoRegister();
// End Cross Module References
	void UAssetDefinition_VRMLicense::StaticRegisterNativesUAssetDefinition_VRMLicense()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_VRMLicense);
	UClass* Z_Construct_UClass_UAssetDefinition_VRMLicense_NoRegister()
	{
		return UAssetDefinition_VRMLicense::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_VRMAssetList,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_VRMLicense.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_VRMLicense.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_VRMLicense>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::ClassParams = {
		&UAssetDefinition_VRMLicense::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_VRMLicense()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_VRMLicense.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_VRMLicense.OuterSingleton, Z_Construct_UClass_UAssetDefinition_VRMLicense_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_VRMLicense.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAssetDefinition_VRMLicense>()
	{
		return UAssetDefinition_VRMLicense::StaticClass();
	}
	UAssetDefinition_VRMLicense::UAssetDefinition_VRMLicense() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_VRMLicense);
	UAssetDefinition_VRMLicense::~UAssetDefinition_VRMLicense() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMLicense_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMLicense_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_VRMLicense, UAssetDefinition_VRMLicense::StaticClass, TEXT("UAssetDefinition_VRMLicense"), &Z_Registration_Info_UClass_UAssetDefinition_VRMLicense, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_VRMLicense), 2675338308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMLicense_h_2305433890(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMLicense_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRMLicense_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
