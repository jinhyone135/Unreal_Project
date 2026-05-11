// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmEditorEventComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmEditorEventComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmEditorEventComponent();
	VRM4U_API UClass* Z_Construct_UClass_UVrmEditorEventComponent_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRM4U_PIEEvent;
	static UEnum* EVRM4U_PIEEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRM4U_PIEEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRM4U_PIEEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRM4U_PIEEvent"));
		}
		return Z_Registration_Info_UEnum_EVRM4U_PIEEvent.OuterSingleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRM4U_PIEEvent>()
	{
		return EVRM4U_PIEEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::Enumerators[] = {
		{ "EVRM4U_PIEEvent::PreBeginPIE", (int64)EVRM4U_PIEEvent::PreBeginPIE },
		{ "EVRM4U_PIEEvent::BeginPIE", (int64)EVRM4U_PIEEvent::BeginPIE },
		{ "EVRM4U_PIEEvent::PrePIEEnded", (int64)EVRM4U_PIEEvent::PrePIEEnded },
		{ "EVRM4U_PIEEvent::PostPIEStarted", (int64)EVRM4U_PIEEvent::PostPIEStarted },
		{ "EVRM4U_PIEEvent::EndPIE", (int64)EVRM4U_PIEEvent::EndPIE },
		{ "EVRM4U_PIEEvent::PausePIE", (int64)EVRM4U_PIEEvent::PausePIE },
		{ "EVRM4U_PIEEvent::ResumePIE", (int64)EVRM4U_PIEEvent::ResumePIE },
		{ "EVRM4U_PIEEvent::SingleStepPIE", (int64)EVRM4U_PIEEvent::SingleStepPIE },
		{ "EVRM4U_PIEEvent::OnPreSwitchBeginPIEAndSIE", (int64)EVRM4U_PIEEvent::OnPreSwitchBeginPIEAndSIE },
		{ "EVRM4U_PIEEvent::OnSwitchBeginPIEAndSIE", (int64)EVRM4U_PIEEvent::OnSwitchBeginPIEAndSIE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::Enum_MetaDataParams[] = {
		{ "BeginPIE.Name", "EVRM4U_PIEEvent::BeginPIE" },
		{ "BlueprintType", "true" },
		{ "EndPIE.Name", "EVRM4U_PIEEvent::EndPIE" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
		{ "OnPreSwitchBeginPIEAndSIE.Name", "EVRM4U_PIEEvent::OnPreSwitchBeginPIEAndSIE" },
		{ "OnSwitchBeginPIEAndSIE.Name", "EVRM4U_PIEEvent::OnSwitchBeginPIEAndSIE" },
		{ "PausePIE.Name", "EVRM4U_PIEEvent::PausePIE" },
		{ "PostPIEStarted.Name", "EVRM4U_PIEEvent::PostPIEStarted" },
		{ "PreBeginPIE.Name", "EVRM4U_PIEEvent::PreBeginPIE" },
		{ "PrePIEEnded.Name", "EVRM4U_PIEEvent::PrePIEEnded" },
		{ "ResumePIE.Name", "EVRM4U_PIEEvent::ResumePIE" },
		{ "SingleStepPIE.Name", "EVRM4U_PIEEvent::SingleStepPIE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		"EVRM4U_PIEEvent",
		"EVRM4U_PIEEvent",
		Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent()
	{
		if (!Z_Registration_Info_UEnum_EVRM4U_PIEEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRM4U_PIEEvent.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRM4U_PIEEvent.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics
	{
		struct VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms
		{
			bool dummy;
		};
		static void NewProp_dummy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_dummy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms*)Obj)->dummy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy = { "dummy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms), &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "VrmSelectionChangedEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UVrmEditorEventComponent::FVrmSelectionChangedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmSelectionChangedEventDelegate, bool dummy)
{
	struct VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms
	{
		bool dummy;
	};
	VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms Parms;
	Parms.dummy=dummy ? true : false;
	VrmSelectionChangedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics
	{
		struct VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms
		{
			bool dummy;
		};
		static void NewProp_dummy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_dummy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms*)Obj)->dummy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy = { "dummy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms), &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "VrmSelectionObjectEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UVrmEditorEventComponent::FVrmSelectionObjectEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmSelectionObjectEventDelegate, bool dummy)
{
	struct VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms
	{
		bool dummy;
	};
	VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms Parms;
	Parms.dummy=dummy ? true : false;
	VrmSelectionObjectEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics
	{
		struct VrmEditorEventComponent_eventVrmPIEEventDelegate_Parms
		{
			EVRM4U_PIEEvent dummy;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_dummy_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dummy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::NewProp_dummy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::NewProp_dummy = { "dummy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmEditorEventComponent_eventVrmPIEEventDelegate_Parms, dummy), Z_Construct_UEnum_VRM4U_EVRM4U_PIEEvent, METADATA_PARAMS(0, nullptr) }; // 3586213685
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::NewProp_dummy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::NewProp_dummy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "VrmPIEEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmPIEEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmPIEEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UVrmEditorEventComponent::FVrmPIEEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmPIEEventDelegate, EVRM4U_PIEEvent dummy)
{
	struct VrmEditorEventComponent_eventVrmPIEEventDelegate_Parms
	{
		EVRM4U_PIEEvent dummy;
	};
	VrmEditorEventComponent_eventVrmPIEEventDelegate_Parms Parms;
	Parms.dummy=dummy;
	VrmPIEEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics
	{
		struct VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms
		{
			float CurrentTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::NewProp_CurrentTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "VrmGlobalTimeChangeEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UVrmEditorEventComponent::FVrmGlobalTimeChangeEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmGlobalTimeChangeEventDelegate, float CurrentTime)
{
	struct VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms
	{
		float CurrentTime;
	};
	VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms Parms;
	Parms.CurrentTime=CurrentTime;
	VrmGlobalTimeChangeEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVrmEditorEventComponent::execSetGlobalTimeCheck)
	{
		P_GET_UBOOL(Z_Param_bCheckOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalTimeCheck(Z_Param_bCheckOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmEditorEventComponent::execSetPIEEventCheck)
	{
		P_GET_UBOOL(Z_Param_bCheckOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPIEEventCheck(Z_Param_bCheckOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmEditorEventComponent::execSetSelectCheck)
	{
		P_GET_UBOOL(Z_Param_bCheckOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectCheck(Z_Param_bCheckOn);
		P_NATIVE_END;
	}
	void UVrmEditorEventComponent::StaticRegisterNativesUVrmEditorEventComponent()
	{
		UClass* Class = UVrmEditorEventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGlobalTimeCheck", &UVrmEditorEventComponent::execSetGlobalTimeCheck },
			{ "SetPIEEventCheck", &UVrmEditorEventComponent::execSetPIEEventCheck },
			{ "SetSelectCheck", &UVrmEditorEventComponent::execSetSelectCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics
	{
		struct VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms
		{
			bool bCheckOn;
		};
		static void NewProp_bCheckOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms*)Obj)->bCheckOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms), &Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "SetGlobalTimeCheck", nullptr, nullptr, Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics
	{
		struct VrmEditorEventComponent_eventSetPIEEventCheck_Parms
		{
			bool bCheckOn;
		};
		static void NewProp_bCheckOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventSetPIEEventCheck_Parms*)Obj)->bCheckOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventSetPIEEventCheck_Parms), &Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::NewProp_bCheckOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "SetPIEEventCheck", nullptr, nullptr, Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::VrmEditorEventComponent_eventSetPIEEventCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::VrmEditorEventComponent_eventSetPIEEventCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics
	{
		struct VrmEditorEventComponent_eventSetSelectCheck_Parms
		{
			bool bCheckOn;
		};
		static void NewProp_bCheckOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventSetSelectCheck_Parms*)Obj)->bCheckOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventSetSelectCheck_Parms), &Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "SetSelectCheck", nullptr, nullptr, Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::VrmEditorEventComponent_eventSetSelectCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::VrmEditorEventComponent_eventSetSelectCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmEditorEventComponent);
	UClass* Z_Construct_UClass_UVrmEditorEventComponent_NoRegister()
	{
		return UVrmEditorEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmEditorEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionObject_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPIEEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPIEEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalTimeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalTimeChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmEditorEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmEditorEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck, "SetGlobalTimeCheck" }, // 3990021161
		{ &Z_Construct_UFunction_UVrmEditorEventComponent_SetPIEEventCheck, "SetPIEEventCheck" }, // 1307238285
		{ &Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck, "SetSelectCheck" }, // 2234913410
		{ &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature, "VrmGlobalTimeChangeEventDelegate__DelegateSignature" }, // 3180462659
		{ &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature, "VrmPIEEventDelegate__DelegateSignature" }, // 1336862342
		{ &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature, "VrmSelectionChangedEventDelegate__DelegateSignature" }, // 3246601233
		{ &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature, "VrmSelectionObjectEventDelegate__DelegateSignature" }, // 521640873
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VrmEditorEventComponent.h" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange = { "OnSelectionChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmEditorEventComponent, OnSelectionChange), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange_MetaData), Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange_MetaData) }; // 3246601233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject = { "OnSelectionObject", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmEditorEventComponent, OnSelectionObject), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject_MetaData), Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject_MetaData) }; // 521640873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnPIEEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnPIEEvent = { "OnPIEEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmEditorEventComponent, OnPIEEvent), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnPIEEvent_MetaData), Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnPIEEvent_MetaData) }; // 1336862342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange = { "OnGlobalTimeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmEditorEventComponent, OnGlobalTimeChange), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange_MetaData), Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange_MetaData) }; // 3180462659
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmEditorEventComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnPIEEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmEditorEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmEditorEventComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::ClassParams = {
		&UVrmEditorEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmEditorEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmEditorEventComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrmEditorEventComponent()
	{
		if (!Z_Registration_Info_UClass_UVrmEditorEventComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmEditorEventComponent.OuterSingleton, Z_Construct_UClass_UVrmEditorEventComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmEditorEventComponent.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmEditorEventComponent>()
	{
		return UVrmEditorEventComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmEditorEventComponent);
	UVrmEditorEventComponent::~UVrmEditorEventComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_Statics::EnumInfo[] = {
		{ EVRM4U_PIEEvent_StaticEnum, TEXT("EVRM4U_PIEEvent"), &Z_Registration_Info_UEnum_EVRM4U_PIEEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3586213685U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmEditorEventComponent, UVrmEditorEventComponent::StaticClass, TEXT("UVrmEditorEventComponent"), &Z_Registration_Info_UClass_UVrmEditorEventComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmEditorEventComponent), 990359019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_3617169158(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
