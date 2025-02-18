// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionFunctionLibrary.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionTypes.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRExpansionFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_NoRegister();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister();
OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType();
OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
// End Cross Module References

// Begin Enum EBPOpenXRControllerDeviceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType;
static UEnum* EBPOpenXRControllerDeviceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EBPOpenXRControllerDeviceType"));
	}
	return Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenXRControllerDeviceType>()
{
	return EBPOpenXRControllerDeviceType_StaticEnum();
}
struct Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible.\n" },
#endif
		{ "DT_DaydreamController.Comment", "//DT_CosmosController,\n" },
		{ "DT_DaydreamController.Name", "EBPOpenXRControllerDeviceType::DT_DaydreamController" },
		{ "DT_DaydreamController.ToolTip", "DT_CosmosController," },
		{ "DT_MicrosoftMotionController.Name", "EBPOpenXRControllerDeviceType::DT_MicrosoftMotionController" },
		{ "DT_MicrosoftXboxController.Name", "EBPOpenXRControllerDeviceType::DT_MicrosoftXboxController" },
		{ "DT_OculusGoController.Name", "EBPOpenXRControllerDeviceType::DT_OculusGoController" },
		{ "DT_OculusTouchController.Name", "EBPOpenXRControllerDeviceType::DT_OculusTouchController" },
		{ "DT_PicoNeo3Controller.Name", "EBPOpenXRControllerDeviceType::DT_PicoNeo3Controller" },
		{ "DT_SimpleController.Name", "EBPOpenXRControllerDeviceType::DT_SimpleController" },
		{ "DT_UnknownController.Name", "EBPOpenXRControllerDeviceType::DT_UnknownController" },
		{ "DT_ValveIndexController.Name", "EBPOpenXRControllerDeviceType::DT_ValveIndexController" },
		{ "DT_ViveController.Name", "EBPOpenXRControllerDeviceType::DT_ViveController" },
		{ "DT_ViveProController.Name", "EBPOpenXRControllerDeviceType::DT_ViveProController" },
		{ "DT_WMRController.Name", "EBPOpenXRControllerDeviceType::DT_WMRController" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBPOpenXRControllerDeviceType::DT_SimpleController", (int64)EBPOpenXRControllerDeviceType::DT_SimpleController },
		{ "EBPOpenXRControllerDeviceType::DT_ValveIndexController", (int64)EBPOpenXRControllerDeviceType::DT_ValveIndexController },
		{ "EBPOpenXRControllerDeviceType::DT_ViveController", (int64)EBPOpenXRControllerDeviceType::DT_ViveController },
		{ "EBPOpenXRControllerDeviceType::DT_ViveProController", (int64)EBPOpenXRControllerDeviceType::DT_ViveProController },
		{ "EBPOpenXRControllerDeviceType::DT_DaydreamController", (int64)EBPOpenXRControllerDeviceType::DT_DaydreamController },
		{ "EBPOpenXRControllerDeviceType::DT_OculusTouchController", (int64)EBPOpenXRControllerDeviceType::DT_OculusTouchController },
		{ "EBPOpenXRControllerDeviceType::DT_OculusGoController", (int64)EBPOpenXRControllerDeviceType::DT_OculusGoController },
		{ "EBPOpenXRControllerDeviceType::DT_MicrosoftMotionController", (int64)EBPOpenXRControllerDeviceType::DT_MicrosoftMotionController },
		{ "EBPOpenXRControllerDeviceType::DT_MicrosoftXboxController", (int64)EBPOpenXRControllerDeviceType::DT_MicrosoftXboxController },
		{ "EBPOpenXRControllerDeviceType::DT_PicoNeo3Controller", (int64)EBPOpenXRControllerDeviceType::DT_PicoNeo3Controller },
		{ "EBPOpenXRControllerDeviceType::DT_WMRController", (int64)EBPOpenXRControllerDeviceType::DT_WMRController },
		{ "EBPOpenXRControllerDeviceType::DT_UnknownController", (int64)EBPOpenXRControllerDeviceType::DT_UnknownController },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	nullptr,
	"EBPOpenXRControllerDeviceType",
	"EBPOpenXRControllerDeviceType",
	Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType()
{
	if (!Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType.InnerSingleton, Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType.InnerSingleton;
}
// End Enum EBPOpenXRControllerDeviceType

// Begin Class UOpenXRExpansionFunctionLibrary Function GetMockUpControllerData
struct Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics
{
	struct OpenXRExpansionFunctionLibrary_eventGetMockUpControllerData_Parms
	{
		FXRMotionControllerData MotionControllerData;
		FBPOpenXRActionSkeletalData SkeletalMappingData;
		bool bOpenHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR" },
		{ "CPP_Default_bOpenHand", "false" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MotionControllerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMappingData;
	static void NewProp_bOpenHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_MotionControllerData = { "MotionControllerData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetMockUpControllerData_Parms, MotionControllerData), Z_Construct_UScriptStruct_FXRMotionControllerData, METADATA_PARAMS(0, nullptr) }; // 855871817
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_SkeletalMappingData = { "SkeletalMappingData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetMockUpControllerData_Parms, SkeletalMappingData), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(0, nullptr) }; // 2235388730
void Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_bOpenHand_SetBit(void* Obj)
{
	((OpenXRExpansionFunctionLibrary_eventGetMockUpControllerData_Parms*)Obj)->bOpenHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_bOpenHand = { "bOpenHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenXRExpansionFunctionLibrary_eventGetMockUpControllerData_Parms), &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_bOpenHand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_MotionControllerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_SkeletalMappingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::NewProp_bOpenHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, nullptr, "GetMockUpControllerData", nullptr, nullptr, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::OpenXRExpansionFunctionLibrary_eventGetMockUpControllerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::OpenXRExpansionFunctionLibrary_eventGetMockUpControllerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRExpansionFunctionLibrary::execGetMockUpControllerData)
{
	P_GET_STRUCT_REF(FXRMotionControllerData,Z_Param_Out_MotionControllerData);
	P_GET_STRUCT_REF(FBPOpenXRActionSkeletalData,Z_Param_Out_SkeletalMappingData);
	P_GET_UBOOL(Z_Param_bOpenHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOpenXRExpansionFunctionLibrary::GetMockUpControllerData(Z_Param_Out_MotionControllerData,Z_Param_Out_SkeletalMappingData,Z_Param_bOpenHand);
	P_NATIVE_END;
}
// End Class UOpenXRExpansionFunctionLibrary Function GetMockUpControllerData

// Begin Class UOpenXRExpansionFunctionLibrary Function GetOpenXRFingerCurlValuesForHand
struct Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics
{
	struct OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms
	{
		UObject* WorldContextObject;
		EControllerHand TargetHand;
		float ThumbCurl;
		float IndexCurl;
		float MiddleCurl;
		float RingCurl;
		float PinkyCurl;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionFunctions|OpenXR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the estimated curl values from hand tracking\n// Will return true if it was able to get the curls, false if it could not (hand tracking not enabled or no data for the tracked index)\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the estimated curl values from hand tracking\nWill return true if it was able to get the curls, false if it could not (hand tracking not enabled or no data for the tracked index)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbCurl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexCurl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MiddleCurl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RingCurl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinkyCurl;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms, TargetHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_ThumbCurl = { "ThumbCurl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms, ThumbCurl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_IndexCurl = { "IndexCurl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms, IndexCurl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_MiddleCurl = { "MiddleCurl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms, MiddleCurl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_RingCurl = { "RingCurl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms, RingCurl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_PinkyCurl = { "PinkyCurl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms, PinkyCurl), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms), &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_TargetHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_TargetHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_ThumbCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_IndexCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_MiddleCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_RingCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_PinkyCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, nullptr, "GetOpenXRFingerCurlValuesForHand", nullptr, nullptr, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::OpenXRExpansionFunctionLibrary_eventGetOpenXRFingerCurlValuesForHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRExpansionFunctionLibrary::execGetOpenXRFingerCurlValuesForHand)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EControllerHand,Z_Param_TargetHand);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ThumbCurl);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_IndexCurl);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MiddleCurl);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RingCurl);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PinkyCurl);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOpenXRExpansionFunctionLibrary::GetOpenXRFingerCurlValuesForHand(Z_Param_WorldContextObject,EControllerHand(Z_Param_TargetHand),Z_Param_Out_ThumbCurl,Z_Param_Out_IndexCurl,Z_Param_Out_MiddleCurl,Z_Param_Out_RingCurl,Z_Param_Out_PinkyCurl);
	P_NATIVE_END;
}
// End Class UOpenXRExpansionFunctionLibrary Function GetOpenXRFingerCurlValuesForHand

// Begin Class UOpenXRExpansionFunctionLibrary Function GetOpenXRHandPose
struct Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics
{
	struct OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms
	{
		FBPOpenXRActionSkeletalData HandPoseContainer;
		UOpenXRHandPoseComponent* HandPoseComponent;
		bool bGetMockUpPose;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR" },
		{ "CPP_Default_bGetMockUpPose", "false" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandPoseContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandPoseComponent;
	static void NewProp_bGetMockUpPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetMockUpPose;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseContainer = { "HandPoseContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms, HandPoseContainer), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(0, nullptr) }; // 2235388730
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseComponent = { "HandPoseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms, HandPoseComponent), Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPoseComponent_MetaData), NewProp_HandPoseComponent_MetaData) };
void Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose_SetBit(void* Obj)
{
	((OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms*)Obj)->bGetMockUpPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose = { "bGetMockUpPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms), &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms), &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, nullptr, "GetOpenXRHandPose", nullptr, nullptr, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRExpansionFunctionLibrary::execGetOpenXRHandPose)
{
	P_GET_STRUCT_REF(FBPOpenXRActionSkeletalData,Z_Param_Out_HandPoseContainer);
	P_GET_OBJECT(UOpenXRHandPoseComponent,Z_Param_HandPoseComponent);
	P_GET_UBOOL(Z_Param_bGetMockUpPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOpenXRExpansionFunctionLibrary::GetOpenXRHandPose(Z_Param_Out_HandPoseContainer,Z_Param_HandPoseComponent,Z_Param_bGetMockUpPose);
	P_NATIVE_END;
}
// End Class UOpenXRExpansionFunctionLibrary Function GetOpenXRHandPose

// Begin Class UOpenXRExpansionFunctionLibrary Function GetXRMotionControllerType
struct Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics
{
	struct OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms
	{
		FString TrackingSystemName;
		EBPOpenXRControllerDeviceType DeviceType;
		EBPXRResultSwitch Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a list of all currently tracked devices and their types, index in the array is their device index\n// Returns failed if the openXR query failed (no interaction profile yet or openXR is not running)\n" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a list of all currently tracked devices and their types, index in the array is their device index\nReturns failed if the openXR query failed (no interaction profile yet or openXR is not running)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingSystemName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_TrackingSystemName = { "TrackingSystemName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms, TrackingSystemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms, DeviceType), Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType, METADATA_PARAMS(0, nullptr) }; // 1005532779
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms, Result), Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch, METADATA_PARAMS(0, nullptr) }; // 1353949064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_TrackingSystemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, nullptr, "GetXRMotionControllerType", nullptr, nullptr, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRExpansionFunctionLibrary::execGetXRMotionControllerType)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TrackingSystemName);
	P_GET_ENUM_REF(EBPOpenXRControllerDeviceType,Z_Param_Out_DeviceType);
	P_GET_ENUM_REF(EBPXRResultSwitch,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOpenXRExpansionFunctionLibrary::GetXRMotionControllerType(Z_Param_Out_TrackingSystemName,(EBPOpenXRControllerDeviceType&)(Z_Param_Out_DeviceType),(EBPXRResultSwitch&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UOpenXRExpansionFunctionLibrary Function GetXRMotionControllerType

// Begin Class UOpenXRExpansionFunctionLibrary
void UOpenXRExpansionFunctionLibrary::StaticRegisterNativesUOpenXRExpansionFunctionLibrary()
{
	UClass* Class = UOpenXRExpansionFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMockUpControllerData", &UOpenXRExpansionFunctionLibrary::execGetMockUpControllerData },
		{ "GetOpenXRFingerCurlValuesForHand", &UOpenXRExpansionFunctionLibrary::execGetOpenXRFingerCurlValuesForHand },
		{ "GetOpenXRHandPose", &UOpenXRExpansionFunctionLibrary::execGetOpenXRHandPose },
		{ "GetXRMotionControllerType", &UOpenXRExpansionFunctionLibrary::execGetXRMotionControllerType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRExpansionFunctionLibrary);
UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_NoRegister()
{
	return UOpenXRExpansionFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenXRExpansionFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetMockUpControllerData, "GetMockUpControllerData" }, // 1373412866
		{ &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRFingerCurlValuesForHand, "GetOpenXRFingerCurlValuesForHand" }, // 1589392658
		{ &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose, "GetOpenXRHandPose" }, // 2537652737
		{ &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType, "GetXRMotionControllerType" }, // 735493018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRExpansionFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::ClassParams = {
	&UOpenXRExpansionFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOpenXRExpansionFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRExpansionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenXRExpansionFunctionLibrary.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRExpansionFunctionLibrary>()
{
	return UOpenXRExpansionFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRExpansionFunctionLibrary);
// End Class UOpenXRExpansionFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBPOpenXRControllerDeviceType_StaticEnum, TEXT("EBPOpenXRControllerDeviceType"), &Z_Registration_Info_UEnum_EBPOpenXRControllerDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1005532779U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, UOpenXRExpansionFunctionLibrary::StaticClass, TEXT("UOpenXRExpansionFunctionLibrary"), &Z_Registration_Info_UClass_UOpenXRExpansionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRExpansionFunctionLibrary), 3155787283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_2079264146(TEXT("/Script/OpenXRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
