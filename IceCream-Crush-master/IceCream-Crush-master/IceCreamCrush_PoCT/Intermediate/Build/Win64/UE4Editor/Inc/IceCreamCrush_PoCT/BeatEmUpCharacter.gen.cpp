// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IceCreamCrush_PoCT/BeatEmUpCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeatEmUpCharacter() {}
// Cross Module References
	ICECREAMCRUSH_POCT_API UClass* Z_Construct_UClass_ABeatEmUpCharacter_NoRegister();
	ICECREAMCRUSH_POCT_API UClass* Z_Construct_UClass_ABeatEmUpCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_IceCreamCrush_PoCT();
// End Cross Module References
	void ABeatEmUpCharacter::StaticRegisterNativesABeatEmUpCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABeatEmUpCharacter_NoRegister()
	{
		return ABeatEmUpCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABeatEmUpCharacter_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABeatEmUpCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_IceCreamCrush_PoCT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeatEmUpCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BeatEmUpCharacter.h" },
		{ "ModuleRelativePath", "BeatEmUpCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "BeatEmUpCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeatEmUpCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "BeatEmUpCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeatEmUpCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABeatEmUpCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeatEmUpCharacter_Statics::NewProp_BaseTurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABeatEmUpCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeatEmUpCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABeatEmUpCharacter_Statics::ClassParams = {
		&ABeatEmUpCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABeatEmUpCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABeatEmUpCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABeatEmUpCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABeatEmUpCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABeatEmUpCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABeatEmUpCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABeatEmUpCharacter, 3914926006);
	template<> ICECREAMCRUSH_POCT_API UClass* StaticClass<ABeatEmUpCharacter>()
	{
		return ABeatEmUpCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABeatEmUpCharacter(Z_Construct_UClass_ABeatEmUpCharacter, &ABeatEmUpCharacter::StaticClass, TEXT("/Script/IceCreamCrush_PoCT"), TEXT("ABeatEmUpCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABeatEmUpCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
