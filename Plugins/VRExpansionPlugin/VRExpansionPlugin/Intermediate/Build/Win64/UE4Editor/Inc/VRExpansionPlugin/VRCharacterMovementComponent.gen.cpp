// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	void UVRCharacterMovementComponent::StaticRegisterNativesUVRCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister()
	{
		return UVRCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent()
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
				{ "IncludePath", "VRCharacterMovementComponent.h" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRepulsionMultiplier_MetaData[] = {
				{ "Category", "VRCharacterMovementComponent" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.01" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Higher values will cause more slide but better step up" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallRepulsionMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "WallRepulsionMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRCharacterMovementComponent, WallRepulsionMultiplier), METADATA_PARAMS(NewProp_WallRepulsionMultiplier_MetaData, ARRAY_COUNT(NewProp_WallRepulsionMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMovementMerging_MetaData[] = {
				{ "Category", "VRCharacterMovementComponent" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Allow merging movement replication (may cause issues when >10 players due to capsule location" },
			};
#endif
			auto NewProp_bAllowMovementMerging_SetBit = [](void* Obj){ ((UVRCharacterMovementComponent*)Obj)->bAllowMovementMerging = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMovementMerging = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMovementMerging", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowMovementMerging_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowMovementMerging_MetaData, ARRAY_COUNT(NewProp_bAllowMovementMerging_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule = { UE4CodeGen_Private::EPropertyClass::Object, "VRRootCapsule", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008201c, 1, nullptr, STRUCT_OFFSET(UVRCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(NewProp_VRRootCapsule_MetaData, ARRAY_COUNT(NewProp_VRRootCapsule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallRepulsionMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowMovementMerging,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRRootCapsule,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRCharacterMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRCharacterMovementComponent::StaticClass,
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
	IMPLEMENT_CLASS(UVRCharacterMovementComponent, 137695851);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRCharacterMovementComponent(Z_Construct_UClass_UVRCharacterMovementComponent, &UVRCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
