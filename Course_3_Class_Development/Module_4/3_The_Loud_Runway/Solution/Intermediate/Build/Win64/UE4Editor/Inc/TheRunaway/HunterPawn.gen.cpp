// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheRunaway/HunterPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHunterPawn() {}
// Cross Module References
	THERUNAWAY_API UClass* Z_Construct_UClass_AHunterPawn_NoRegister();
	THERUNAWAY_API UClass* Z_Construct_UClass_AHunterPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TheRunaway();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void AHunterPawn::StaticRegisterNativesAHunterPawn()
	{
	}
	UClass* Z_Construct_UClass_AHunterPawn_NoRegister()
	{
		return AHunterPawn::StaticClass();
	}
	struct Z_Construct_UClass_AHunterPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHunterPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TheRunaway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A hunter pawn\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HunterPawn.h" },
		{ "ModuleRelativePath", "HunterPawn.h" },
		{ "ToolTip", "A hunter pawn" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterPawn_Statics::NewProp_AudioCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "HunterPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterPawn_Statics::NewProp_AudioCue = { "AudioCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterPawn, AudioCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterPawn_Statics::NewProp_AudioCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterPawn_Statics::NewProp_AudioCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHunterPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterPawn_Statics::NewProp_AudioCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHunterPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHunterPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHunterPawn_Statics::ClassParams = {
		&AHunterPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHunterPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHunterPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHunterPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHunterPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHunterPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHunterPawn, 1369321245);
	template<> THERUNAWAY_API UClass* StaticClass<AHunterPawn>()
	{
		return AHunterPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHunterPawn(Z_Construct_UClass_AHunterPawn, &AHunterPawn::StaticClass, TEXT("/Script/TheRunaway"), TEXT("AHunterPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHunterPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
