// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDataTable/UnrealDataTableGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealDataTableGameModeBase() {}
// Cross Module References
	UNREALDATATABLE_API UClass* Z_Construct_UClass_AUnrealDataTableGameModeBase_NoRegister();
	UNREALDATATABLE_API UClass* Z_Construct_UClass_AUnrealDataTableGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealDataTable();
// End Cross Module References
	void AUnrealDataTableGameModeBase::StaticRegisterNativesAUnrealDataTableGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnrealDataTableGameModeBase_NoRegister()
	{
		return AUnrealDataTableGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom game mode\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealDataTableGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealDataTableGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Custom game mode" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealDataTableGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics::ClassParams = {
		&AUnrealDataTableGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealDataTableGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealDataTableGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealDataTableGameModeBase, 65486947);
	template<> UNREALDATATABLE_API UClass* StaticClass<AUnrealDataTableGameModeBase>()
	{
		return AUnrealDataTableGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealDataTableGameModeBase(Z_Construct_UClass_AUnrealDataTableGameModeBase, &AUnrealDataTableGameModeBase::StaticClass, TEXT("/Script/UnrealDataTable"), TEXT("AUnrealDataTableGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealDataTableGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
