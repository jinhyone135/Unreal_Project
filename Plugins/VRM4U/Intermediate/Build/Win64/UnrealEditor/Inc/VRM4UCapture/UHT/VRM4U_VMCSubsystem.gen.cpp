// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UCapture/Public/VRM4U_VMCSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4U_VMCSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_VRM4UCapture();
	VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem();
	VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execGetVMCData)
	{
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_BoneData);
		P_GET_TMAP_REF(FString,float,Z_Param_Out_CurveData);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVMCData(Z_Param_Out_BoneData,Z_Param_Out_CurveData,Z_Param_ServerAddress,Z_Param_port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execDestroyVMCServerAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyVMCServerAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execDestroyVMCServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyVMCServer(Z_Param_ServerAddress,Z_Param_port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execCreateVMCServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateVMCServer(Z_Param_ServerAddress,Z_Param_port);
		P_NATIVE_END;
	}
	void UVRM4U_VMCSubsystem::StaticRegisterNativesUVRM4U_VMCSubsystem()
	{
		UClass* Class = UVRM4U_VMCSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateVMCServer", &UVRM4U_VMCSubsystem::execCreateVMCServer },
			{ "DestroyVMCServer", &UVRM4U_VMCSubsystem::execDestroyVMCServer },
			{ "DestroyVMCServerAll", &UVRM4U_VMCSubsystem::execDestroyVMCServerAll },
			{ "GetVMCData", &UVRM4U_VMCSubsystem::execGetVMCData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics
	{
		struct VRM4U_VMCSubsystem_eventCreateVMCServer_Parms
		{
			FString ServerAddress;
			int32 port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ServerAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventCreateVMCServer_Parms, ServerAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ServerAddress_MetaData), Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ServerAddress_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventCreateVMCServer_Parms, port), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRM4U_VMCSubsystem_eventCreateVMCServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRM4U_VMCSubsystem_eventCreateVMCServer_Parms), &Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ServerAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "CreateVMCServer", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::VRM4U_VMCSubsystem_eventCreateVMCServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::VRM4U_VMCSubsystem_eventCreateVMCServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics
	{
		struct VRM4U_VMCSubsystem_eventDestroyVMCServer_Parms
		{
			FString ServerAddress;
			int32 port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::NewProp_ServerAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventDestroyVMCServer_Parms, ServerAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::NewProp_ServerAddress_MetaData), Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::NewProp_ServerAddress_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventDestroyVMCServer_Parms, port), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::NewProp_ServerAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::NewProp_port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "DestroyVMCServer", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::VRM4U_VMCSubsystem_eventDestroyVMCServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::VRM4U_VMCSubsystem_eventDestroyVMCServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "DestroyVMCServerAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics
	{
		struct VRM4U_VMCSubsystem_eventGetVMCData_Parms
		{
			TMap<FString,FTransform> BoneData;
			TMap<FString,float> CurveData;
			FString ServerAddress;
			int32 port;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneData_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveData_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_BoneData_ValueProp = { "BoneData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_BoneData_Key_KeyProp = { "BoneData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetVMCData_Parms, BoneData), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_CurveData_ValueProp = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_CurveData_Key_KeyProp = { "CurveData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetVMCData_Parms, CurveData), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetVMCData_Parms, ServerAddress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetVMCData_Parms, port), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRM4U_VMCSubsystem_eventGetVMCData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRM4U_VMCSubsystem_eventGetVMCData_Parms), &Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_BoneData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_BoneData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_BoneData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_CurveData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_CurveData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_CurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_ServerAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "GetVMCData", nullptr, nullptr, Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::VRM4U_VMCSubsystem_eventGetVMCData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::VRM4U_VMCSubsystem_eventGetVMCData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRM4U_VMCSubsystem);
	UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem_NoRegister()
	{
		return UVRM4U_VMCSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_CreateVMCServer, "CreateVMCServer" }, // 3897609729
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServer, "DestroyVMCServer" }, // 3142032837
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_DestroyVMCServerAll, "DestroyVMCServerAll" }, // 3817821018
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetVMCData, "GetVMCData" }, // 1445668469
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4U_VMCSubsystem.h" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4U_VMCSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::ClassParams = {
		&UVRM4U_VMCSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVRM4U_VMCSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRM4U_VMCSubsystem.OuterSingleton, Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRM4U_VMCSubsystem.OuterSingleton;
	}
	template<> VRM4UCAPTURE_API UClass* StaticClass<UVRM4U_VMCSubsystem>()
	{
		return UVRM4U_VMCSubsystem::StaticClass();
	}
	UVRM4U_VMCSubsystem::UVRM4U_VMCSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4U_VMCSubsystem);
	UVRM4U_VMCSubsystem::~UVRM4U_VMCSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRM4U_VMCSubsystem, UVRM4U_VMCSubsystem::StaticClass, TEXT("UVRM4U_VMCSubsystem"), &Z_Registration_Info_UClass_UVRM4U_VMCSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRM4U_VMCSubsystem), 1553689196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_961398093(TEXT("/Script/VRM4UCapture"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
