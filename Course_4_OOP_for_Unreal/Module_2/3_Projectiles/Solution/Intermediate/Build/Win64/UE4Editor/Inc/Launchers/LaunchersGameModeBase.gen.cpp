// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Launchers/LaunchersGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchersGameModeBase() {}
// Cross Module References
	LAUNCHERS_API UClass* Z_Construct_UClass_ALaunchersGameModeBase_NoRegister();
	LAUNCHERS_API UClass* Z_Construct_UClass_ALaunchersGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Launchers();
// End Cross Module References
	void ALaunchersGameModeBase::StaticRegisterNativesALaunchersGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALaunchersGameModeBase_NoRegister()
	{
		return ALaunchersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALaunchersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaunchersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Launchers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LaunchersGameModeBase.h" },
		{ "ModuleRelativePath", "LaunchersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaunchersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaunchersGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaunchersGameModeBase_Statics::ClassParams = {
		&ALaunchersGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALaunchersGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaunchersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaunchersGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaunchersGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaunchersGameModeBase, 2907917522);
	template<> LAUNCHERS_API UClass* StaticClass<ALaunchersGameModeBase>()
	{
		return ALaunchersGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaunchersGameModeBase(Z_Construct_UClass_ALaunchersGameModeBase, &ALaunchersGameModeBase::StaticClass, TEXT("/Script/Launchers"), TEXT("ALaunchersGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaunchersGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
