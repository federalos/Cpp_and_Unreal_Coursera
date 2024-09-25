// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/RedBallActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedBallActor() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_ARedBallActor_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_ARedBallActor();
	MOVEIT_API UClass* Z_Construct_UClass_ABallActor();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
// End Cross Module References
	void ARedBallActor::StaticRegisterNativesARedBallActor()
	{
	}
	UClass* Z_Construct_UClass_ARedBallActor_NoRegister()
	{
		return ARedBallActor::StaticClass();
	}
	struct Z_Construct_UClass_ARedBallActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARedBallActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABallActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARedBallActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A red ball\n */" },
		{ "IncludePath", "RedBallActor.h" },
		{ "ModuleRelativePath", "RedBallActor.h" },
		{ "ToolTip", "A red ball" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARedBallActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARedBallActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARedBallActor_Statics::ClassParams = {
		&ARedBallActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARedBallActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARedBallActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARedBallActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARedBallActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedBallActor, 4053128947);
	template<> MOVEIT_API UClass* StaticClass<ARedBallActor>()
	{
		return ARedBallActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedBallActor(Z_Construct_UClass_ARedBallActor, &ARedBallActor::StaticClass, TEXT("/Script/MoveIt"), TEXT("ARedBallActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedBallActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
