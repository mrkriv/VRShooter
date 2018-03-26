// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Interactibles/VRInteractibleFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRInteractibleFunctionLibrary() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
// End Cross Module References
class UScriptStruct* FBPVRInteractibleBaseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRInteractibleBaseData"), sizeof(FBPVRInteractibleBaseData), Get_Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRInteractibleBaseData(FBPVRInteractibleBaseData::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRInteractibleBaseData"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRInteractibleBaseData
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRInteractibleBaseData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVRInteractibleBaseData")),new UScriptStruct::TCppStructOps<FBPVRInteractibleBaseData>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRInteractibleBaseData;
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRInteractibleBaseData"), sizeof(FBPVRInteractibleBaseData), Get_Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "A data structure to hold important interactible data\nShould be init'd in Beginplay with BeginPlayInit as well as OnGrip with OnGripInit.\nWorks in \"static space\", it records the original relative transform of the interactible on begin play\nso that calculations on the actual component can be done based off of it." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRInteractibleBaseData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReversedRelativeTransform_MetaData[] = {
				{ "Category", "InteractibleData" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "The initial transform in relative space of the grip to us - Set in OnGripInit" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReversedRelativeTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ReversedRelativeTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBPVRInteractibleBaseData, ReversedRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_ReversedRelativeTransform_MetaData, ARRAY_COUNT(NewProp_ReversedRelativeTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDropLocation_MetaData[] = {
				{ "Category", "InteractibleData" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Initial location on the interactible of the grip, used for drop calculations - Set in OnGripInit" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialDropLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialDropLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialDropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InitialDropLocation_MetaData, ARRAY_COUNT(NewProp_InitialDropLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialGripLoc_MetaData[] = {
				{ "Category", "InteractibleData" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Initial location of the interactible in the \"static space\" - Set in OnGripInit" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialGripLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialGripLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialGripLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InitialGripLoc_MetaData, ARRAY_COUNT(NewProp_InitialGripLoc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialInteractorLocation_MetaData[] = {
				{ "Category", "InteractibleData" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Initial location in \"static space\" of the interactor on grip - Set in OnGripInit" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialInteractorLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialInteractorLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InitialInteractorLocation_MetaData, ARRAY_COUNT(NewProp_InitialInteractorLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[] = {
				{ "Category", "InteractibleData" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Our initial relative transform to our parent \"static space\" - Set in BeginPlayInit" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialRelativeTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_InitialRelativeTransform_MetaData, ARRAY_COUNT(NewProp_InitialRelativeTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReversedRelativeTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialDropLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialGripLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialInteractorLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialRelativeTransform,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPVRInteractibleBaseData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBPVRInteractibleBaseData),
				alignof(FBPVRInteractibleBaseData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_CRC() { return 2905797310U; }
	void UVRInteractibleFunctionLibrary::StaticRegisterNativesUVRInteractibleFunctionLibrary()
	{
		UClass* Class = UVRInteractibleFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interactible_BeginPlayInit", &UVRInteractibleFunctionLibrary::execInteractible_BeginPlayInit },
			{ "Interactible_GetAngleAroundAxis", &UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxis },
			{ "Interactible_GetAngleAroundAxisDelta", &UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxisDelta },
			{ "Interactible_GetCurrentParentTransform", &UVRInteractibleFunctionLibrary::execInteractible_GetCurrentParentTransform },
			{ "Interactible_GetCurrentRelativeTransform", &UVRInteractibleFunctionLibrary::execInteractible_GetCurrentRelativeTransform },
			{ "Interactible_GetThresholdSnappedValue", &UVRInteractibleFunctionLibrary::execInteractible_GetThresholdSnappedValue },
			{ "Interactible_OnGripInit", &UVRInteractibleFunctionLibrary::execInteractible_OnGripInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit()
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms
		{
			USceneComponent* InteractibleComp;
			FBPVRInteractibleBaseData BaseDataToInit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseDataToInit = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseDataToInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms, BaseDataToInit), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractibleComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractibleComp = { UE4CodeGen_Private::EPropertyClass::Object, "InteractibleComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms, InteractibleComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InteractibleComp_MetaData, ARRAY_COUNT(NewProp_InteractibleComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseDataToInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InteractibleComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRInteractibleFunctions" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Inits the initial relative transform of an interactible on begin play" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, "Interactible_BeginPlayInit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis()
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms
		{
			EVRInteractibleAxis AxisToCalc;
			FVector CurInteractorLocation;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurInteractorLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "CurInteractorLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, CurInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisToCalc = { UE4CodeGen_Private::EPropertyClass::Enum, "AxisToCalc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, AxisToCalc), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisToCalc_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurInteractorLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToCalc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToCalc_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRInteractibleFunctions" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Returns (in degrees) the angle around the axis of a location\nExpects the CurInteractorLocation to be in relative space already" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, "Interactible_GetAngleAroundAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta()
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms
		{
			EVRInteractibleAxis AxisToCalc;
			FVector CurInteractorLocation;
			float InitialAngle;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAngle = { UE4CodeGen_Private::EPropertyClass::Float, "InitialAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, InitialAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurInteractorLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "CurInteractorLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, CurInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisToCalc = { UE4CodeGen_Private::EPropertyClass::Enum, "AxisToCalc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, AxisToCalc), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisToCalc_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurInteractorLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToCalc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToCalc_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRInteractibleFunctions" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Returns (in degrees) the delta rotation from the initial angle at grip to the current interactor angle around the axis\nExpects CurInteractorLocation to be in relative space already\nYou can add this to an initial rotation and clamp the result to rotate over time based on hand position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, "Interactible_GetAngleAroundAxisDelta", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform()
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms
		{
			USceneComponent* SceneComponentToCheck;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponentToCheck_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponentToCheck = { UE4CodeGen_Private::EPropertyClass::Object, "SceneComponentToCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms, SceneComponentToCheck), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SceneComponentToCheck_MetaData, ARRAY_COUNT(NewProp_SceneComponentToCheck_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SceneComponentToCheck,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRInteractibleFunctions" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Get current parent transform" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, "Interactible_GetCurrentParentTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform()
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms
		{
			USceneComponent* SceneComponentToCheck;
			FBPVRInteractibleBaseData BaseData;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseData = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, BaseData), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponentToCheck_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponentToCheck = { UE4CodeGen_Private::EPropertyClass::Object, "SceneComponentToCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, SceneComponentToCheck), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SceneComponentToCheck_MetaData, ARRAY_COUNT(NewProp_SceneComponentToCheck_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SceneComponentToCheck,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRInteractibleFunctions" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Get current relative transform (original transform we were at on grip for the current parent transform)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, "Interactible_GetCurrentRelativeTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue()
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms
		{
			float ValueToSnap;
			float SnapIncrement;
			float SnapThreshold;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "SnapThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, SnapThreshold), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapIncrement = { UE4CodeGen_Private::EPropertyClass::Float, "SnapIncrement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, SnapIncrement), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValueToSnap = { UE4CodeGen_Private::EPropertyClass::Float, "ValueToSnap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, ValueToSnap), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapIncrement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValueToSnap,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRInteractibleFunctions" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Returns a value that is snapped to the given settings, taking into account the threshold and increment" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, "Interactible_GetThresholdSnappedValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit()
	{
		struct VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms
		{
			USceneComponent* InteractibleComp;
			FBPActorGripInformation GripInformation;
			FBPVRInteractibleBaseData BaseDataToInit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseDataToInit = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseDataToInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, BaseDataToInit), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000180, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractibleComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractibleComp = { UE4CodeGen_Private::EPropertyClass::Object, "InteractibleComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, InteractibleComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InteractibleComp_MetaData, ARRAY_COUNT(NewProp_InteractibleComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseDataToInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InteractibleComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRInteractibleFunctions" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ToolTip", "Inits the calculated values of a VR Interactible Base Data Structure on a grip event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, "Interactible_OnGripInit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary_NoRegister()
	{
		return UVRInteractibleFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit, "Interactible_BeginPlayInit" }, // 3140371339
				{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis, "Interactible_GetAngleAroundAxis" }, // 959895358
				{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta, "Interactible_GetAngleAroundAxisDelta" }, // 2491053997
				{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform, "Interactible_GetCurrentParentTransform" }, // 3161689065
				{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform, "Interactible_GetCurrentRelativeTransform" }, // 3837253699
				{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue, "Interactible_GetThresholdSnappedValue" }, // 3824318803
				{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit, "Interactible_OnGripInit" }, // 858554210
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Interactibles/VRInteractibleFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRInteractibleFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRInteractibleFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRInteractibleFunctionLibrary, 482648010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRInteractibleFunctionLibrary(Z_Construct_UClass_UVRInteractibleFunctionLibrary, &UVRInteractibleFunctionLibrary::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRInteractibleFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRInteractibleFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
