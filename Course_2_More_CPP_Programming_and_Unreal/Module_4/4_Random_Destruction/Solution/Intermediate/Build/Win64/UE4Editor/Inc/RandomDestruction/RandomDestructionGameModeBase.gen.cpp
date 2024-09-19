// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomDestruction/RandomDestructionGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomDestructionGameModeBase() {}
// Cross Module References
	RANDOMDESTRUCTION_API UClass* Z_Construct_UClass_ARandomDestructionGameModeBase_NoRegister();
	RANDOMDESTRUCTION_API UClass* Z_Construct_UClass_ARandomDestructionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RandomDestruction();
// End Cross Module References
	void ARandomDestructionGameModeBase::StaticRegisterNativesARandomDestructionGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARandomDestructionGameModeBase_NoRegister()
	{
		return ARandomDestructionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARandomDestructionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomDestructionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomDestruction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomDestructionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RandomDestructionGameModeBase.h" },
		{ "ModuleRelativePath", "RandomDestructionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomDestructionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomDestructionGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARandomDestructionGameModeBase_Statics::ClassParams = {
		&ARandomDestructionGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARandomDestructionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomDestructionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomDestructionGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomDestructionGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomDestructionGameModeBase, 256248084);
	template<> RANDOMDESTRUCTION_API UClass* StaticClass<ARandomDestructionGameModeBase>()
	{
		return ARandomDestructionGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomDestructionGameModeBase(Z_Construct_UClass_ARandomDestructionGameModeBase, &ARandomDestructionGameModeBase::StaticClass, TEXT("/Script/RandomDestruction"), TEXT("ARandomDestructionGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomDestructionGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
