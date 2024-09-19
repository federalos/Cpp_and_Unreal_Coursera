// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MouseJumping/MinerPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinerPlayerController() {}
// Cross Module References
	MOUSEJUMPING_API UClass* Z_Construct_UClass_AMinerPlayerController_NoRegister();
	MOUSEJUMPING_API UClass* Z_Construct_UClass_AMinerPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MouseJumping();
// End Cross Module References
	void AMinerPlayerController::StaticRegisterNativesAMinerPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMinerPlayerController_NoRegister()
	{
		return AMinerPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMinerPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinerPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MouseJumping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinerPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A miner player controller\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MinerPlayerController.h" },
		{ "ModuleRelativePath", "MinerPlayerController.h" },
		{ "ToolTip", "A miner player controller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinerPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinerPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinerPlayerController_Statics::ClassParams = {
		&AMinerPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMinerPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinerPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinerPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinerPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinerPlayerController, 2079995881);
	template<> MOUSEJUMPING_API UClass* StaticClass<AMinerPlayerController>()
	{
		return AMinerPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinerPlayerController(Z_Construct_UClass_AMinerPlayerController, &AMinerPlayerController::StaticClass, TEXT("/Script/MouseJumping"), TEXT("AMinerPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinerPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
