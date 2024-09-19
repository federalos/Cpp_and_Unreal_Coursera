// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gravity/Apple.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApple() {}
// Cross Module References
	GRAVITY_API UClass* Z_Construct_UClass_AApple_NoRegister();
	GRAVITY_API UClass* Z_Construct_UClass_AApple();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Gravity();
// End Cross Module References
	void AApple::StaticRegisterNativesAApple()
	{
	}
	UClass* Z_Construct_UClass_AApple_NoRegister()
	{
		return AApple::StaticClass();
	}
	struct Z_Construct_UClass_AApple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AApple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Gravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AApple_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An apple\n*/" },
		{ "IncludePath", "Apple.h" },
		{ "ModuleRelativePath", "Apple.h" },
		{ "ToolTip", "An apple" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AApple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AApple>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AApple_Statics::ClassParams = {
		&AApple::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AApple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AApple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AApple()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AApple_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AApple, 3760348873);
	template<> GRAVITY_API UClass* StaticClass<AApple>()
	{
		return AApple::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AApple(Z_Construct_UClass_AApple, &AApple::StaticClass, TEXT("/Script/Gravity"), TEXT("AApple"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AApple);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
