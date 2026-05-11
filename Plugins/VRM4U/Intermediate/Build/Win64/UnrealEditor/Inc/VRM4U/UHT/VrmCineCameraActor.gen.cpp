// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCineCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCineCameraActor() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_AVrmCineCameraActor();
	VRM4U_API UClass* Z_Construct_UClass_AVrmCineCameraActor_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVrmCineCameraActor::execGetVrmCineCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVrmCineCameraComponent**)Z_Param__Result=P_THIS->GetVrmCineCameraComponent();
		P_NATIVE_END;
	}
	void AVrmCineCameraActor::StaticRegisterNativesAVrmCineCameraActor()
	{
		UClass* Class = AVrmCineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVrmCineCameraComponent", &AVrmCineCameraActor::execGetVrmCineCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics
	{
		struct VrmCineCameraActor_eventGetVrmCineCameraComponent_Parms
		{
			UVrmCineCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmCineCameraActor_eventGetVrmCineCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UVrmCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/VrmCineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVrmCineCameraActor, nullptr, "GetVrmCineCameraComponent", nullptr, nullptr, Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::VrmCineCameraActor_eventGetVrmCineCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::VrmCineCameraActor_eventGetVrmCineCameraComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrmCineCameraActor);
	UClass* Z_Construct_UClass_AVrmCineCameraActor_NoRegister()
	{
		return AVrmCineCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AVrmCineCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrmCineCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmCineCameraActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVrmCineCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent, "GetVrmCineCameraComponent" }, // 4110297592
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmCineCameraActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmCineCameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "VrmCineCameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmCineCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrmCineCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrmCineCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrmCineCameraActor_Statics::ClassParams = {
		&AVrmCineCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmCineCameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVrmCineCameraActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AVrmCineCameraActor()
	{
		if (!Z_Registration_Info_UClass_AVrmCineCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrmCineCameraActor.OuterSingleton, Z_Construct_UClass_AVrmCineCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrmCineCameraActor.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<AVrmCineCameraActor>()
	{
		return AVrmCineCameraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrmCineCameraActor);
	AVrmCineCameraActor::~AVrmCineCameraActor() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrmCineCameraActor, AVrmCineCameraActor::StaticClass, TEXT("AVrmCineCameraActor"), &Z_Registration_Info_UClass_AVrmCineCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrmCineCameraActor), 2654122269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraActor_h_2521004720(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
