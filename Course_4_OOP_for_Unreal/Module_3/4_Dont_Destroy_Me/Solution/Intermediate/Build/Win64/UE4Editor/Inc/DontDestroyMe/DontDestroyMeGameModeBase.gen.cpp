// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontDestroyMe/DontDestroyMeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDontDestroyMeGameModeBase() {}
// Cross Module References
	DONTDESTROYME_API UClass* Z_Construct_UClass_ADontDestroyMeGameModeBase_NoRegister();
	DONTDESTROYME_API UClass* Z_Construct_UClass_ADontDestroyMeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DontDestroyMe();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ADontDestroyMeGameModeBase::StaticRegisterNativesADontDestroyMeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADontDestroyMeGameModeBase_NoRegister()
	{
		return ADontDestroyMeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DestroyWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DontDestroyMe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom game mode\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DontDestroyMeGameModeBase.h" },
		{ "ModuleRelativePath", "DontDestroyMeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Custom game mode" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::NewProp_DestroyWidgetClass_MetaData[] = {
		{ "Category", "Destroy Widget" },
		{ "Comment", "/** The widget class we will use as our menu when the game starts. */" },
		{ "ModuleRelativePath", "DontDestroyMeGameModeBase.h" },
		{ "ToolTip", "The widget class we will use as our menu when the game starts." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::NewProp_DestroyWidgetClass = { "DestroyWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADontDestroyMeGameModeBase, DestroyWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::NewProp_DestroyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::NewProp_DestroyWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::NewProp_DestroyWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADontDestroyMeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::ClassParams = {
		&ADontDestroyMeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADontDestroyMeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADontDestroyMeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADontDestroyMeGameModeBase, 2244229441);
	template<> DONTDESTROYME_API UClass* StaticClass<ADontDestroyMeGameModeBase>()
	{
		return ADontDestroyMeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADontDestroyMeGameModeBase(Z_Construct_UClass_ADontDestroyMeGameModeBase, &ADontDestroyMeGameModeBase::StaticClass, TEXT("/Script/DontDestroyMe"), TEXT("ADontDestroyMeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADontDestroyMeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
