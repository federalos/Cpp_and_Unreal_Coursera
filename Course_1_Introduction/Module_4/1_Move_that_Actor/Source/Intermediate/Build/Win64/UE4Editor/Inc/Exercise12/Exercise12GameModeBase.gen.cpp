// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exercise12/Exercise12GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExercise12GameModeBase() {}
// Cross Module References
	EXERCISE12_API UClass* Z_Construct_UClass_AExercise12GameModeBase_NoRegister();
	EXERCISE12_API UClass* Z_Construct_UClass_AExercise12GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Exercise12();
// End Cross Module References
	void AExercise12GameModeBase::StaticRegisterNativesAExercise12GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AExercise12GameModeBase_NoRegister()
	{
		return AExercise12GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AExercise12GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExercise12GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Exercise12,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExercise12GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Exercise12GameModeBase.h" },
		{ "ModuleRelativePath", "Exercise12GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExercise12GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExercise12GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExercise12GameModeBase_Statics::ClassParams = {
		&AExercise12GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExercise12GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExercise12GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExercise12GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExercise12GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExercise12GameModeBase, 1590680276);
	template<> EXERCISE12_API UClass* StaticClass<AExercise12GameModeBase>()
	{
		return AExercise12GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExercise12GameModeBase(Z_Construct_UClass_AExercise12GameModeBase, &AExercise12GameModeBase::StaticClass, TEXT("/Script/Exercise12"), TEXT("AExercise12GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExercise12GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
