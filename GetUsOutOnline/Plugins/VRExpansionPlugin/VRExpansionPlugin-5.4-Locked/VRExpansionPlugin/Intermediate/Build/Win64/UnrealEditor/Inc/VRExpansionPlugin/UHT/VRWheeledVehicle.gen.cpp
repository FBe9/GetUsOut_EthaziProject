// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRWheeledVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRWheeledVehicle() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransmissionConfig();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig();
// End Cross Module References

// Begin ScriptStruct FBPVehicleTransmissionConfig
static_assert(std::is_polymorphic<FBPVehicleTransmissionConfig>() == std::is_polymorphic<FVehicleTransmissionConfig>(), "USTRUCT FBPVehicleTransmissionConfig cannot be polymorphic unless super FVehicleTransmissionConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig;
class UScriptStruct* FBPVehicleTransmissionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVehicleTransmissionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVehicleTransmissionConfig>()
{
	return FBPVehicleTransmissionConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRWheeledVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This only exists to expose the blueprint properties of the transmission values\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This only exists to expose the blueprint properties of the transmission values" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVehicleTransmissionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	Z_Construct_UScriptStruct_FVehicleTransmissionConfig,
	&NewStructOps,
	"BPVehicleTransmissionConfig",
	nullptr,
	0,
	sizeof(FBPVehicleTransmissionConfig),
	alignof(FBPVehicleTransmissionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig.InnerSingleton, Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig.InnerSingleton;
}
// End ScriptStruct FBPVehicleTransmissionConfig

// Begin Class AVRWheeledVehicle Function GetFinalGearRatio
struct Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics
{
	struct VRWheeledVehicle_eventGetFinalGearRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRWheeledVehicle_eventGetFinalGearRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "GetFinalGearRatio", nullptr, nullptr, Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::VRWheeledVehicle_eventGetFinalGearRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::VRWheeledVehicle_eventGetFinalGearRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRWheeledVehicle::execGetFinalGearRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFinalGearRatio();
	P_NATIVE_END;
}
// End Class AVRWheeledVehicle Function GetFinalGearRatio

// Begin Class AVRWheeledVehicle Function SetBindToInput
struct Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics
{
	struct VRWheeledVehicle_eventSetBindToInput_Parms
	{
		AController* CController;
		bool bBindToInput;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calls the movement components override controller function\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls the movement components override controller function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CController;
	static void NewProp_bBindToInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindToInput;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_CController = { "CController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRWheeledVehicle_eventSetBindToInput_Parms, CController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput_SetBit(void* Obj)
{
	((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->bBindToInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput = { "bBindToInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_CController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "SetBindToInput", nullptr, nullptr, Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::VRWheeledVehicle_eventSetBindToInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::VRWheeledVehicle_eventSetBindToInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRWheeledVehicle::execSetBindToInput)
{
	P_GET_OBJECT(AController,Z_Param_CController);
	P_GET_UBOOL(Z_Param_bBindToInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput);
	P_NATIVE_END;
}
// End Class AVRWheeledVehicle Function SetBindToInput

// Begin Class AVRWheeledVehicle Function SetFinalGearRatio
struct Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics
{
	struct VRWheeledVehicle_eventSetFinalGearRatio_Parms
	{
		float NewFinalGearRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFinalGearRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::NewProp_NewFinalGearRatio = { "NewFinalGearRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRWheeledVehicle_eventSetFinalGearRatio_Parms, NewFinalGearRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::NewProp_NewFinalGearRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "SetFinalGearRatio", nullptr, nullptr, Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::VRWheeledVehicle_eventSetFinalGearRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::VRWheeledVehicle_eventSetFinalGearRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRWheeledVehicle::execSetFinalGearRatio)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFinalGearRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFinalGearRatio(Z_Param_NewFinalGearRatio);
	P_NATIVE_END;
}
// End Class AVRWheeledVehicle Function SetFinalGearRatio

// Begin Class AVRWheeledVehicle Function SetOverrideController
struct Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics
{
	struct VRWheeledVehicle_eventSetOverrideController_Parms
	{
		AController* NewController;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calls the movement components override controller function\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls the movement components override controller function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRWheeledVehicle_eventSetOverrideController_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRWheeledVehicle_eventSetOverrideController_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetOverrideController_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_NewController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "SetOverrideController", nullptr, nullptr, Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::VRWheeledVehicle_eventSetOverrideController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::VRWheeledVehicle_eventSetOverrideController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRWheeledVehicle::execSetOverrideController)
{
	P_GET_OBJECT(AController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetOverrideController(Z_Param_NewController);
	P_NATIVE_END;
}
// End Class AVRWheeledVehicle Function SetOverrideController

// Begin Class AVRWheeledVehicle
void AVRWheeledVehicle::StaticRegisterNativesAVRWheeledVehicle()
{
	UClass* Class = AVRWheeledVehicle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFinalGearRatio", &AVRWheeledVehicle::execGetFinalGearRatio },
		{ "SetBindToInput", &AVRWheeledVehicle::execSetBindToInput },
		{ "SetFinalGearRatio", &AVRWheeledVehicle::execSetFinalGearRatio },
		{ "SetOverrideController", &AVRWheeledVehicle::execSetOverrideController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRWheeledVehicle);
UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister()
{
	return AVRWheeledVehicle::StaticClass();
}
struct Z_Construct_UClass_AVRWheeledVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This override of the base wheeled vehicle allows for dual pawn usage in engine.\n*/" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Misc/VRWheeledVehicle.h" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This override of the base wheeled vehicle allows for dual pawn usage in engine." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRWheeledVehicle_GetFinalGearRatio, "GetFinalGearRatio" }, // 2503749934
		{ &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput, "SetBindToInput" }, // 2388109270
		{ &Z_Construct_UFunction_AVRWheeledVehicle_SetFinalGearRatio, "SetFinalGearRatio" }, // 2751430637
		{ &Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController, "SetOverrideController" }, // 1522605954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRWheeledVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVRWheeledVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRWheeledVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRWheeledVehicle_Statics::ClassParams = {
	&AVRWheeledVehicle::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRWheeledVehicle()
{
	if (!Z_Registration_Info_UClass_AVRWheeledVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRWheeledVehicle.OuterSingleton, Z_Construct_UClass_AVRWheeledVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRWheeledVehicle.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRWheeledVehicle>()
{
	return AVRWheeledVehicle::StaticClass();
}
AVRWheeledVehicle::AVRWheeledVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRWheeledVehicle);
AVRWheeledVehicle::~AVRWheeledVehicle() {}
// End Class AVRWheeledVehicle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBPVehicleTransmissionConfig::StaticStruct, Z_Construct_UScriptStruct_FBPVehicleTransmissionConfig_Statics::NewStructOps, TEXT("BPVehicleTransmissionConfig"), &Z_Registration_Info_UScriptStruct_BPVehicleTransmissionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVehicleTransmissionConfig), 3856857704U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRWheeledVehicle, AVRWheeledVehicle::StaticClass, TEXT("AVRWheeledVehicle"), &Z_Registration_Info_UClass_AVRWheeledVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRWheeledVehicle), 573610346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_1059936529(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_VRExpansionPlugin_5_4_Locked_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
