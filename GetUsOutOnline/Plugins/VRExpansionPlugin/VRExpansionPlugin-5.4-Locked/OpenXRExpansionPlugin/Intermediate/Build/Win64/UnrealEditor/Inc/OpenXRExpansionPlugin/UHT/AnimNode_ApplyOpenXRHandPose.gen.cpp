// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/AnimNode_ApplyOpenXRHandPose.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyOpenXRHandPose() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
// End Cross Module References

// Begin ScriptStruct FAnimNode_ApplyOpenXRHandPose
static_assert(std::is_polymorphic<FAnimNode_ApplyOpenXRHandPose>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ApplyOpenXRHandPose cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose;
class UScriptStruct* FAnimNode_ApplyOpenXRHandPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose, (UObject*)Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("AnimNode_ApplyOpenXRHandPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.OuterSingleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_ApplyOpenXRHandPose>()
{
	return FAnimNode_ApplyOpenXRHandPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generally used when not passing in custom bone mappings, defines the auto mapping style\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generally used when not passing in custom bone mappings, defines the auto mapping style" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipRootBone_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If your hand is part of a full body or arm skeleton and you don't have a proxy bone to retain the position enable this\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If your hand is part of a full body or arm skeleton and you don't have a proxy bone to retain the position enable this" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyWristTransform_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you only want to use the wrist transform part of this\n// This will also automatically add the deform to the wrist as it doesn't make much sense without it\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you only want to use the wrist transform part of this\nThis will also automatically add the deform to the wrist as it doesn't make much sense without it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalStoredActionInfo_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generally used when not passing in custom bone mappings, defines the auto mapping style\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generally used when not passing in custom bone mappings, defines the auto mapping style" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedBonePairs_MetaData[] = {
		{ "Category", "Skeletal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MappedBonePairs, if you leave it blank then they will auto generate based off of the SkeletonType\n// Otherwise, fill out yourself.\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappedBonePairs, if you leave it blank then they will auto generate based off of the SkeletonType\nOtherwise, fill out yourself." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
	static void NewProp_bSkipRootBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipRootBone;
	static void NewProp_bOnlyApplyWristTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyWristTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalStoredActionInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappedBonePairs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyOpenXRHandPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, SkeletonType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonType_MetaData), NewProp_SkeletonType_MetaData) }; // 2491445519
void Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_SetBit(void* Obj)
{
	((FAnimNode_ApplyOpenXRHandPose*)Obj)->bSkipRootBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone = { "bSkipRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_ApplyOpenXRHandPose), &Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipRootBone_MetaData), NewProp_bSkipRootBone_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_SetBit(void* Obj)
{
	((FAnimNode_ApplyOpenXRHandPose*)Obj)->bOnlyApplyWristTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform = { "bOnlyApplyWristTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_ApplyOpenXRHandPose), &Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyWristTransform_MetaData), NewProp_bOnlyApplyWristTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo = { "OptionalStoredActionInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, OptionalStoredActionInfo), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalStoredActionInfo_MetaData), NewProp_OptionalStoredActionInfo_MetaData) }; // 2235388730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs = { "MappedBonePairs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, MappedBonePairs), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedBonePairs_MetaData), NewProp_MappedBonePairs_MetaData) }; // 1145888911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_ApplyOpenXRHandPose",
	Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers),
	sizeof(FAnimNode_ApplyOpenXRHandPose),
	alignof(FAnimNode_ApplyOpenXRHandPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_ApplyOpenXRHandPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ApplyOpenXRHandPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewStructOps, TEXT("AnimNode_ApplyOpenXRHandPose"), &Z_Registration_Info_UScriptStruct_AnimNode_ApplyOpenXRHandPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ApplyOpenXRHandPose), 1823598265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_2371341674(TEXT("/Script/OpenXRExpansionPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_AnimNode_ApplyOpenXRHandPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
