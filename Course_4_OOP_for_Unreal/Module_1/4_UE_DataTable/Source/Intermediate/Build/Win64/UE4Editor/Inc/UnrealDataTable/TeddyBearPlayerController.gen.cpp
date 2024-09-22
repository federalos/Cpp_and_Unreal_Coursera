// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDataTable/TeddyBearPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearPlayerController() {}
// Cross Module References
	UNREALDATATABLE_API UClass* Z_Construct_UClass_ATeddyBearPlayerController_NoRegister();
	UNREALDATATABLE_API UClass* Z_Construct_UClass_ATeddyBearPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UnrealDataTable();
// End Cross Module References
	void ATeddyBearPlayerController::StaticRegisterNativesATeddyBearPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearPlayerController_NoRegister()
	{
		return ATeddyBearPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A teddy bear player controller\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TeddyBearPlayerController.h" },
		{ "ModuleRelativePath", "TeddyBearPlayerController.h" },
		{ "ToolTip", "A teddy bear player controller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearPlayerController_Statics::ClassParams = {
		&ATeddyBearPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearPlayerController, 1057743959);
	template<> UNREALDATATABLE_API UClass* StaticClass<ATeddyBearPlayerController>()
	{
		return ATeddyBearPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearPlayerController(Z_Construct_UClass_ATeddyBearPlayerController, &ATeddyBearPlayerController::StaticClass, TEXT("/Script/UnrealDataTable"), TEXT("ATeddyBearPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
