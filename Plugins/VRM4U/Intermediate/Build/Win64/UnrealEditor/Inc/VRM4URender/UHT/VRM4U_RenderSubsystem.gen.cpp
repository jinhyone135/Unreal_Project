// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4URender/Public/VRM4U_RenderSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4U_RenderSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4URender();
	VRM4URENDER_API UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem();
	VRM4URENDER_API UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem_NoRegister();
	VRM4URENDER_API UClass* Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister();
	VRM4URENDER_API UEnum* Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource();
// End Cross Module References
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execSetViewExtension)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewExtension(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execResetSceneTextureExtentHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSceneTextureExtentHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveAllCaptureTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllCaptureTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveCaptureTexture)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCaptureTexture(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execAddCaptureTexture)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
		P_GET_PROPERTY(FByteProperty,Z_Param_CaptureSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCaptureTexture(Z_Param_Texture,EVRM4U_CaptureSource(Z_Param_CaptureSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveRimFilterDataByPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Priotiry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRimFilterDataByPriority(Z_Param_Priotiry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveRimFilterData)
	{
		P_GET_OBJECT(UVrmExtensionRimFilterData,Z_Param_FilterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRimFilterData(Z_Param_FilterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execAddRimFilterData)
	{
		P_GET_OBJECT(UVrmExtensionRimFilterData,Z_Param_FilterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRimFilterData(Z_Param_FilterData);
		P_NATIVE_END;
	}
	void UVRM4U_RenderSubsystem::StaticRegisterNativesUVRM4U_RenderSubsystem()
	{
		UClass* Class = UVRM4U_RenderSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCaptureTexture", &UVRM4U_RenderSubsystem::execAddCaptureTexture },
			{ "AddRimFilterData", &UVRM4U_RenderSubsystem::execAddRimFilterData },
			{ "RemoveAllCaptureTexture", &UVRM4U_RenderSubsystem::execRemoveAllCaptureTexture },
			{ "RemoveCaptureTexture", &UVRM4U_RenderSubsystem::execRemoveCaptureTexture },
			{ "RemoveRimFilterData", &UVRM4U_RenderSubsystem::execRemoveRimFilterData },
			{ "RemoveRimFilterDataByPriority", &UVRM4U_RenderSubsystem::execRemoveRimFilterDataByPriority },
			{ "ResetSceneTextureExtentHistory", &UVRM4U_RenderSubsystem::execResetSceneTextureExtentHistory },
			{ "SetViewExtension", &UVRM4U_RenderSubsystem::execSetViewExtension },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics
	{
		struct VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms
		{
			UTextureRenderTarget2D* Texture;
			TEnumAsByte<EVRM4U_CaptureSource> CaptureSource;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms, CaptureSource), Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource, METADATA_PARAMS(0, nullptr) }; // 4211237642
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_CaptureSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_CaptureSource", "ColorTextureOverlay" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "AddCaptureTexture", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics
	{
		struct VRM4U_RenderSubsystem_eventAddRimFilterData_Parms
		{
			UVrmExtensionRimFilterData* FilterData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::NewProp_FilterData = { "FilterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventAddRimFilterData_Parms, FilterData), Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::NewProp_FilterData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "AddRimFilterData", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::VRM4U_RenderSubsystem_eventAddRimFilterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::VRM4U_RenderSubsystem_eventAddRimFilterData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveAllCaptureTexture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics
	{
		struct VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms
		{
			UTextureRenderTarget2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveCaptureTexture", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics
	{
		struct VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms
		{
			UVrmExtensionRimFilterData* FilterData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::NewProp_FilterData = { "FilterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms, FilterData), Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::NewProp_FilterData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveRimFilterData", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics
	{
		struct VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms
		{
			int32 Priotiry;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priotiry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::NewProp_Priotiry = { "Priotiry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms, Priotiry), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::NewProp_Priotiry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_Priotiry", "-1" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveRimFilterDataByPriority", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "ResetSceneTextureExtentHistory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics
	{
		struct VRM4U_RenderSubsystem_eventSetViewExtension_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VRM4U_RenderSubsystem_eventSetViewExtension_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRM4U_RenderSubsystem_eventSetViewExtension_Parms), &Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "SetViewExtension", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::VRM4U_RenderSubsystem_eventSetViewExtension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::VRM4U_RenderSubsystem_eventSetViewExtension_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRM4U_RenderSubsystem);
	UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem_NoRegister()
	{
		return UVRM4U_RenderSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4URender,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture, "AddCaptureTexture" }, // 3002318562
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData, "AddRimFilterData" }, // 2490579569
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture, "RemoveAllCaptureTexture" }, // 2758573806
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture, "RemoveCaptureTexture" }, // 1430098466
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData, "RemoveRimFilterData" }, // 2967090118
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority, "RemoveRimFilterDataByPriority" }, // 1151859671
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory, "ResetSceneTextureExtentHistory" }, // 121046391
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension, "SetViewExtension" }, // 3500075757
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4U_RenderSubsystem.h" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4U_RenderSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::ClassParams = {
		&UVRM4U_RenderSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.OuterSingleton, Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.OuterSingleton;
	}
	template<> VRM4URENDER_API UClass* StaticClass<UVRM4U_RenderSubsystem>()
	{
		return UVRM4U_RenderSubsystem::StaticClass();
	}
	UVRM4U_RenderSubsystem::UVRM4U_RenderSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4U_RenderSubsystem);
	UVRM4U_RenderSubsystem::~UVRM4U_RenderSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRM4U_RenderSubsystem, UVRM4U_RenderSubsystem::StaticClass, TEXT("UVRM4U_RenderSubsystem"), &Z_Registration_Info_UClass_UVRM4U_RenderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRM4U_RenderSubsystem), 2752510280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_1901908943(TEXT("/Script/VRM4URender"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
