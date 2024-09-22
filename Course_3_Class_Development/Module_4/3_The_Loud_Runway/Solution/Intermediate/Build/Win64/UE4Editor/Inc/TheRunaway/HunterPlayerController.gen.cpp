// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheRunaway/HunterPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHunterPlayerController() {}
// Cross Module References
	THERUNAWAY_API UClass* Z_Construct_UClass_AHunterPlayerController_NoRegister();
	THERUNAWAY_API UClass* Z_Construct_UClass_AHunterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TheRunaway();
// End Cross Module References
	void AHunterPlayerController::StaticRegisterNativesAHunterPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AHunterPlayerController_NoRegister()
	{
		return AHunterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AHunterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHunterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TheRunaway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A hunter player controller\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HunterPlayerController.h" },
		{ "ModuleRelativePath", "HunterPlayerController.h" },
		{ "ToolTip", "A hunter player controller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHunterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHunterPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHunterPlayerController_Statics::ClassParams = {
		&AHunterPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHunterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHunterPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHunterPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHunterPlayerController, 2311965885);
	template<> THERUNAWAY_API UClass* StaticClass<AHunterPlayerController>()
	{
		return AHunterPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHunterPlayerController(Z_Construct_UClass_AHunterPlayerController, &AHunterPlayerController::StaticClass, TEXT("/Script/TheRunaway"), TEXT("AHunterPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHunterPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
