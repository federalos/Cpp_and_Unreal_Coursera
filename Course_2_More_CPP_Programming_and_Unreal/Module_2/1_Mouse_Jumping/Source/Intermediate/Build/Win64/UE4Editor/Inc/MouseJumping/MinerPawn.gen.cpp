// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MouseJumping/MinerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinerPawn() {}
// Cross Module References
	MOUSEJUMPING_API UClass* Z_Construct_UClass_AMinerPawn_NoRegister();
	MOUSEJUMPING_API UClass* Z_Construct_UClass_AMinerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MouseJumping();
// End Cross Module References
	void AMinerPawn::StaticRegisterNativesAMinerPawn()
	{
	}
	UClass* Z_Construct_UClass_AMinerPawn_NoRegister()
	{
		return AMinerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMinerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MouseJumping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinerPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A miner pawn\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MinerPawn.h" },
		{ "ModuleRelativePath", "MinerPawn.h" },
		{ "ToolTip", "A miner pawn" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinerPawn_Statics::ClassParams = {
		&AMinerPawn::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AMinerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinerPawn, 817926737);
	template<> MOUSEJUMPING_API UClass* StaticClass<AMinerPawn>()
	{
		return AMinerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinerPawn(Z_Construct_UClass_AMinerPawn, &AMinerPawn::StaticClass, TEXT("/Script/MouseJumping"), TEXT("AMinerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
