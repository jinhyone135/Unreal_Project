// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4URender/Private/VRM4URender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4URender() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VRM4URender();
	VRM4URENDER_API UEnum* Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRM4U_CaptureSource;
	static UEnum* EVRM4U_CaptureSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRM4U_CaptureSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRM4U_CaptureSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource, (UObject*)Z_Construct_UPackage__Script_VRM4URender(), TEXT("EVRM4U_CaptureSource"));
		}
		return Z_Registration_Info_UEnum_EVRM4U_CaptureSource.OuterSingleton;
	}
	template<> VRM4URENDER_API UEnum* StaticEnum<EVRM4U_CaptureSource>()
	{
		return EVRM4U_CaptureSource_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enumerators[] = {
		{ "ColorTexturePostOpaque", (int64)ColorTexturePostOpaque },
		{ "ColorTextureOverlay", (int64)ColorTextureOverlay },
		{ "ColorTexturePreTonemap", (int64)ColorTexturePreTonemap },
		{ "ColorTexturePostTonemap", (int64)ColorTexturePostTonemap },
		{ "ColorTextureLastPass", (int64)ColorTextureLastPass },
		{ "DepthTexture", (int64)DepthTexture },
		{ "NormalTexture", (int64)NormalTexture },
		{ "VelocityTexture", (int64)VelocityTexture },
		{ "SceneColorTexturePostOpaque", (int64)SceneColorTexturePostOpaque },
		{ "SceneColorTextureOverlay", (int64)SceneColorTextureOverlay },
		{ "SceneDepthTexture", (int64)SceneDepthTexture },
		{ "GBufferATexture", (int64)GBufferATexture },
		{ "GBufferBTexture", (int64)GBufferBTexture },
		{ "GBufferCTexture", (int64)GBufferCTexture },
		{ "GBufferDTexture", (int64)GBufferDTexture },
		{ "GBufferETexture", (int64)GBufferETexture },
		{ "GBufferFTexture", (int64)GBufferFTexture },
		{ "GBufferVelocityTexture", (int64)GBufferVelocityTexture },
		{ "ScreenSpaceAOTexture", (int64)ScreenSpaceAOTexture },
		{ "CustomDepthTexture", (int64)CustomDepthTexture },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enum_MetaDataParams[] = {
		{ "ColorTextureLastPass.Name", "ColorTextureLastPass" },
		{ "ColorTextureOverlay.Name", "ColorTextureOverlay" },
		{ "ColorTexturePostOpaque.Name", "ColorTexturePostOpaque" },
		{ "ColorTexturePostTonemap.Name", "ColorTexturePostTonemap" },
		{ "ColorTexturePreTonemap.Name", "ColorTexturePreTonemap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#define SPRITER_IMPORT_ERROR(FormatString, ...) \\\n//\x09if (!bSilent) { UE_LOG(LogVRM4URender, Warning, FormatString, __VA_ARGS__); }\n//#define SPRITER_IMPORT_WARNING(FormatString, ...) \\\n//\x09if (!bSilent) { UE_LOG(LogVRM4URender, Warning, FormatString, __VA_ARGS__); }\n" },
#endif
		{ "CustomDepthTexture.Comment", "// Custom Depth / Stencil\n" },
		{ "CustomDepthTexture.Name", "CustomDepthTexture" },
		{ "CustomDepthTexture.ToolTip", "Custom Depth / Stencil" },
		{ "DepthTexture.Name", "DepthTexture" },
		{ "GBufferATexture.Comment", "// GBuffer\n" },
		{ "GBufferATexture.Name", "GBufferATexture" },
		{ "GBufferATexture.ToolTip", "GBuffer" },
		{ "GBufferBTexture.Name", "GBufferBTexture" },
		{ "GBufferCTexture.Name", "GBufferCTexture" },
		{ "GBufferDTexture.Name", "GBufferDTexture" },
		{ "GBufferETexture.Name", "GBufferETexture" },
		{ "GBufferFTexture.Name", "GBufferFTexture" },
		{ "GBufferVelocityTexture.Name", "GBufferVelocityTexture" },
		{ "ModuleRelativePath", "Private/VRM4URender.h" },
		{ "NormalTexture.Name", "NormalTexture" },
		{ "SceneColorTextureOverlay.Name", "SceneColorTextureOverlay" },
		{ "SceneColorTexturePostOpaque.Comment", "//SmallDepthTexture,\n" },
		{ "SceneColorTexturePostOpaque.Name", "SceneColorTexturePostOpaque" },
		{ "SceneColorTexturePostOpaque.ToolTip", "SmallDepthTexture," },
		{ "SceneDepthTexture.Name", "SceneDepthTexture" },
		{ "ScreenSpaceAOTexture.Comment", "// SSAO\n" },
		{ "ScreenSpaceAOTexture.Name", "ScreenSpaceAOTexture" },
		{ "ScreenSpaceAOTexture.ToolTip", "SSAO" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#define SPRITER_IMPORT_ERROR(FormatString, ...) \\\n       if (!bSilent) { UE_LOG(LogVRM4URender, Warning, FormatString, __VA_ARGS__); }\n#define SPRITER_IMPORT_WARNING(FormatString, ...) \\\n       if (!bSilent) { UE_LOG(LogVRM4URender, Warning, FormatString, __VA_ARGS__); }" },
#endif
		{ "VelocityTexture.Name", "VelocityTexture" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4URender,
		nullptr,
		"EVRM4U_CaptureSource",
		"EVRM4U_CaptureSource",
		Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource()
	{
		if (!Z_Registration_Info_UEnum_EVRM4U_CaptureSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRM4U_CaptureSource.InnerSingleton, Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRM4U_CaptureSource.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Private_VRM4URender_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Private_VRM4URender_h_Statics::EnumInfo[] = {
		{ EVRM4U_CaptureSource_StaticEnum, TEXT("EVRM4U_CaptureSource"), &Z_Registration_Info_UEnum_EVRM4U_CaptureSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4211237642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Private_VRM4URender_h_3704474795(TEXT("/Script/VRM4URender"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Private_VRM4URender_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Private_VRM4URender_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
