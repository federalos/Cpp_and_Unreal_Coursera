// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/BurgerPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBurgerPlayerController() {}
// Cross Module References
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ABurgerPlayerController_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ABurgerPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ABurgerPlayerController::StaticRegisterNativesABurgerPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ABurgerPlayerController_NoRegister()
	{
		return ABurgerPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABurgerPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABurgerPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A burger player controller\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BurgerPlayerController.h" },
		{ "ModuleRelativePath", "BurgerPlayerController.h" },
		{ "ToolTip", "A burger player controller" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "BurgerPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABurgerPlayerController_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABurgerPlayerController, PauseMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABurgerPlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABurgerPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABurgerPlayerController_Statics::NewProp_PauseMenuWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABurgerPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABurgerPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABurgerPlayerController_Statics::ClassParams = {
		&ABurgerPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABurgerPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABurgerPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABurgerPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABurgerPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABurgerPlayerController, 1123451767);
	template<> FEEDTHETEDDIES_API UClass* StaticClass<ABurgerPlayerController>()
	{
		return ABurgerPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABurgerPlayerController(Z_Construct_UClass_ABurgerPlayerController, &ABurgerPlayerController::StaticClass, TEXT("/Script/FeedTheTeddies"), TEXT("ABurgerPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABurgerPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
