// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IceCreamCrush_PoCT/IceCreamCrush_PoCTGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceCreamCrush_PoCTGameMode() {}
// Cross Module References
	ICECREAMCRUSH_POCT_API UClass* Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_NoRegister();
	ICECREAMCRUSH_POCT_API UClass* Z_Construct_UClass_AIceCreamCrush_PoCTGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IceCreamCrush_PoCT();
// End Cross Module References
	void AIceCreamCrush_PoCTGameMode::StaticRegisterNativesAIceCreamCrush_PoCTGameMode()
	{
	}
	UClass* Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_NoRegister()
	{
		return AIceCreamCrush_PoCTGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IceCreamCrush_PoCT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IceCreamCrush_PoCTGameMode.h" },
		{ "ModuleRelativePath", "IceCreamCrush_PoCTGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIceCreamCrush_PoCTGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics::ClassParams = {
		&AIceCreamCrush_PoCTGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIceCreamCrush_PoCTGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIceCreamCrush_PoCTGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIceCreamCrush_PoCTGameMode, 2811032810);
	template<> ICECREAMCRUSH_POCT_API UClass* StaticClass<AIceCreamCrush_PoCTGameMode>()
	{
		return AIceCreamCrush_PoCTGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIceCreamCrush_PoCTGameMode(Z_Construct_UClass_AIceCreamCrush_PoCTGameMode, &AIceCreamCrush_PoCTGameMode::StaticClass, TEXT("/Script/IceCreamCrush_PoCT"), TEXT("AIceCreamCrush_PoCTGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIceCreamCrush_PoCTGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
