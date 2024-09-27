// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/FishShooterSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishShooterSaveGame() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_UFishShooterSaveGame_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_UFishShooterSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
// End Cross Module References
	void UFishShooterSaveGame::StaticRegisterNativesUFishShooterSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UFishShooterSaveGame_NoRegister()
	{
		return UFishShooterSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UFishShooterSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumKills;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFishShooterSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishShooterSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class for saving and retrieving gameplay data\n */" },
		{ "IncludePath", "FishShooterSaveGame.h" },
		{ "ModuleRelativePath", "FishShooterSaveGame.h" },
		{ "ToolTip", "Class for saving and retrieving gameplay data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishShooterSaveGame_Statics::NewProp_NumKills_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "FishShooterSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFishShooterSaveGame_Statics::NewProp_NumKills = { "NumKills", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFishShooterSaveGame, NumKills), METADATA_PARAMS(Z_Construct_UClass_UFishShooterSaveGame_Statics::NewProp_NumKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFishShooterSaveGame_Statics::NewProp_NumKills_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFishShooterSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFishShooterSaveGame_Statics::NewProp_NumKills,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFishShooterSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFishShooterSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFishShooterSaveGame_Statics::ClassParams = {
		&UFishShooterSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFishShooterSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFishShooterSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFishShooterSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFishShooterSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFishShooterSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFishShooterSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFishShooterSaveGame, 628127488);
	template<> FISHSHOOTER_API UClass* StaticClass<UFishShooterSaveGame>()
	{
		return UFishShooterSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFishShooterSaveGame(Z_Construct_UClass_UFishShooterSaveGame, &UFishShooterSaveGame::StaticClass, TEXT("/Script/FishShooter"), TEXT("UFishShooterSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFishShooterSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
