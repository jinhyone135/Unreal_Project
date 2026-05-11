// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4URender/Public/VrmExtensionRimFilterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmExtensionRimFilterData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VRM4URender();
	VRM4URENDER_API UClass* Z_Construct_UClass_UVrmExtensionRimFilterData();
	VRM4URENDER_API UClass* Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister();
// End Cross Module References
	void UVrmExtensionRimFilterData::StaticRegisterNativesUVrmExtensionRimFilterData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmExtensionRimFilterData);
	UClass* Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister()
	{
		return UVrmExtensionRimFilterData::StaticClass();
	}
	struct Z_Construct_UClass_UVrmExtensionRimFilterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFilter_MetaData[];
#endif
		static void NewProp_bUseFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomLighPosition_MetaData[];
#endif
		static void NewProp_bUseCustomLighPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomLighPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RimEdgeFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RimEdgeFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBinaryEdge_MetaData[];
#endif
		static void NewProp_bUseBinaryEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBinaryEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RimEdgeBinaryRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RimEdgeBinaryRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomLighColor_MetaData[];
#endif
		static void NewProp_bUseCustomLighColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomLighColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleScreenScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleScreenScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStencilMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomStencilMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4URender,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmExtensionRimFilterData.h" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseFilter_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	void Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseFilter_SetBit(void* Obj)
	{
		((UVrmExtensionRimFilterData*)Obj)->bUseFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseFilter = { "bUseFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmExtensionRimFilterData), &Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseFilter_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseFilter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_Priority_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_Priority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighPosition_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	void Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighPosition_SetBit(void* Obj)
	{
		((UVrmExtensionRimFilterData*)Obj)->bUseCustomLighPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighPosition = { "bUseCustomLighPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmExtensionRimFilterData), &Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighPosition_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightPosition_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightPosition = { "LightPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, LightPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightPosition_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightDirection_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightDirection = { "LightDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, LightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightDirection_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightScale = { "LightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, LightScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightScale_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeFade_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeFade = { "RimEdgeFade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, RimEdgeFade), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeFade_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeFade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseBinaryEdge_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	void Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseBinaryEdge_SetBit(void* Obj)
	{
		((UVrmExtensionRimFilterData*)Obj)->bUseBinaryEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseBinaryEdge = { "bUseBinaryEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmExtensionRimFilterData), &Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseBinaryEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseBinaryEdge_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseBinaryEdge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeBinaryRange_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeBinaryRange = { "RimEdgeBinaryRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, RimEdgeBinaryRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeBinaryRange_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeBinaryRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighColor_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	void Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighColor_SetBit(void* Obj)
	{
		((UVrmExtensionRimFilterData*)Obj)->bUseCustomLighColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighColor = { "bUseCustomLighColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmExtensionRimFilterData), &Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighColor_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightColor_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScreenScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScreenScale = { "SampleScreenScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, SampleScreenScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScreenScale_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScreenScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScale = { "SampleScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, SampleScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScale_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_CustomStencilMask_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmExtensionRimFilterData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_CustomStencilMask = { "CustomStencilMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmExtensionRimFilterData, CustomStencilMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_CustomStencilMask_MetaData), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_CustomStencilMask_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseBinaryEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_RimEdgeBinaryRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_bUseCustomLighColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScreenScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_SampleScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::NewProp_CustomStencilMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmExtensionRimFilterData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::ClassParams = {
		&UVrmExtensionRimFilterData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrmExtensionRimFilterData()
	{
		if (!Z_Registration_Info_UClass_UVrmExtensionRimFilterData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmExtensionRimFilterData.OuterSingleton, Z_Construct_UClass_UVrmExtensionRimFilterData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmExtensionRimFilterData.OuterSingleton;
	}
	template<> VRM4URENDER_API UClass* StaticClass<UVrmExtensionRimFilterData>()
	{
		return UVrmExtensionRimFilterData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmExtensionRimFilterData);
	UVrmExtensionRimFilterData::~UVrmExtensionRimFilterData() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmExtensionRimFilterData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmExtensionRimFilterData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmExtensionRimFilterData, UVrmExtensionRimFilterData::StaticClass, TEXT("UVrmExtensionRimFilterData"), &Z_Registration_Info_UClass_UVrmExtensionRimFilterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmExtensionRimFilterData), 4077231614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmExtensionRimFilterData_h_2171657006(TEXT("/Script/VRM4URender"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmExtensionRimFilterData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VrmExtensionRimFilterData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
