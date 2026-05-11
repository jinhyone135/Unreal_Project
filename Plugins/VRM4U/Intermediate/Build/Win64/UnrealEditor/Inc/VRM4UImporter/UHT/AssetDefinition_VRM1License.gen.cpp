// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AssetTypeActions/AssetDefinition_VRM1License.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_VRM1License() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRM1License();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRM1License_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAssetDefinition_VRMAssetList();
// End Cross Module References
	void UAssetDefinition_VRM1License::StaticRegisterNativesUAssetDefinition_VRM1License()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_VRM1License);
	UClass* Z_Construct_UClass_UAssetDefinition_VRM1License_NoRegister()
	{
		return UAssetDefinition_VRM1License::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_VRM1License_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_VRMAssetList,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_VRM1License.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_VRM1License.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_VRM1License>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::ClassParams = {
		&UAssetDefinition_VRM1License::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_VRM1License()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_VRM1License.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_VRM1License.OuterSingleton, Z_Construct_UClass_UAssetDefinition_VRM1License_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_VRM1License.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAssetDefinition_VRM1License>()
	{
		return UAssetDefinition_VRM1License::StaticClass();
	}
	UAssetDefinition_VRM1License::UAssetDefinition_VRM1License() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_VRM1License);
	UAssetDefinition_VRM1License::~UAssetDefinition_VRM1License() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRM1License_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRM1License_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_VRM1License, UAssetDefinition_VRM1License::StaticClass, TEXT("UAssetDefinition_VRM1License"), &Z_Registration_Info_UClass_UAssetDefinition_VRM1License, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_VRM1License), 1108182576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRM1License_h_1086783330(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRM1License_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UImporter_Private_AssetTypeActions_AssetDefinition_VRM1License_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
