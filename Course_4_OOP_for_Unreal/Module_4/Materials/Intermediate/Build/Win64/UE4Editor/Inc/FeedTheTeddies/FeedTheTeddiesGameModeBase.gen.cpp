// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/FeedTheTeddiesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedTheTeddiesGameModeBase() {}
// Cross Module References
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFeedTheTeddiesGameModeBase::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void AFeedTheTeddiesGameModeBase::StaticRegisterNativesAFeedTheTeddiesGameModeBase()
	{
		UClass* Class = AFeedTheTeddiesGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &AFeedTheTeddiesGameModeBase::execEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics
	{
		struct FeedTheTeddiesGameModeBase_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FeedTheTeddiesGameModeBase_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when actor is being removed from level\n\x09 * @param EndPlayReason why the actor is being removed\n\x09*/" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
		{ "ToolTip", "Called when actor is being removed from level\n@param EndPlayReason why the actor is being removed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFeedTheTeddiesGameModeBase, nullptr, "EndPlay", nullptr, nullptr, sizeof(FeedTheTeddiesGameModeBase_eventEndPlay_Parms), Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase_NoRegister()
	{
		return AFeedTheTeddiesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HudWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SecondsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay, "EndPlay" }, // 3031090045
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom game mode\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FeedTheTeddiesGameModeBase.h" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Custom game mode" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass = { "HudWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, HudWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "Game Over" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, GameOverWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, Score), METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft_MetaData[] = {
		{ "Category", "Seconds Left" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft = { "SecondsLeft", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, SecondsLeft), METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFeedTheTeddiesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::ClassParams = {
		&AFeedTheTeddiesGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFeedTheTeddiesGameModeBase, 1437019599);
	template<> FEEDTHETEDDIES_API UClass* StaticClass<AFeedTheTeddiesGameModeBase>()
	{
		return AFeedTheTeddiesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFeedTheTeddiesGameModeBase(Z_Construct_UClass_AFeedTheTeddiesGameModeBase, &AFeedTheTeddiesGameModeBase::StaticClass, TEXT("/Script/FeedTheTeddies"), TEXT("AFeedTheTeddiesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFeedTheTeddiesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
