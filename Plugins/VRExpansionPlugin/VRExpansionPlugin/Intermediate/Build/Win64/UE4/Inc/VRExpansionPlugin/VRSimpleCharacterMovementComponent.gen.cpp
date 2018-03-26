// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SimpleChar/VRSimpleCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void UVRSimpleCharacterMovementComponent::StaticRegisterNativesUVRSimpleCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister()
	{
		return UVRSimpleCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipHMDChecks_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ToolTip", "Skips checking for the HMD location on tick, for 2D pawns when a headset is connected" },
			};
#endif
			auto NewProp_bSkipHMDChecks_SetBit = [](void* Obj){ ((UVRSimpleCharacterMovementComponent*)Obj)->bSkipHMDChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipHMDChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipHMDChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSimpleCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipHMDChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipHMDChecks_MetaData, ARRAY_COUNT(NewProp_bSkipHMDChecks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCameraComponent_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VRCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008201c, 1, nullptr, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_VRCameraComponent_MetaData, ARRAY_COUNT(NewProp_VRCameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule = { UE4CodeGen_Private::EPropertyClass::Object, "VRRootCapsule", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008201c, 1, nullptr, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_VRRootCapsule_MetaData, ARRAY_COUNT(NewProp_VRRootCapsule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipHMDChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRRootCapsule,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRSimpleCharacterMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRSimpleCharacterMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UVRSimpleCharacterMovementComponent, 2631485522);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRSimpleCharacterMovementComponent(Z_Construct_UClass_UVRSimpleCharacterMovementComponent, &UVRSimpleCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRSimpleCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSimpleCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
