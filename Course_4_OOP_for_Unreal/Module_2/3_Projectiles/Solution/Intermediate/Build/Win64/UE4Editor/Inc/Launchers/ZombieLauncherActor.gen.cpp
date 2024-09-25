// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/ZombieLauncherActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieLauncherActor() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_AZombieLauncherActor_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_AZombieLauncherActor();
	LAUNCHERS_API UClass* Z_Construct_UClass_ALauncherActor();
	UPackage* Z_Construct_UPackage__Script_Launchers();
// End Cross Module References
	void AZombieLauncherActor::StaticRegisterNativesAZombieLauncherActor()
	{
	}
	UClass* Z_Construct_UClass_AZombieLauncherActor_NoRegister()
	{
		return AZombieLauncherActor::StaticClass();
	}
	struct Z_Construct_UClass_AZombieLauncherActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieLauncherActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALauncherActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieLauncherActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A zombie launcher\n */" },
		{ "IncludePath", "ZombieLauncherActor.h" },
		{ "ModuleRelativePath", "ZombieLauncherActor.h" },
		{ "ToolTip", "A zombie launcher" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieLauncherActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieLauncherActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieLauncherActor_Statics::ClassParams = {
		&AZombieLauncherActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieLauncherActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieLauncherActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieLauncherActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieLauncherActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieLauncherActor, 414541463);
	template<> LAUNCHERS_API UClass* StaticClass<AZombieLauncherActor>()
	{
		return AZombieLauncherActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieLauncherActor(Z_Construct_UClass_AZombieLauncherActor, &AZombieLauncherActor::StaticClass, TEXT("/Script/Launchers"), TEXT("AZombieLauncherActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieLauncherActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
