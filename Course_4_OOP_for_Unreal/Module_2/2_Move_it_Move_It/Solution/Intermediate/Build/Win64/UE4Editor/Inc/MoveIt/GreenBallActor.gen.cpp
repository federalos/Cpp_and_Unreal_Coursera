// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/GreenBallActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreenBallActor() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_AGreenBallActor_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AGreenBallActor();
	MOVEIT_API UClass* Z_Construct_UClass_ABallActor();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
// End Cross Module References
	void AGreenBallActor::StaticRegisterNativesAGreenBallActor()
	{
	}
	UClass* Z_Construct_UClass_AGreenBallActor_NoRegister()
	{
		return AGreenBallActor::StaticClass();
	}
	struct Z_Construct_UClass_AGreenBallActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGreenBallActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABallActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreenBallActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A green ball\n */" },
		{ "IncludePath", "GreenBallActor.h" },
		{ "ModuleRelativePath", "GreenBallActor.h" },
		{ "ToolTip", "A green ball" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreenBallActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreenBallActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGreenBallActor_Statics::ClassParams = {
		&AGreenBallActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGreenBallActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGreenBallActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGreenBallActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGreenBallActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGreenBallActor, 1847608104);
	template<> MOVEIT_API UClass* StaticClass<AGreenBallActor>()
	{
		return AGreenBallActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGreenBallActor(Z_Construct_UClass_AGreenBallActor, &AGreenBallActor::StaticClass, TEXT("/Script/MoveIt"), TEXT("AGreenBallActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGreenBallActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
