// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/OpenXRHandPoseComponent.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRHandPoseComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRAnimInstance();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRAnimInstance_NoRegister();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRGestureDatabase();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent();
OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister();
OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex();
OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType();
OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature();
OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGesture();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition();
UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
// End Cross Module References

// Begin ScriptStruct FBPXRSkeletalRepContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer;
class UScriptStruct* FBPXRSkeletalRepContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPXRSkeletalRepContainer"));
	}
	return Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPXRSkeletalRepContainer>()
{
	return FBPXRSkeletalRepContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHand_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDeformingMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUE4HandRepSavings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will skip sending the 4 metacarpal bones that ue4 doesn't need, (STEAMVR skeletons need this disabled!)\n// Only really used for the older UE4 skeleton\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will skip sending the 4 metacarpal bones that ue4 doesn't need, (STEAMVR skeletons need this disabled!)\nOnly really used for the older UE4 skeleton" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
	static void NewProp_bAllowDeformingMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDeformingMesh;
	static void NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUE4HandRepSavings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalTransforms;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPXRSkeletalRepContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPXRSkeletalRepContainer, TargetHand), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHand_MetaData), NewProp_TargetHand_MetaData) }; // 236016670
void Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_SetBit(void* Obj)
{
	((FBPXRSkeletalRepContainer*)Obj)->bAllowDeformingMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh = { "bAllowDeformingMesh", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPXRSkeletalRepContainer), &Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDeformingMesh_MetaData), NewProp_bAllowDeformingMesh_MetaData) };
void Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj)
{
	((FBPXRSkeletalRepContainer*)Obj)->bEnableUE4HandRepSavings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings = { "bEnableUE4HandRepSavings", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPXRSkeletalRepContainer), &Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUE4HandRepSavings_MetaData), NewProp_bEnableUE4HandRepSavings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_Inner = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPXRSkeletalRepContainer, SkeletalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalTransforms_MetaData), NewProp_SkeletalTransforms_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_BoneCount = { "BoneCount", nullptr, (EPropertyFlags)0x0010000080002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPXRSkeletalRepContainer, BoneCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneCount_MetaData), NewProp_BoneCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_TargetHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_SkeletalTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewProp_BoneCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"BPXRSkeletalRepContainer",
	Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::PropPointers),
	sizeof(FBPXRSkeletalRepContainer),
	alignof(FBPXRSkeletalRepContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer()
{
	if (!Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.InnerSingleton, Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer.InnerSingleton;
}
// End ScriptStruct FBPXRSkeletalRepContainer

// Begin ScriptStruct FOpenXRGestureFingerPosition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition;
class UScriptStruct* FOpenXRGestureFingerPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRGestureFingerPosition"));
	}
	return Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRGestureFingerPosition>()
{
	return FOpenXRGestureFingerPosition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexType_MetaData[] = {
		{ "Category", "VRGesture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Finger index, not editable\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Finger index, not editable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "VRGesture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The locational value of this element 0.f - 1.f\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The locational value of this element 0.f - 1.f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The threshold within which this finger value will be detected as matching (1.0 would be always matching, IE: finger doesn't count)\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The threshold within which this finger value will be detected as matching (1.0 would be always matching, IE: finger doesn't count)" },
#endif
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRGestureFingerPosition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType = { "IndexType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, IndexType), Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexType_MetaData), NewProp_IndexType_MetaData) }; // 3687730021
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"OpenXRGestureFingerPosition",
	Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers),
	sizeof(FOpenXRGestureFingerPosition),
	alignof(FOpenXRGestureFingerPosition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.InnerSingleton, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition.InnerSingleton;
}
// End ScriptStruct FOpenXRGestureFingerPosition

// Begin ScriptStruct FOpenXRGesture
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenXRGesture;
class UScriptStruct* FOpenXRGesture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRGesture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenXRGesture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRGesture, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRGesture"));
	}
	return Z_Registration_Info_UScriptStruct_OpenXRGesture.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRGesture>()
{
	return FOpenXRGesture::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOpenXRGesture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "VRGesture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the recorded gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the recorded gesture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerValues_MetaData[] = {
		{ "Category", "VRGesture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Samples in the recorded gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Samples in the recorded gesture" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRGesture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOpenXRGesture, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_Inner = { "FingerValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition, METADATA_PARAMS(0, nullptr) }; // 297795007
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues = { "FingerValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOpenXRGesture, FingerValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerValues_MetaData), NewProp_FingerValues_MetaData) }; // 297795007
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"OpenXRGesture",
	Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers),
	sizeof(FOpenXRGesture),
	alignof(FOpenXRGesture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGesture()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRGesture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenXRGesture.InnerSingleton, Z_Construct_UScriptStruct_FOpenXRGesture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OpenXRGesture.InnerSingleton;
}
// End ScriptStruct FOpenXRGesture

// Begin Class UOpenXRGestureDatabase
void UOpenXRGestureDatabase::StaticRegisterNativesUOpenXRGestureDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRGestureDatabase);
UClass* Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister()
{
	return UOpenXRGestureDatabase::StaticClass();
}
struct Z_Construct_UClass_UOpenXRGestureDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Items Database DataAsset, here we can save all of our game items\n*/" },
#endif
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Items Database DataAsset, here we can save all of our game items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gestures_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gestures in this database\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gestures in this database" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gestures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Gestures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRGestureDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_Inner = { "Gestures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOpenXRGesture, METADATA_PARAMS(0, nullptr) }; // 3167069072
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures = { "Gestures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRGestureDatabase, Gestures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gestures_MetaData), NewProp_Gestures_MetaData) }; // 3167069072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOpenXRGestureDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::ClassParams = {
	&UOpenXRGestureDatabase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenXRGestureDatabase()
{
	if (!Z_Registration_Info_UClass_UOpenXRGestureDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRGestureDatabase.OuterSingleton, Z_Construct_UClass_UOpenXRGestureDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenXRGestureDatabase.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRGestureDatabase>()
{
	return UOpenXRGestureDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRGestureDatabase);
UOpenXRGestureDatabase::~UOpenXRGestureDatabase() {}
// End Class UOpenXRGestureDatabase

// Begin Delegate FOpenXRGestureDetected
struct Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics
{
	struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms
	{
		FName GestureDetected;
		int32 GestureIndex;
		EVRSkeletalHandIndex ActionHandType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GestureDetected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GestureDetected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GestureIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionHandType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionHandType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected = { "GestureDetected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, GestureDetected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GestureDetected_MetaData), NewProp_GestureDetected_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureIndex = { "GestureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, GestureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType = { "ActionHandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, ActionHandType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(0, nullptr) }; // 236016670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin, nullptr, "OpenXRGestureDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOpenXRGestureDetected_DelegateWrapper(const FMulticastScriptDelegate& OpenXRGestureDetected, FName const& GestureDetected, int32 GestureIndex, EVRSkeletalHandIndex ActionHandType)
{
	struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms
	{
		FName GestureDetected;
		int32 GestureIndex;
		EVRSkeletalHandIndex ActionHandType;
	};
	_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms Parms;
	Parms.GestureDetected=GestureDetected;
	Parms.GestureIndex=GestureIndex;
	Parms.ActionHandType=ActionHandType;
	OpenXRGestureDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOpenXRGestureDetected

// Begin Delegate FOpenXRGestureEnded
struct Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics
{
	struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms
	{
		FName GestureEnded;
		int32 GestureIndex;
		EVRSkeletalHandIndex ActionHandType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GestureEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GestureEnded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GestureIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionHandType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionHandType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded = { "GestureEnded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, GestureEnded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GestureEnded_MetaData), NewProp_GestureEnded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureIndex = { "GestureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, GestureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType = { "ActionHandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, ActionHandType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(0, nullptr) }; // 236016670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin, nullptr, "OpenXRGestureEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOpenXRGestureEnded_DelegateWrapper(const FMulticastScriptDelegate& OpenXRGestureEnded, FName const& GestureEnded, int32 GestureIndex, EVRSkeletalHandIndex ActionHandType)
{
	struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms
	{
		FName GestureEnded;
		int32 GestureIndex;
		EVRSkeletalHandIndex ActionHandType;
	};
	_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms Parms;
	Parms.GestureEnded=GestureEnded;
	Parms.GestureIndex=GestureIndex;
	Parms.ActionHandType=ActionHandType;
	OpenXRGestureEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOpenXRGestureEnded

// Begin Class UOpenXRHandPoseComponent Function K2_DetectCurrentPose
struct Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics
{
	struct OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms
	{
		FBPOpenXRActionSkeletalData SkeletalAction;
		FOpenXRGesture GestureOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "DisplayName", "DetectCurrentPose" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GestureOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_SkeletalAction = { "SkeletalAction", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms, SkeletalAction), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(0, nullptr) }; // 2235388730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_GestureOut = { "GestureOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms, GestureOut), Z_Construct_UScriptStruct_FOpenXRGesture, METADATA_PARAMS(0, nullptr) }; // 3167069072
void Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_SkeletalAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_GestureOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "K2_DetectCurrentPose", nullptr, nullptr, Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRHandPoseComponent::execK2_DetectCurrentPose)
{
	P_GET_STRUCT_REF(FBPOpenXRActionSkeletalData,Z_Param_Out_SkeletalAction);
	P_GET_STRUCT_REF(FOpenXRGesture,Z_Param_Out_GestureOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_DetectCurrentPose(Z_Param_Out_SkeletalAction,Z_Param_Out_GestureOut);
	P_NATIVE_END;
}
// End Class UOpenXRHandPoseComponent Function K2_DetectCurrentPose

// Begin Class UOpenXRHandPoseComponent Function OnRep_SkeletalTransformLeft
struct Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "OnRep_SkeletalTransformLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRHandPoseComponent::execOnRep_SkeletalTransformLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SkeletalTransformLeft();
	P_NATIVE_END;
}
// End Class UOpenXRHandPoseComponent Function OnRep_SkeletalTransformLeft

// Begin Class UOpenXRHandPoseComponent Function OnRep_SkeletalTransformRight
struct Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "OnRep_SkeletalTransformRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRHandPoseComponent::execOnRep_SkeletalTransformRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SkeletalTransformRight();
	P_NATIVE_END;
}
// End Class UOpenXRHandPoseComponent Function OnRep_SkeletalTransformRight

// Begin Class UOpenXRHandPoseComponent Function SaveCurrentPose
struct Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics
{
	struct OpenXRHandPoseComponent_eventSaveCurrentPose_Parms
	{
		FName RecordingName;
		EVRSkeletalHandIndex HandToSave;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "CPP_Default_HandToSave", "EActionHandIndex_Right" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RecordingName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandToSave_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandToSave;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms, RecordingName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave = { "HandToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms, HandToSave), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(0, nullptr) }; // 236016670
void Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OpenXRHandPoseComponent_eventSaveCurrentPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_RecordingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "SaveCurrentPose", nullptr, nullptr, Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::OpenXRHandPoseComponent_eventSaveCurrentPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::OpenXRHandPoseComponent_eventSaveCurrentPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRHandPoseComponent::execSaveCurrentPose)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_RecordingName);
	P_GET_ENUM(EVRSkeletalHandIndex,Z_Param_HandToSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveCurrentPose(Z_Param_RecordingName,EVRSkeletalHandIndex(Z_Param_HandToSave));
	P_NATIVE_END;
}
// End Class UOpenXRHandPoseComponent Function SaveCurrentPose

// Begin Class UOpenXRHandPoseComponent Function Server_SendSkeletalTransforms
struct OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms
{
	FBPXRSkeletalRepContainer SkeletalInfo;
};
static FName NAME_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms = FName(TEXT("Server_SendSkeletalTransforms"));
void UOpenXRHandPoseComponent::Server_SendSkeletalTransforms(FBPXRSkeletalRepContainer const& SkeletalInfo)
{
	OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms Parms;
	Parms.SkeletalInfo=SkeletalInfo;
	ProcessEvent(FindFunctionChecked(NAME_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms),&Parms);
}
struct Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo = { "SkeletalInfo", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms, SkeletalInfo), Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalInfo_MetaData), NewProp_SkeletalInfo_MetaData) }; // 3926075184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "Server_SendSkeletalTransforms", nullptr, nullptr, Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers), sizeof(OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRHandPoseComponent::execServer_SendSkeletalTransforms)
{
	P_GET_STRUCT(FBPXRSkeletalRepContainer,Z_Param_SkeletalInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SendSkeletalTransforms_Validate(Z_Param_SkeletalInfo))
	{
		RPC_ValidateFailed(TEXT("Server_SendSkeletalTransforms_Validate"));
		return;
	}
	P_THIS->Server_SendSkeletalTransforms_Implementation(Z_Param_SkeletalInfo);
	P_NATIVE_END;
}
// End Class UOpenXRHandPoseComponent Function Server_SendSkeletalTransforms

// Begin Class UOpenXRHandPoseComponent Function SetDetectGestures
struct Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics
{
	struct OpenXRHandPoseComponent_eventSetDetectGestures_Parms
	{
		bool bNewDetectGestures;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewDetectGestures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDetectGestures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures_SetBit(void* Obj)
{
	((OpenXRHandPoseComponent_eventSetDetectGestures_Parms*)Obj)->bNewDetectGestures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures = { "bNewDetectGestures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventSetDetectGestures_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "SetDetectGestures", nullptr, nullptr, Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::OpenXRHandPoseComponent_eventSetDetectGestures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::OpenXRHandPoseComponent_eventSetDetectGestures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRHandPoseComponent::execSetDetectGestures)
{
	P_GET_UBOOL(Z_Param_bNewDetectGestures);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDetectGestures(Z_Param_bNewDetectGestures);
	P_NATIVE_END;
}
// End Class UOpenXRHandPoseComponent Function SetDetectGestures

// Begin Class UOpenXRHandPoseComponent
void UOpenXRHandPoseComponent::StaticRegisterNativesUOpenXRHandPoseComponent()
{
	UClass* Class = UOpenXRHandPoseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_DetectCurrentPose", &UOpenXRHandPoseComponent::execK2_DetectCurrentPose },
		{ "OnRep_SkeletalTransformLeft", &UOpenXRHandPoseComponent::execOnRep_SkeletalTransformLeft },
		{ "OnRep_SkeletalTransformRight", &UOpenXRHandPoseComponent::execOnRep_SkeletalTransformRight },
		{ "SaveCurrentPose", &UOpenXRHandPoseComponent::execSaveCurrentPose },
		{ "Server_SendSkeletalTransforms", &UOpenXRHandPoseComponent::execServer_SendSkeletalTransforms },
		{ "SetDetectGestures", &UOpenXRHandPoseComponent::execSetDetectGestures },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRHandPoseComponent);
UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister()
{
	return UOpenXRHandPoseComponent::StaticClass();
}
struct Z_Construct_UClass_UOpenXRHandPoseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectGestures_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Says whether we should run gesture detection\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Says whether we should run gesture detection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewGestureDetected_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGestureEnded_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GesturesDB_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Known sequences\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Known sequences" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGetMockUpPoseForDebugging_MetaData[] = {
		{ "Category", "SkeletalData|Actions" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandSkeletalActions_MetaData[] = {
		{ "Category", "SkeletalData|Actions" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandRep_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandRep_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateSkeletalData_MetaData[] = {
		{ "Category", "SkeletalData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we should replicate the skeletal transform data\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we should replicate the skeletal transform data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedSkeletalData_MetaData[] = {
		{ "Category", "SkeletalData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will lerp between updates of the skeletal mesh transforms and smooth the result\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will lerp between updates of the skeletal mesh transforms and smooth the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExponentialSmoothing_MetaData[] = {
		{ "Category", "SkeletalData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then we will use exponential smoothing with buffered correction\n" },
#endif
		{ "editcondition", "bSmoothReplicatedSkeletalData" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then we will use exponential smoothing with buffered correction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "SkeletalData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timestep of smoothing translation\n" },
#endif
		{ "editcondition", "bUseExponentialSmoothing" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timestep of smoothing translation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationRateForSkeletalAnimations_MetaData[] = {
		{ "Category", "SkeletalData" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDetectGestures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectGestures;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewGestureDetected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureEnded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GesturesDB;
	static void NewProp_bGetMockUpPoseForDebugging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetMockUpPoseForDebugging;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandSkeletalActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandSkeletalActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandRep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandRep;
	static void NewProp_bReplicateSkeletalData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateSkeletalData;
	static void NewProp_bSmoothReplicatedSkeletalData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedSkeletalData;
	static void NewProp_bUseExponentialSmoothing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExponentialSmoothing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicationRateForSkeletalAnimations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose, "K2_DetectCurrentPose" }, // 2442827808
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft, "OnRep_SkeletalTransformLeft" }, // 4032294118
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight, "OnRep_SkeletalTransformRight" }, // 3447394553
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose, "SaveCurrentPose" }, // 1743004908
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms, "Server_SendSkeletalTransforms" }, // 2076164429
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures, "SetDetectGestures" }, // 2292249972
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRHandPoseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_SetBit(void* Obj)
{
	((UOpenXRHandPoseComponent*)Obj)->bDetectGestures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures = { "bDetectGestures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectGestures_MetaData), NewProp_bDetectGestures_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected = { "OnNewGestureDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, OnNewGestureDetected), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewGestureDetected_MetaData), NewProp_OnNewGestureDetected_MetaData) }; // 3372836759
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded = { "OnGestureEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, OnGestureEnded), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGestureEnded_MetaData), NewProp_OnGestureEnded_MetaData) }; // 3342111099
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB = { "GesturesDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, GesturesDB), Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GesturesDB_MetaData), NewProp_GesturesDB_MetaData) };
void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_SetBit(void* Obj)
{
	((UOpenXRHandPoseComponent*)Obj)->bGetMockUpPoseForDebugging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging = { "bGetMockUpPoseForDebugging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGetMockUpPoseForDebugging_MetaData), NewProp_bGetMockUpPoseForDebugging_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_Inner = { "HandSkeletalActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(0, nullptr) }; // 2235388730
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions = { "HandSkeletalActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, HandSkeletalActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandSkeletalActions_MetaData), NewProp_HandSkeletalActions_MetaData) }; // 2235388730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep = { "LeftHandRep", "OnRep_SkeletalTransformLeft", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, LeftHandRep), Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandRep_MetaData), NewProp_LeftHandRep_MetaData) }; // 3926075184
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep = { "RightHandRep", "OnRep_SkeletalTransformRight", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, RightHandRep), Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandRep_MetaData), NewProp_RightHandRep_MetaData) }; // 3926075184
void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_SetBit(void* Obj)
{
	((UOpenXRHandPoseComponent*)Obj)->bReplicateSkeletalData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData = { "bReplicateSkeletalData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateSkeletalData_MetaData), NewProp_bReplicateSkeletalData_MetaData) };
void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_SetBit(void* Obj)
{
	((UOpenXRHandPoseComponent*)Obj)->bSmoothReplicatedSkeletalData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData = { "bSmoothReplicatedSkeletalData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothReplicatedSkeletalData_MetaData), NewProp_bSmoothReplicatedSkeletalData_MetaData) };
void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bUseExponentialSmoothing_SetBit(void* Obj)
{
	((UOpenXRHandPoseComponent*)Obj)->bUseExponentialSmoothing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bUseExponentialSmoothing = { "bUseExponentialSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bUseExponentialSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExponentialSmoothing_MetaData), NewProp_bUseExponentialSmoothing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeed_MetaData), NewProp_InterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations = { "ReplicationRateForSkeletalAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, ReplicationRateForSkeletalAnimations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationRateForSkeletalAnimations_MetaData), NewProp_ReplicationRateForSkeletalAnimations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bUseExponentialSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_InterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::ClassParams = {
	&UOpenXRHandPoseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenXRHandPoseComponent()
{
	if (!Z_Registration_Info_UClass_UOpenXRHandPoseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRHandPoseComponent.OuterSingleton, Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenXRHandPoseComponent.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRHandPoseComponent>()
{
	return UOpenXRHandPoseComponent::StaticClass();
}
void UOpenXRHandPoseComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_LeftHandRep(TEXT("LeftHandRep"));
	static const FName Name_RightHandRep(TEXT("RightHandRep"));
	const bool bIsValid = true
		&& Name_LeftHandRep == ClassReps[(int32)ENetFields_Private::LeftHandRep].Property->GetFName()
		&& Name_RightHandRep == ClassReps[(int32)ENetFields_Private::RightHandRep].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOpenXRHandPoseComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRHandPoseComponent);
UOpenXRHandPoseComponent::~UOpenXRHandPoseComponent() {}
// End Class UOpenXRHandPoseComponent

// Begin ScriptStruct FOpenXRAnimInstanceProxy
static_assert(std::is_polymorphic<FOpenXRAnimInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FOpenXRAnimInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy;
class UScriptStruct* FOpenXRAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRAnimInstanceProxy>()
{
	return FOpenXRAnimInstanceProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRAnimInstanceProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	Z_Construct_UScriptStruct_FAnimInstanceProxy,
	&NewStructOps,
	"OpenXRAnimInstanceProxy",
	nullptr,
	0,
	sizeof(FOpenXRAnimInstanceProxy),
	alignof(FOpenXRAnimInstanceProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy()
{
	if (!Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy.InnerSingleton;
}
// End ScriptStruct FOpenXRAnimInstanceProxy

// Begin Class UOpenXRAnimInstance Function InitializeCustomBoneMapping
struct Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics
{
	struct OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms
	{
		FBPOpenXRSkeletalMappingData SkeletalMappingData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BoneMappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual void NativeInitializeAnimation() override;\n" },
#endif
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void NativeInitializeAnimation() override;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMappingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::NewProp_SkeletalMappingData = { "SkeletalMappingData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms, SkeletalMappingData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, METADATA_PARAMS(0, nullptr) }; // 1145888911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::NewProp_SkeletalMappingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRAnimInstance, nullptr, "InitializeCustomBoneMapping", nullptr, nullptr, Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOpenXRAnimInstance::execInitializeCustomBoneMapping)
{
	P_GET_STRUCT_REF(FBPOpenXRSkeletalMappingData,Z_Param_Out_SkeletalMappingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCustomBoneMapping(Z_Param_Out_SkeletalMappingData);
	P_NATIVE_END;
}
// End Class UOpenXRAnimInstance Function InitializeCustomBoneMapping

// Begin Class UOpenXRAnimInstance
void UOpenXRAnimInstance::StaticRegisterNativesUOpenXRAnimInstance()
{
	UClass* Class = UOpenXRAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeCustomBoneMapping", &UOpenXRAnimInstance::execInitializeCustomBoneMapping },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRAnimInstance);
UClass* Z_Construct_UClass_UOpenXRAnimInstance_NoRegister()
{
	return UOpenXRAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UOpenXRAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPoseComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPoseComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping, "InitializeCustomBoneMapping" }, // 3927985242
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp = { "OwningPoseComp", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenXRAnimInstance, OwningPoseComp), Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPoseComp_MetaData), NewProp_OwningPoseComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOpenXRAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRAnimInstance_Statics::ClassParams = {
	&UOpenXRAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenXRAnimInstance()
{
	if (!Z_Registration_Info_UClass_UOpenXRAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRAnimInstance.OuterSingleton, Z_Construct_UClass_UOpenXRAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenXRAnimInstance.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRAnimInstance>()
{
	return UOpenXRAnimInstance::StaticClass();
}
UOpenXRAnimInstance::UOpenXRAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRAnimInstance);
UOpenXRAnimInstance::~UOpenXRAnimInstance() {}
// End Class UOpenXRAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBPXRSkeletalRepContainer::StaticStruct, Z_Construct_UScriptStruct_FBPXRSkeletalRepContainer_Statics::NewStructOps, TEXT("BPXRSkeletalRepContainer"), &Z_Registration_Info_UScriptStruct_BPXRSkeletalRepContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPXRSkeletalRepContainer), 3926075184U) },
		{ FOpenXRGestureFingerPosition::StaticStruct, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewStructOps, TEXT("OpenXRGestureFingerPosition"), &Z_Registration_Info_UScriptStruct_OpenXRGestureFingerPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenXRGestureFingerPosition), 297795007U) },
		{ FOpenXRGesture::StaticStruct, Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewStructOps, TEXT("OpenXRGesture"), &Z_Registration_Info_UScriptStruct_OpenXRGesture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenXRGesture), 3167069072U) },
		{ FOpenXRAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::NewStructOps, TEXT("OpenXRAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_OpenXRAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenXRAnimInstanceProxy), 2535541539U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRGestureDatabase, UOpenXRGestureDatabase::StaticClass, TEXT("UOpenXRGestureDatabase"), &Z_Registration_Info_UClass_UOpenXRGestureDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRGestureDatabase), 880257038U) },
		{ Z_Construct_UClass_UOpenXRHandPoseComponent, UOpenXRHandPoseComponent::StaticClass, TEXT("UOpenXRHandPoseComponent"), &Z_Registration_Info_UClass_UOpenXRHandPoseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRHandPoseComponent), 3284676268U) },
		{ Z_Construct_UClass_UOpenXRAnimInstance, UOpenXRAnimInstance::StaticClass, TEXT("UOpenXRAnimInstance"), &Z_Registration_Info_UClass_UOpenXRAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRAnimInstance), 3174990632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_1999666880(TEXT("/Script/OpenXRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
