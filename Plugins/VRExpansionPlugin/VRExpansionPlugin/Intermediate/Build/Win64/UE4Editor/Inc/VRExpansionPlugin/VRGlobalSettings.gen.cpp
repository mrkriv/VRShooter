// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRGlobalSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGlobalSettings() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActionMappingDetails();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAxisMappingDetails();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles();
// End Cross Module References
class UScriptStruct* FBPVRControllerProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRControllerProfile, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRControllerProfile"), sizeof(FBPVRControllerProfile), Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRControllerProfile(FBPVRControllerProfile::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRControllerProfile"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVRControllerProfile")),new UScriptStruct::TCppStructOps<FBPVRControllerProfile>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile;
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRControllerProfile"), sizeof(FBPVRControllerProfile), Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "ControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRControllerProfile>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionOverrides_MetaData[] = {
				{ "Category", "ControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Setting action mappings here will override the equivalent bindings on profile load" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActionOverrides = { UE4CodeGen_Private::EPropertyClass::Map, "ActionOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, ActionOverrides), METADATA_PARAMS(NewProp_ActionOverrides_MetaData, ARRAY_COUNT(NewProp_ActionOverrides_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionOverrides_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ActionOverrides_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionOverrides_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FActionMappingDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisOverrides_MetaData[] = {
				{ "Category", "ControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Setting an axis value here with key bindings will override the equivalent bindings on profile load" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_AxisOverrides = { UE4CodeGen_Private::EPropertyClass::Map, "AxisOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, AxisOverrides), METADATA_PARAMS(NewProp_AxisOverrides_MetaData, ARRAY_COUNT(NewProp_AxisOverrides_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOverrides_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "AxisOverrides_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisOverrides_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FAxisMappingDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransform_MetaData[] = {
				{ "Category", "ControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Offset to use with this controller" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffsetTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketOffsetTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, SocketOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_SocketOffsetTransform_MetaData, ARRAY_COUNT(NewProp_SocketOffsetTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerName_MetaData[] = {
				{ "Category", "ControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Name of controller profile" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, ControllerName), METADATA_PARAMS(NewProp_ControllerName_MetaData, ARRAY_COUNT(NewProp_ControllerName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionOverrides_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionOverrides_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisOverrides_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisOverrides_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketOffsetTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPVRControllerProfile",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBPVRControllerProfile),
				alignof(FBPVRControllerProfile),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC() { return 2952133309U; }
class UScriptStruct* FActionMappingDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionMappingDetails, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ActionMappingDetails"), sizeof(FActionMappingDetails), Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActionMappingDetails(FActionMappingDetails::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("ActionMappingDetails"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFActionMappingDetails
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFActionMappingDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActionMappingDetails")),new UScriptStruct::TCppStructOps<FActionMappingDetails>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFActionMappingDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FActionMappingDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActionMappingDetails"), sizeof(FActionMappingDetails), Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "VRGlobalSettings" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionMappingDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "List of all axis key mappings that correspond to the axis name in the containing map" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings = { UE4CodeGen_Private::EPropertyClass::Array, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FActionMappingDetails, ActionMappings), METADATA_PARAMS(NewProp_ActionMappings_MetaData, ARRAY_COUNT(NewProp_ActionMappings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionMappings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionMappings_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ActionMappingDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FActionMappingDetails),
				alignof(FActionMappingDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC() { return 2475149696U; }
class UScriptStruct* FAxisMappingDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxisMappingDetails, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("AxisMappingDetails"), sizeof(FAxisMappingDetails), Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAxisMappingDetails(FAxisMappingDetails::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("AxisMappingDetails"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAxisMappingDetails
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAxisMappingDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AxisMappingDetails")),new UScriptStruct::TCppStructOps<FAxisMappingDetails>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAxisMappingDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FAxisMappingDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AxisMappingDetails"), sizeof(FAxisMappingDetails), Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "VRGlobalSettings" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "namespace ControllerProfileStatics\n{\n       static const FTransform OculusTouchStaticOffset(FRotator(-70.f, 0.f, 0.f));\n}" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxisMappingDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "List of all axis key mappings that correspond to the axis name in the containing map" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings = { UE4CodeGen_Private::EPropertyClass::Array, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAxisMappingDetails, AxisMappings), METADATA_PARAMS(NewProp_AxisMappings_MetaData, ARRAY_COUNT(NewProp_AxisMappings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisMappings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisMappings_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AxisMappingDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAxisMappingDetails),
				alignof(FAxisMappingDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC() { return 4067081591U; }
	void UVRGlobalSettings::StaticRegisterNativesUVRGlobalSettings()
	{
		UClass* Class = UVRGlobalSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddControllerProfile", &UVRGlobalSettings::execAddControllerProfile },
			{ "AdjustTransformByControllerProfile", &UVRGlobalSettings::execAdjustTransformByControllerProfile },
			{ "DeleteControllerProfile", &UVRGlobalSettings::execDeleteControllerProfile },
			{ "GetControllerProfile", &UVRGlobalSettings::execGetControllerProfile },
			{ "GetControllerProfiles", &UVRGlobalSettings::execGetControllerProfiles },
			{ "GetCurrentProfile", &UVRGlobalSettings::execGetCurrentProfile },
			{ "LoadControllerProfile", &UVRGlobalSettings::execLoadControllerProfile },
			{ "LoadControllerProfileByName", &UVRGlobalSettings::execLoadControllerProfileByName },
			{ "OverwriteControllerProfile", &UVRGlobalSettings::execOverwriteControllerProfile },
			{ "SaveControllerProfiles", &UVRGlobalSettings::execSaveControllerProfiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile()
	{
		struct VRGlobalSettings_eventAddControllerProfile_Parms
		{
			FBPVRControllerProfile NewProfile;
			bool bSaveOutToConfig;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSaveOutToConfig_SetBit = [](void* Obj){ ((VRGlobalSettings_eventAddControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "bSaveOutToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventAddControllerProfile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSaveOutToConfig_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "NewProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAddControllerProfile_Parms, NewProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSaveOutToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewProfile,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles|Operations" },
				{ "CPP_Default_bSaveOutToConfig", "true" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Add a controller profile" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "AddControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventAddControllerProfile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile()
	{
		struct VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms
		{
			FName OptionalControllerProfileName;
			FTransform SocketTransform;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, SocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_SocketTransform_MetaData, ARRAY_COUNT(NewProp_SocketTransform_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "OptionalControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, OptionalControllerProfileName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionalControllerProfileName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Adjust the transform of a socket for a particular controller model, if a name is not sent in, it will use the currently loaded one\nIf there is no currently loaded one, it will return the input transform as is." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "AdjustTransformByControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile()
	{
		struct VRGlobalSettings_eventDeleteControllerProfile_Parms
		{
			FName ControllerProfileName;
			bool bSaveOutToConfig;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSaveOutToConfig_SetBit = [](void* Obj){ ((VRGlobalSettings_eventDeleteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "bSaveOutToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventDeleteControllerProfile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSaveOutToConfig_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventDeleteControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSaveOutToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerProfileName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles|Operations" },
				{ "CPP_Default_bSaveOutToConfig", "true" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Overwrite a controller profile" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "DeleteControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VRGlobalSettings_eventDeleteControllerProfile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile()
	{
		struct VRGlobalSettings_eventGetControllerProfile_Parms
		{
			FName ControllerProfileName;
			FBPVRControllerProfile OutProfile;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRGlobalSettings_eventGetControllerProfile_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventGetControllerProfile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "OutProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, OutProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutProfile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerProfileName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Get a controller profile by name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "GetControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventGetControllerProfile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles()
	{
		struct VRGlobalSettings_eventGetControllerProfiles_Parms
		{
			TArray<FBPVRControllerProfile> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Get array of controller profiles" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "GetControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VRGlobalSettings_eventGetControllerProfiles_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile()
	{
		struct VRGlobalSettings_eventGetCurrentProfile_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetCurrentProfile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Get name of currently loaded profile (if one is loaded)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "GetCurrentProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VRGlobalSettings_eventGetCurrentProfile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile()
	{
		struct VRGlobalSettings_eventLoadControllerProfile_Parms
		{
			FBPVRControllerProfile ControllerProfile;
			bool bSetAsCurrentProfile;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSetAsCurrentProfile_SetBit = [](void* Obj){ ((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->bSetAsCurrentProfile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetAsCurrentProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSetAsCurrentProfile_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerProfile_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "ControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfile_Parms, ControllerProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(NewProp_ControllerProfile_MetaData, ARRAY_COUNT(NewProp_ControllerProfile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSetAsCurrentProfile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerProfile,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles" },
				{ "CPP_Default_bSetAsCurrentProfile", "true" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Load a controller profile\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "LoadControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName()
	{
		struct VRGlobalSettings_eventLoadControllerProfileByName_Parms
		{
			FName ControllerProfileName;
			bool bSetAsCurrentProfile;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSetAsCurrentProfile_SetBit = [](void* Obj){ ((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->bSetAsCurrentProfile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetAsCurrentProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSetAsCurrentProfile_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfileByName_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSetAsCurrentProfile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerProfileName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles" },
				{ "CPP_Default_bSetAsCurrentProfile", "true" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Load a controller profile by name\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "LoadControllerProfileByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile()
	{
		struct VRGlobalSettings_eventOverwriteControllerProfile_Parms
		{
			FBPVRControllerProfile OverwritingProfile;
			bool bSaveOutToConfig;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSaveOutToConfig_SetBit = [](void* Obj){ ((VRGlobalSettings_eventOverwriteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "bSaveOutToConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventOverwriteControllerProfile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSaveOutToConfig_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverwritingProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "OverwritingProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventOverwriteControllerProfile_Parms, OverwritingProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSaveOutToConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverwritingProfile,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles|Operations" },
				{ "CPP_Default_bSaveOutToConfig", "true" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Overwrite a controller profile" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "OverwriteControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventOverwriteControllerProfile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRControllerProfiles|Operations" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Saved the VRGlobalSettings out to its config file, will include any alterations that you made to the profile" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "SaveControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister()
	{
		return UVRGlobalSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRGlobalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile, "AddControllerProfile" }, // 273089095
				{ &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile, "AdjustTransformByControllerProfile" }, // 2106361182
				{ &Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile, "DeleteControllerProfile" }, // 2379885654
				{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile, "GetControllerProfile" }, // 2156678278
				{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles, "GetControllerProfiles" }, // 2399763157
				{ &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile, "GetCurrentProfile" }, // 2738510897
				{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile, "LoadControllerProfile" }, // 1044266748
				{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName, "LoadControllerProfileByName" }, // 2967405987
				{ &Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile, "OverwriteControllerProfile" }, // 813714626
				{ &Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles, "SaveControllerProfiles" }, // 717404556
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VRGlobalSettings.h" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroDeltaCutoff_MetaData[] = {
				{ "Category", "Secondary Grip 1Euro Settings" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroDeltaCutoff = { UE4CodeGen_Private::EPropertyClass::Float, "OneEuroDeltaCutoff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, OneEuroDeltaCutoff), METADATA_PARAMS(NewProp_OneEuroDeltaCutoff_MetaData, ARRAY_COUNT(NewProp_OneEuroDeltaCutoff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroCutoffSlope_MetaData[] = {
				{ "Category", "Secondary Grip 1Euro Settings" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroCutoffSlope = { UE4CodeGen_Private::EPropertyClass::Float, "OneEuroCutoffSlope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, OneEuroCutoffSlope), METADATA_PARAMS(NewProp_OneEuroCutoffSlope_MetaData, ARRAY_COUNT(NewProp_OneEuroCutoffSlope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroMinCutoff_MetaData[] = {
				{ "Category", "Secondary Grip 1Euro Settings" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroMinCutoff = { UE4CodeGen_Private::EPropertyClass::Float, "OneEuroMinCutoff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, OneEuroMinCutoff), METADATA_PARAMS(NewProp_OneEuroMinCutoff_MetaData, ARRAY_COUNT(NewProp_OneEuroMinCutoff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerProfiles_MetaData[] = {
				{ "Category", "ControllerProfiles" },
				{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
				{ "ToolTip", "Controller profiles to store related information on a per profile basis" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllerProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "ControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, ControllerProfiles), METADATA_PARAMS(NewProp_ControllerProfiles_MetaData, ARRAY_COUNT(NewProp_ControllerProfiles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OneEuroDeltaCutoff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OneEuroCutoffSlope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OneEuroMinCutoff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerProfiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerProfiles_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRGlobalSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRGlobalSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGlobalSettings, 3162509134);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGlobalSettings(Z_Construct_UClass_UVRGlobalSettings, &UVRGlobalSettings::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGlobalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGlobalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
