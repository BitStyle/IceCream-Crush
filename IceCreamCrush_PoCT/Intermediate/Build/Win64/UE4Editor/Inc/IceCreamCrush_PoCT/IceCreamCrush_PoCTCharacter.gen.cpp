// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IceCreamCrush_PoCT/IceCreamCrush_PoCTCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceCreamCrush_PoCTCharacter() {}
// Cross Module References
	ICECREAMCRUSH_POCT_API UClass* Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_NoRegister();
	ICECREAMCRUSH_POCT_API UClass* Z_Construct_UClass_AIceCreamCrush_PoCTCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_IceCreamCrush_PoCT();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AIceCreamCrush_PoCTCharacter::StaticRegisterNativesAIceCreamCrush_PoCTCharacter()
	{
	}
	UClass* Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_NoRegister()
	{
		return AIceCreamCrush_PoCTCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_IceCreamCrush_PoCT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IceCreamCrush_PoCTCharacter.h" },
		{ "ModuleRelativePath", "IceCreamCrush_PoCTCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "IceCreamCrush_PoCTCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceCreamCrush_PoCTCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "IceCreamCrush_PoCTCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceCreamCrush_PoCTCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceCreamCrush_PoCTCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceCreamCrush_PoCTCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceCreamCrush_PoCTCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceCreamCrush_PoCTCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIceCreamCrush_PoCTCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::ClassParams = {
		&AIceCreamCrush_PoCTCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIceCreamCrush_PoCTCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIceCreamCrush_PoCTCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIceCreamCrush_PoCTCharacter, 3139805966);
	template<> ICECREAMCRUSH_POCT_API UClass* StaticClass<AIceCreamCrush_PoCTCharacter>()
	{
		return AIceCreamCrush_PoCTCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIceCreamCrush_PoCTCharacter(Z_Construct_UClass_AIceCreamCrush_PoCTCharacter, &AIceCreamCrush_PoCTCharacter::StaticClass, TEXT("/Script/IceCreamCrush_PoCT"), TEXT("AIceCreamCrush_PoCTCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIceCreamCrush_PoCTCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
