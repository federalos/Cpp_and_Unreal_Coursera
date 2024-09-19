// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomDestruction/Destroyer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyer() {}
// Cross Module References
	RANDOMDESTRUCTION_API UClass* Z_Construct_UClass_ADestroyer_NoRegister();
	RANDOMDESTRUCTION_API UClass* Z_Construct_UClass_ADestroyer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RandomDestruction();
// End Cross Module References
	void ADestroyer::StaticRegisterNativesADestroyer()
	{
	}
	UClass* Z_Construct_UClass_ADestroyer_NoRegister()
	{
		return ADestroyer::StaticClass();
	}
	struct Z_Construct_UClass_ADestroyer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestroyer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomDestruction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The destroyer\n*/" },
		{ "IncludePath", "Destroyer.h" },
		{ "ModuleRelativePath", "Destroyer.h" },
		{ "ToolTip", "The destroyer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestroyer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestroyer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestroyer_Statics::ClassParams = {
		&ADestroyer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestroyer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestroyer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestroyer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestroyer, 3061104867);
	template<> RANDOMDESTRUCTION_API UClass* StaticClass<ADestroyer>()
	{
		return ADestroyer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestroyer(Z_Construct_UClass_ADestroyer, &ADestroyer::StaticClass, TEXT("/Script/RandomDestruction"), TEXT("ADestroyer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestroyer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
