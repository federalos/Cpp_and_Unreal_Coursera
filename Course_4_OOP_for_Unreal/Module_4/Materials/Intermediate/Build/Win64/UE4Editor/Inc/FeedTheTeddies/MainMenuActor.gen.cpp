// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/MainMenuActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuActor() {}
// Cross Module References
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AMainMenuActor_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AMainMenuActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void AMainMenuActor::StaticRegisterNativesAMainMenuActor()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuActor_NoRegister()
	{
		return AMainMenuActor::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An actor for the main menu. The only purpose of this actor\n * is to make sure we have a valid save game so we don't have \n * to do extra Blueprint coding in the difficulty menu\n*/" },
		{ "IncludePath", "MainMenuActor.h" },
		{ "ModuleRelativePath", "MainMenuActor.h" },
		{ "ToolTip", "An actor for the main menu. The only purpose of this actor\nis to make sure we have a valid save game so we don't have\nto do extra Blueprint coding in the difficulty menu" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuActor_Statics::ClassParams = {
		&AMainMenuActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuActor, 1233661662);
	template<> FEEDTHETEDDIES_API UClass* StaticClass<AMainMenuActor>()
	{
		return AMainMenuActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuActor(Z_Construct_UClass_AMainMenuActor, &AMainMenuActor::StaticClass, TEXT("/Script/FeedTheTeddies"), TEXT("AMainMenuActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
