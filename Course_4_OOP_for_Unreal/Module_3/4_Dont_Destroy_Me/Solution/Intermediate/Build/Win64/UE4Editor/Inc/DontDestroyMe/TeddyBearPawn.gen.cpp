// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontDestroyMe/TeddyBearPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearPawn() {}
// Cross Module References
	DONTDESTROYME_API UClass* Z_Construct_UClass_ATeddyBearPawn_NoRegister();
	DONTDESTROYME_API UClass* Z_Construct_UClass_ATeddyBearPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DontDestroyMe();
// End Cross Module References
	void ATeddyBearPawn::StaticRegisterNativesATeddyBearPawn()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearPawn_NoRegister()
	{
		return ATeddyBearPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DontDestroyMe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A teddy bear pawn\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TeddyBearPawn.h" },
		{ "ModuleRelativePath", "TeddyBearPawn.h" },
		{ "ToolTip", "A teddy bear pawn" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearPawn_Statics::ClassParams = {
		&ATeddyBearPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearPawn, 3876975988);
	template<> DONTDESTROYME_API UClass* StaticClass<ATeddyBearPawn>()
	{
		return ATeddyBearPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearPawn(Z_Construct_UClass_ATeddyBearPawn, &ATeddyBearPawn::StaticClass, TEXT("/Script/DontDestroyMe"), TEXT("ATeddyBearPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
