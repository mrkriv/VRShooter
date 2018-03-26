// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Interactibles/VRMountComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRMountComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRMountComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRMountComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_AdvancedGripSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_ClosestGripSlotInRange();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_DenyGripping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_GetGripStiffnessAndDamping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_GetInteractionSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_GetPrimaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_GripBreakDistance();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_GripLateUpdateSetting();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_GripMovementReplicationType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_IsHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_IsInteractible();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnChildGrip();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnChildGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnEndSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnEndUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnGrip();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnSecondaryGrip();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnSecondaryGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_OnUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_SecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_SetHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_SimulateOnDrop();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_TeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRMountComponent_TickGrip();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	static UEnum* EVRInteractibleMountAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleMountAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRInteractibleMountAxis(EVRInteractibleMountAxis_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRInteractibleMountAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_CRC() { return 3668537890U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRInteractibleMountAxis"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRInteractibleMountAxis::Axis_XZ", (int64)EVRInteractibleMountAxis::Axis_XZ },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Axis_XZ.ToolTip", "Limit Rotation to Yaw and Roll" },
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRInteractibleMountAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRInteractibleMountAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UVRMountComponent_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings UVRMountComponent::AdvancedGripSettings()
	{
		VRMountComponent_eventAdvancedGripSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_AdvancedGripSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void UVRMountComponent::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		VRMountComponent_eventClosestGripSlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bSecondarySlot=bSecondarySlot ? true : false;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_ClosestGripSlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
	}
	static FName NAME_UVRMountComponent_DenyGripping = FName(TEXT("DenyGripping"));
	bool UVRMountComponent::DenyGripping()
	{
		VRMountComponent_eventDenyGripping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_DenyGripping),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void UVRMountComponent::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		VRMountComponent_eventGetGripStiffnessAndDamping_Parms Parms;
		Parms.GripStiffnessOut=GripStiffnessOut;
		Parms.GripDampingOut=GripDampingOut;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_GetGripStiffnessAndDamping),&Parms);
		GripStiffnessOut=Parms.GripStiffnessOut;
		GripDampingOut=Parms.GripDampingOut;
	}
	static FName NAME_UVRMountComponent_GetInteractionSettings = FName(TEXT("GetInteractionSettings"));
	FBPInteractionSettings UVRMountComponent::GetInteractionSettings()
	{
		VRMountComponent_eventGetInteractionSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_GetInteractionSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType UVRMountComponent::GetPrimaryGripType(bool bIsSlot)
	{
		VRMountComponent_eventGetPrimaryGripType_Parms Parms;
		Parms.bIsSlot=bIsSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_GetPrimaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float UVRMountComponent::GripBreakDistance()
	{
		VRMountComponent_eventGripBreakDistance_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_GripBreakDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings UVRMountComponent::GripLateUpdateSetting()
	{
		VRMountComponent_eventGripLateUpdateSetting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_GripLateUpdateSetting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings UVRMountComponent::GripMovementReplicationType()
	{
		VRMountComponent_eventGripMovementReplicationType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_GripMovementReplicationType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_IsHeld = FName(TEXT("IsHeld"));
	void UVRMountComponent::IsHeld(UGripMotionControllerComponent*& CurHoldingController, bool& bCurIsHeld)
	{
		VRMountComponent_eventIsHeld_Parms Parms;
		Parms.CurHoldingController=CurHoldingController;
		Parms.bCurIsHeld=bCurIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_IsHeld),&Parms);
		CurHoldingController=Parms.CurHoldingController;
		bCurIsHeld=Parms.bCurIsHeld;
	}
	static FName NAME_UVRMountComponent_IsInteractible = FName(TEXT("IsInteractible"));
	bool UVRMountComponent::IsInteractible()
	{
		VRMountComponent_eventIsInteractible_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_IsInteractible),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_OnChildGrip = FName(TEXT("OnChildGrip"));
	void UVRMountComponent::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRMountComponent_eventOnChildGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnChildGrip),&Parms);
	}
	static FName NAME_UVRMountComponent_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void UVRMountComponent::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		VRMountComponent_eventOnChildGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnChildGripRelease),&Parms);
	}
	static FName NAME_UVRMountComponent_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void UVRMountComponent::OnEndSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnEndSecondaryUsed),NULL);
	}
	static FName NAME_UVRMountComponent_OnEndUsed = FName(TEXT("OnEndUsed"));
	void UVRMountComponent::OnEndUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnEndUsed),NULL);
	}
	static FName NAME_UVRMountComponent_OnGrip = FName(TEXT("OnGrip"));
	void UVRMountComponent::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRMountComponent_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnGrip),&Parms);
	}
	static FName NAME_UVRMountComponent_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UVRMountComponent::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		VRMountComponent_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnGripRelease),&Parms);
	}
	static FName NAME_UVRMountComponent_OnInput = FName(TEXT("OnInput"));
	void UVRMountComponent::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		VRMountComponent_eventOnInput_Parms Parms;
		Parms.Key=Key;
		Parms.KeyEvent=KeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnInput),&Parms);
	}
	static FName NAME_UVRMountComponent_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UVRMountComponent::OnSecondaryGrip(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRMountComponent_eventOnSecondaryGrip_Parms Parms;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UVRMountComponent_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UVRMountComponent::OnSecondaryGripRelease(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRMountComponent_eventOnSecondaryGripRelease_Parms Parms;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_UVRMountComponent_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void UVRMountComponent::OnSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnSecondaryUsed),NULL);
	}
	static FName NAME_UVRMountComponent_OnUsed = FName(TEXT("OnUsed"));
	void UVRMountComponent::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_OnUsed),NULL);
	}
	static FName NAME_UVRMountComponent_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType UVRMountComponent::SecondaryGripType()
	{
		VRMountComponent_eventSecondaryGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_SecondaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_SetHeld = FName(TEXT("SetHeld"));
	void UVRMountComponent::SetHeld(UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld)
	{
		VRMountComponent_eventSetHeld_Parms Parms;
		Parms.NewHoldingController=NewHoldingController;
		Parms.bNewIsHeld=bNewIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_SetHeld),&Parms);
	}
	static FName NAME_UVRMountComponent_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool UVRMountComponent::SimulateOnDrop()
	{
		VRMountComponent_eventSimulateOnDrop_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_SimulateOnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior UVRMountComponent::TeleportBehavior()
	{
		VRMountComponent_eventTeleportBehavior_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_TeleportBehavior),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRMountComponent_TickGrip = FName(TEXT("TickGrip"));
	void UVRMountComponent::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		VRMountComponent_eventTickGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UVRMountComponent_TickGrip),&Parms);
	}
	void UVRMountComponent::StaticRegisterNativesUVRMountComponent()
	{
		UClass* Class = UVRMountComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvancedGripSettings", &UVRMountComponent::execAdvancedGripSettings },
			{ "ClosestGripSlotInRange", &UVRMountComponent::execClosestGripSlotInRange },
			{ "DenyGripping", &UVRMountComponent::execDenyGripping },
			{ "GetGripStiffnessAndDamping", &UVRMountComponent::execGetGripStiffnessAndDamping },
			{ "GetInteractionSettings", &UVRMountComponent::execGetInteractionSettings },
			{ "GetPrimaryGripType", &UVRMountComponent::execGetPrimaryGripType },
			{ "GripBreakDistance", &UVRMountComponent::execGripBreakDistance },
			{ "GripLateUpdateSetting", &UVRMountComponent::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", &UVRMountComponent::execGripMovementReplicationType },
			{ "IsHeld", &UVRMountComponent::execIsHeld },
			{ "IsInteractible", &UVRMountComponent::execIsInteractible },
			{ "OnChildGrip", &UVRMountComponent::execOnChildGrip },
			{ "OnChildGripRelease", &UVRMountComponent::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", &UVRMountComponent::execOnEndSecondaryUsed },
			{ "OnEndUsed", &UVRMountComponent::execOnEndUsed },
			{ "OnGrip", &UVRMountComponent::execOnGrip },
			{ "OnGripRelease", &UVRMountComponent::execOnGripRelease },
			{ "OnInput", &UVRMountComponent::execOnInput },
			{ "OnSecondaryGrip", &UVRMountComponent::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &UVRMountComponent::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", &UVRMountComponent::execOnSecondaryUsed },
			{ "OnUsed", &UVRMountComponent::execOnUsed },
			{ "ResetInitialMountLocation", &UVRMountComponent::execResetInitialMountLocation },
			{ "SecondaryGripType", &UVRMountComponent::execSecondaryGripType },
			{ "SetHeld", &UVRMountComponent::execSetHeld },
			{ "SimulateOnDrop", &UVRMountComponent::execSimulateOnDrop },
			{ "TeleportBehavior", &UVRMountComponent::execTeleportBehavior },
			{ "TickGrip", &UVRMountComponent::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Get the advanced physics settings for this grip" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "AdvancedGripSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventAdvancedGripSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverridePrefix = { UE4CodeGen_Private::EPropertyClass::Name, "OverridePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingController = { UE4CodeGen_Private::EPropertyClass::Object, "CallingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_CallingController_MetaData, ARRAY_COUNT(NewProp_CallingController_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHadSlotInRange_SetBit = [](void* Obj){ ((VRMountComponent_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventClosestGripSlotInRange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadSlotInRange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSecondarySlot_SetBit = [](void* Obj){ ((VRMountComponent_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecondarySlot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventClosestGripSlotInRange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSecondarySlot_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverridePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallingController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotWorldTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHadSlotInRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSecondarySlot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "CPP_Default_OverridePrefix", "None" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "// Get closest secondary slot in range\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n       void ClosestSecondarySlotInRange(FVector WorldLocation, bool & bHadSlotInRange, FTransform & SlotWorldTransform, UGripMotionControllerComponent * CallingController = nullptr, FName OverridePrefix = NAME_None);\n\n       // Get closest primary slot in range\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n       void ClosestPrimarySlotInRange(FVector WorldLocation, bool & bHadSlotInRange, FTransform & SlotWorldTransform, UGripMotionControllerComponent * CallingController = nullptr, FName OverridePrefix = NAME_None);\n       // Get grip primary slot in range" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "ClosestGripSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20C00, sizeof(VRMountComponent_eventClosestGripSlotInRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRMountComponent_eventDenyGripping_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventDenyGripping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "DenyGripping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventDenyGripping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut = { UE4CodeGen_Private::EPropertyClass::Float, "GripDampingOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut = { UE4CodeGen_Private::EPropertyClass::Float, "GripStiffnessOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripDampingOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripStiffnessOut,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "// What grip stiffness to use if using a physics constraint\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n       float GripStiffness();\n\n       // What grip damping to use if using a physics constraint\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n       float GripDamping();\n       // What grip stiffness and damping to use if using a physics constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "GetGripStiffnessAndDamping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(VRMountComponent_eventGetGripStiffnessAndDamping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_GetInteractionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventGetInteractionSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPInteractionSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Get interactable settings" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "GetInteractionSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventGetInteractionSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsSlot_SetBit = [](void* Obj){ ((VRMountComponent_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlot = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSlot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventGetPrimaryGripType_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSlot_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSlot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Grip type to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "GetPrimaryGripType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventGetPrimaryGripType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "GripBreakDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventGripBreakDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Define the late update setting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "GripLateUpdateSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventGripLateUpdateSetting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Define which movement repliation setting to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "GripMovementReplicationType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventGripMovementReplicationType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCurIsHeld_SetBit = [](void* Obj){ ((VRMountComponent_eventIsHeld_Parms*)Obj)->bCurIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventIsHeld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCurIsHeld_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHoldingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurHoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "CurHoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080180, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventIsHeld_Parms, CurHoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_CurHoldingController_MetaData, ARRAY_COUNT(NewProp_CurHoldingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCurIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurHoldingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Returns if the object is held and if so, which pawn is holding it" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "IsHeld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(VRMountComponent_eventIsHeld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_IsInteractible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRMountComponent_eventIsInteractible_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventIsInteractible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Check if the object is an interactable" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "IsInteractible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventIsInteractible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnChildGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRMountComponent_eventOnChildGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingController_MetaData, ARRAY_COUNT(NewProp_ReleasingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnChildGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRMountComponent_eventOnChildGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Call to stop using an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnEndSecondaryUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Call to stop using an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnEndUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRMountComponent_eventOnGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingController_MetaData, ARRAY_COUNT(NewProp_ReleasingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRMountComponent_eventOnGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "KeyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Call to send an action event to the object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventOnInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SecondaryGripComponent_MetaData, ARRAY_COUNT(NewProp_SecondaryGripComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondaryGripComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnSecondaryGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRMountComponent_eventOnSecondaryGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingSecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingSecondaryGripComponent_MetaData, ARRAY_COUNT(NewProp_ReleasingSecondaryGripComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingSecondaryGripComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnSecondaryGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRMountComponent_eventOnSecondaryGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnSecondaryUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "OnUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMountComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Should be called after the Mount is moved post begin play" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "ResetInitialMountLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "// Grip type to use when gripping a slot\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n       EGripCollisionType SlotGripType();\n\n       // Grip type to use when not gripping a slot\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n       EGripCollisionType FreeGripType();\n       // Secondary grip type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "SecondaryGripType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventSecondaryGripType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewIsHeld_SetBit = [](void* Obj){ ((VRMountComponent_eventSetHeld_Parms*)Obj)->bNewIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventSetHeld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewIsHeld_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewHoldingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "NewHoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventSetHeld_Parms, NewHoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_NewHoldingController_MetaData, ARRAY_COUNT(NewProp_NewHoldingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewHoldingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Sets is held, used by the plugin" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "SetHeld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventSetHeld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRMountComponent_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRMountComponent_eventSimulateOnDrop_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Should this object simulate on drop" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "SimulateOnDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventSimulateOnDrop_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "How an interfaced object behaves when teleporting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "TeleportBehavior", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRMountComponent_eventTeleportBehavior_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRMountComponent_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRMountComponent_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, "TickGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRMountComponent_eventTickGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRMountComponent_NoRegister()
	{
		return UVRMountComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRMountComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRMountComponent_AdvancedGripSettings, "AdvancedGripSettings" }, // 777483029
				{ &Z_Construct_UFunction_UVRMountComponent_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 2895234118
				{ &Z_Construct_UFunction_UVRMountComponent_DenyGripping, "DenyGripping" }, // 1393303017
				{ &Z_Construct_UFunction_UVRMountComponent_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 1259507021
				{ &Z_Construct_UFunction_UVRMountComponent_GetInteractionSettings, "GetInteractionSettings" }, // 3382550353
				{ &Z_Construct_UFunction_UVRMountComponent_GetPrimaryGripType, "GetPrimaryGripType" }, // 3219544643
				{ &Z_Construct_UFunction_UVRMountComponent_GripBreakDistance, "GripBreakDistance" }, // 3692064958
				{ &Z_Construct_UFunction_UVRMountComponent_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 1157884626
				{ &Z_Construct_UFunction_UVRMountComponent_GripMovementReplicationType, "GripMovementReplicationType" }, // 1474547077
				{ &Z_Construct_UFunction_UVRMountComponent_IsHeld, "IsHeld" }, // 3354940206
				{ &Z_Construct_UFunction_UVRMountComponent_IsInteractible, "IsInteractible" }, // 2127439703
				{ &Z_Construct_UFunction_UVRMountComponent_OnChildGrip, "OnChildGrip" }, // 1446191535
				{ &Z_Construct_UFunction_UVRMountComponent_OnChildGripRelease, "OnChildGripRelease" }, // 1971001214
				{ &Z_Construct_UFunction_UVRMountComponent_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 225194412
				{ &Z_Construct_UFunction_UVRMountComponent_OnEndUsed, "OnEndUsed" }, // 1295102217
				{ &Z_Construct_UFunction_UVRMountComponent_OnGrip, "OnGrip" }, // 35910241
				{ &Z_Construct_UFunction_UVRMountComponent_OnGripRelease, "OnGripRelease" }, // 2624120411
				{ &Z_Construct_UFunction_UVRMountComponent_OnInput, "OnInput" }, // 3876243272
				{ &Z_Construct_UFunction_UVRMountComponent_OnSecondaryGrip, "OnSecondaryGrip" }, // 3408494820
				{ &Z_Construct_UFunction_UVRMountComponent_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 3756725694
				{ &Z_Construct_UFunction_UVRMountComponent_OnSecondaryUsed, "OnSecondaryUsed" }, // 44956967
				{ &Z_Construct_UFunction_UVRMountComponent_OnUsed, "OnUsed" }, // 2882547999
				{ &Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation, "ResetInitialMountLocation" }, // 4269406588
				{ &Z_Construct_UFunction_UVRMountComponent_SecondaryGripType, "SecondaryGripType" }, // 1960016674
				{ &Z_Construct_UFunction_UVRMountComponent_SetHeld, "SetHeld" }, // 423473650
				{ &Z_Construct_UFunction_UVRMountComponent_SimulateOnDrop, "SimulateOnDrop" }, // 1604705671
				{ &Z_Construct_UFunction_UVRMountComponent_TeleportBehavior, "TeleportBehavior" }, // 2604612547
				{ &Z_Construct_UFunction_UVRMountComponent_TickGrip, "TickGrip" }, // 1262029080
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VRExpansionPlugin" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "Interactibles/VRMountComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "A mounted lever/interactible implementation - Created by SpaceHarry - Merged into the plugin 01/29/2018" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Set on grip notify, not net serializing" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "HoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_HoldingController_MetaData, ARRAY_COUNT(NewProp_HoldingController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			auto NewProp_bIsHeld_SetBit = [](void* Obj){ ((UVRMountComponent*)Obj)->bIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRMountComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsHeld_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsHeld_MetaData, ARRAY_COUNT(NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			auto NewProp_bDenyGripping_SetBit = [](void* Obj){ ((UVRMountComponent*)Obj)->bDenyGripping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping = { UE4CodeGen_Private::EPropertyClass::Bool, "bDenyGripping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRMountComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDenyGripping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDenyGripping_MetaData, ARRAY_COUNT(NewProp_bDenyGripping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping = { UE4CodeGen_Private::EPropertyClass::Float, "Damping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, Damping), METADATA_PARAMS(NewProp_Damping_MetaData, ARRAY_COUNT(NewProp_Damping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness = { UE4CodeGen_Private::EPropertyClass::Float, "Stiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, Stiffness), METADATA_PARAMS(NewProp_Stiffness_MetaData, ARRAY_COUNT(NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakDistance = { UE4CodeGen_Private::EPropertyClass::Float, "BreakDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, BreakDistance), METADATA_PARAMS(NewProp_BreakDistance_MetaData, ARRAY_COUNT(NewProp_BreakDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationSetting = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementReplicationSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(NewProp_MovementReplicationSetting_MetaData, ARRAY_COUNT(NewProp_MovementReplicationSetting_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementReplicationSetting_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
				{ "Category", "VRGripInterface|Replication" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
			};
#endif
			auto NewProp_bReplicateMovement_SetBit = [](void* Obj){ ((UVRMountComponent*)Obj)->bReplicateMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplicateMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRMountComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReplicateMovement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReplicateMovement_MetaData, ARRAY_COUNT(NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Requires bReplicates to be true for the component" },
			};
#endif
			auto NewProp_bRepGameplayTags_SetBit = [](void* Obj){ ((UVRMountComponent*)Obj)->bRepGameplayTags = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGameplayTags = { UE4CodeGen_Private::EPropertyClass::Bool, "bRepGameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRMountComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRepGameplayTags_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRepGameplayTags_MetaData, ARRAY_COUNT(NewProp_bRepGameplayTags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Tags that are set on this object" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_GameplayTags_MetaData, ARRAY_COUNT(NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[] = {
				{ "Category", "VRMountComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GripPriority = { UE4CodeGen_Private::EPropertyClass::Int, "GripPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, GripPriority), METADATA_PARAMS(NewProp_GripPriority_MetaData, ARRAY_COUNT(NewProp_GripPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipReajustYawSpeed_MetaData[] = {
				{ "Category", "VRMountComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "If the mount feels lagging behind in yaw at some point after 90 degree pitch increase this number by 0.1 steps" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlipReajustYawSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlipReajustYawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, FlipReajustYawSpeed), METADATA_PARAMS(NewProp_FlipReajustYawSpeed_MetaData, ARRAY_COUNT(NewProp_FlipReajustYawSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipingZone_MetaData[] = {
				{ "Category", "VRMountComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "If the mount is swirling around a 90 degree pitch increase this number by 0.1 steps." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlipingZone = { UE4CodeGen_Private::EPropertyClass::Float, "FlipingZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, FlipingZone), METADATA_PARAMS(NewProp_FlipingZone_MetaData, ARRAY_COUNT(NewProp_FlipingZone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountRotationAxis_MetaData[] = {
				{ "Category", "VRMountComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
				{ "ToolTip", "Rotation axis to use, XY is combined X and Y, only LerpToZero and PositiveLimits work with this mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MountRotationAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "MountRotationAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRMountComponent, MountRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis, METADATA_PARAMS(NewProp_MountRotationAxis_MetaData, ARRAY_COUNT(NewProp_MountRotationAxis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MountRotationAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoldingController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDenyGripping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BreakDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementReplicationSetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementReplicationSetting_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReplicateMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRepGameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlipReajustYawSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlipingZone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MountRotationAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MountRotationAxis_Underlying,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRMountComponent, IVRGripInterface), false },
				{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRMountComponent, IGameplayTagAssetInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRMountComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRMountComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRMountComponent, 2757127570);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRMountComponent(Z_Construct_UClass_UVRMountComponent, &UVRMountComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRMountComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRMountComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
