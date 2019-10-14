// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IceCreamAndCrush2/IceCreamAndCrush2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceCreamAndCrush2GameMode() {}
// Cross Module References
	ICECREAMANDCRUSH2_API UClass* Z_Construct_UClass_AIceCreamAndCrush2GameMode_NoRegister();
	ICECREAMANDCRUSH2_API UClass* Z_Construct_UClass_AIceCreamAndCrush2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IceCreamAndCrush2();
// End Cross Module References
	void AIceCreamAndCrush2GameMode::StaticRegisterNativesAIceCreamAndCrush2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AIceCreamAndCrush2GameMode_NoRegister()
	{
		return AIceCreamAndCrush2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IceCreamAndCrush2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IceCreamAndCrush2GameMode.h" },
		{ "ModuleRelativePath", "IceCreamAndCrush2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIceCreamAndCrush2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics::ClassParams = {
		&AIceCreamAndCrush2GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIceCreamAndCrush2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIceCreamAndCrush2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIceCreamAndCrush2GameMode, 3139012906);
	template<> ICECREAMANDCRUSH2_API UClass* StaticClass<AIceCreamAndCrush2GameMode>()
	{
		return AIceCreamAndCrush2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIceCreamAndCrush2GameMode(Z_Construct_UClass_AIceCreamAndCrush2GameMode, &AIceCreamAndCrush2GameMode::StaticClass, TEXT("/Script/IceCreamAndCrush2"), TEXT("AIceCreamAndCrush2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIceCreamAndCrush2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
