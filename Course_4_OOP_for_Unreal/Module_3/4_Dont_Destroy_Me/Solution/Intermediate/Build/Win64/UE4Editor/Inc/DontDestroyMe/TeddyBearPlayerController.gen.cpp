// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontDestroyMe/TeddyBearPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearPlayerController() {}
// Cross Module References
	DONTDESTROYME_API UClass* Z_Construct_UClass_ATeddyBearPlayerController_NoRegister();
	DONTDESTROYME_API UClass* Z_Construct_UClass_ATeddyBearPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DontDestroyMe();
// End Cross Module References
	DEFINE_FUNCTION(ATeddyBearPlayerController::execDestroyTeddyBear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTeddyBear();
		P_NATIVE_END;
	}
	void ATeddyBearPlayerController::StaticRegisterNativesATeddyBearPlayerController()
	{
		UClass* Class = ATeddyBearPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyTeddyBear", &ATeddyBearPlayerController::execDestroyTeddyBear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Destroys the teddy bear\n\x09*/" },
		{ "ModuleRelativePath", "TeddyBearPlayerController.h" },
		{ "ToolTip", "Destroys the teddy bear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeddyBearPlayerController, nullptr, "DestroyTeddyBear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATeddyBearPlayerController_NoRegister()
	{
		return ATeddyBearPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DontDestroyMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeddyBearPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeddyBearPlayerController_DestroyTeddyBear, "DestroyTeddyBear" }, // 3120944634
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATeddyBearPlayerController, 4210113250);
	template<> DONTDESTROYME_API UClass* StaticClass<ATeddyBearPlayerController>()
	{
		return ATeddyBearPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearPlayerController(Z_Construct_UClass_ATeddyBearPlayerController, &ATeddyBearPlayerController::StaticClass, TEXT("/Script/DontDestroyMe"), TEXT("ATeddyBearPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
