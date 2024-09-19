// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpawnAndDestroy/TeddyBearManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearManager() {}
// Cross Module References
	SPAWNANDDESTROY_API UClass* Z_Construct_UClass_ATeddyBearManager_NoRegister();
	SPAWNANDDESTROY_API UClass* Z_Construct_UClass_ATeddyBearManager();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpawnAndDestroy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPAWNANDDESTROY_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
// End Cross Module References
	void ATeddyBearManager::StaticRegisterNativesATeddyBearManager()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearManager_NoRegister()
	{
		return ATeddyBearManager::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGreenTeddyBear_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UGreenTeddyBear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpawnAndDestroy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  A teddy bear spawner and destroyer\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TeddyBearManager.h" },
		{ "ModuleRelativePath", "TeddyBearManager.h" },
		{ "ToolTip", "A teddy bear spawner and destroyer" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearManager_Statics::NewProp_UGreenTeddyBear_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "TeddyBearManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearManager_Statics::NewProp_UGreenTeddyBear = { "UGreenTeddyBear", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearManager, UGreenTeddyBear), Z_Construct_UClass_ATeddyBear_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearManager_Statics::NewProp_UGreenTeddyBear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearManager_Statics::NewProp_UGreenTeddyBear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearManager_Statics::NewProp_UGreenTeddyBear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearManager_Statics::ClassParams = {
		&ATeddyBearManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeddyBearManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearManager, 3206773024);
	template<> SPAWNANDDESTROY_API UClass* StaticClass<ATeddyBearManager>()
	{
		return ATeddyBearManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearManager(Z_Construct_UClass_ATeddyBearManager, &ATeddyBearManager::StaticClass, TEXT("/Script/SpawnAndDestroy"), TEXT("ATeddyBearManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
