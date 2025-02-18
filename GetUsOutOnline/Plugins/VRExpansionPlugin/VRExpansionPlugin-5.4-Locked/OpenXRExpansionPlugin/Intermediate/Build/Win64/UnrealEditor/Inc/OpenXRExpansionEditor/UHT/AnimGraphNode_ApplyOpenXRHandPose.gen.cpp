// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionEditor/Public/AnimGraphNode_ApplyOpenXRHandPose.h"
#include "OpenXRExpansionPlugin/Public/AnimNode_ApplyOpenXRHandPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ApplyOpenXRHandPose() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
OPENXREXPANSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose();
OPENXREXPANSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_NoRegister();
OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose();
UPackage* Z_Construct_UPackage__Script_OpenXRExpansionEditor();
// End Cross Module References

// Begin Class UAnimGraphNode_ApplyOpenXRHandPose
void UAnimGraphNode_ApplyOpenXRHandPose::StaticRegisterNativesUAnimGraphNode_ApplyOpenXRHandPose()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_ApplyOpenXRHandPose);
UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_NoRegister()
{
	return UAnimGraphNode_ApplyOpenXRHandPose::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_ApplyOpenXRHandPose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ApplyOpenXRHandPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ApplyOpenXRHandPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ApplyOpenXRHandPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_ApplyOpenXRHandPose, Node), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1823598265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::ClassParams = {
	&UAnimGraphNode_ApplyOpenXRHandPose::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_ApplyOpenXRHandPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_ApplyOpenXRHandPose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_ApplyOpenXRHandPose.OuterSingleton;
}
template<> OPENXREXPANSIONEDITOR_API UClass* StaticClass<UAnimGraphNode_ApplyOpenXRHandPose>()
{
	return UAnimGraphNode_ApplyOpenXRHandPose::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ApplyOpenXRHandPose);
UAnimGraphNode_ApplyOpenXRHandPose::~UAnimGraphNode_ApplyOpenXRHandPose() {}
// End Class UAnimGraphNode_ApplyOpenXRHandPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionEditor_Public_AnimGraphNode_ApplyOpenXRHandPose_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose, UAnimGraphNode_ApplyOpenXRHandPose::StaticClass, TEXT("UAnimGraphNode_ApplyOpenXRHandPose"), &Z_Registration_Info_UClass_UAnimGraphNode_ApplyOpenXRHandPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_ApplyOpenXRHandPose), 1431987299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionEditor_Public_AnimGraphNode_ApplyOpenXRHandPose_h_2092279211(TEXT("/Script/OpenXRExpansionEditor"),
	Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionEditor_Public_AnimGraphNode_ApplyOpenXRHandPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1vrv_Desktop_GetUsOut_Nueva_carpeta_GetUsOut_Plugins_VRExpansionPlugin_5_4_Locked__1__VRExpansionPlugin_5_4_Locked_OpenXRExpansionPlugin_Source_OpenXRExpansionEditor_Public_AnimGraphNode_ApplyOpenXRHandPose_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
