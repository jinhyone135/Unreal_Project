// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4ULoader_init() {}
	VRM4ULOADER_API UFunction* Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VRM4ULoader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VRM4ULoader()
	{
		if (!Z_Registration_Info_UPackage__Script_VRM4ULoader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VRM4ULoader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD2CB12D2,
				0xB077DDC1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VRM4ULoader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VRM4ULoader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VRM4ULoader(Z_Construct_UPackage__Script_VRM4ULoader, TEXT("/Script/VRM4ULoader"), Z_Registration_Info_UPackage__Script_VRM4ULoader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD2CB12D2, 0xB077DDC1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
