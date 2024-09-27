// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/FeedTheTeddiesSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedTheTeddiesSaveGame() {}
// Cross Module References
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void UFeedTheTeddiesSaveGame::StaticRegisterNativesUFeedTheTeddiesSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame_NoRegister()
	{
		return UFeedTheTeddiesSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HighScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class for saving and retrieving gameplay data\n */" },
		{ "IncludePath", "FeedTheTeddiesSaveGame.h" },
		{ "ModuleRelativePath", "FeedTheTeddiesSaveGame.h" },
		{ "ToolTip", "Class for saving and retrieving gameplay data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "FeedTheTeddiesSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedTheTeddiesSaveGame, HighScore), METADATA_PARAMS(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "FeedTheTeddiesSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedTheTeddiesSaveGame, Difficulty), METADATA_PARAMS(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedTheTeddiesSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::ClassParams = {
		&UFeedTheTeddiesSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFeedTheTeddiesSaveGame, 4284995015);
	template<> FEEDTHETEDDIES_API UClass* StaticClass<UFeedTheTeddiesSaveGame>()
	{
		return UFeedTheTeddiesSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFeedTheTeddiesSaveGame(Z_Construct_UClass_UFeedTheTeddiesSaveGame, &UFeedTheTeddiesSaveGame::StaticClass, TEXT("/Script/FeedTheTeddies"), TEXT("UFeedTheTeddiesSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedTheTeddiesSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
