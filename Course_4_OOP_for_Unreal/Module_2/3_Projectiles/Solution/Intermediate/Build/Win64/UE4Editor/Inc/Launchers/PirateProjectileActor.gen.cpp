// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/PirateProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePirateProjectileActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_APirateProjectileActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_APirateProjectileActor();
	LAUNCHERS_API UClass* Z_Construct_UClass_AProjectileActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
// End Cross Module References
	void APirateProjectileActor::StaticRegisterNativesAPirateProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_APirateProjectileActor_NoRegister()
	{
		return APirateProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_APirateProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APirateProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APirateProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A pirate projectile\n */" },
		{ "IncludePath", "PirateProjectileActor.h" },
		{ "ModuleRelativePath", "PirateProjectileActor.h" },
		{ "ToolTip", "A pirate projectile" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APirateProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APirateProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APirateProjectileActor_Statics::ClassParams = {
		&APirateProjectileActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APirateProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APirateProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APirateProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APirateProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APirateProjectileActor, 3095952159);
	template<> LAUNCHERS_API UClass* StaticClass<APirateProjectileActor>()
	{
		return APirateProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APirateProjectileActor(Z_Construct_UClass_APirateProjectileActor, &APirateProjectileActor::StaticClass, TEXT("/Script/Launchers"), TEXT("APirateProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APirateProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
