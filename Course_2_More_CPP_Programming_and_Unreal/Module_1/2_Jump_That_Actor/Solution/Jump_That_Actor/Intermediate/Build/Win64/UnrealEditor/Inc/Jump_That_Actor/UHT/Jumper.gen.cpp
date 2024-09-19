// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Jump_That_Actor/Jumper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumper() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
JUMP_THAT_ACTOR_API UClass* Z_Construct_UClass_AJumper();
JUMP_THAT_ACTOR_API UClass* Z_Construct_UClass_AJumper_NoRegister();
UPackage* Z_Construct_UPackage__Script_Jump_That_Actor();
// End Cross Module References

// Begin Class AJumper Function Jump
struct Z_Construct_UFunction_AJumper_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Jumps the Actor\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Jumper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jumps the Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJumper_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJumper, nullptr, "Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJumper_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJumper_Jump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AJumper_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJumper_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJumper::execJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Jump();
	P_NATIVE_END;
}
// End Class AJumper Function Jump

// Begin Class AJumper
void AJumper::StaticRegisterNativesAJumper()
{
	UClass* Class = AJumper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Jump", &AJumper::execJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJumper);
UClass* Z_Construct_UClass_AJumper_NoRegister()
{
	return AJumper::StaticClass();
}
struct Z_Construct_UClass_AJumper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "Jumper.h" },
		{ "ModuleRelativePath", "Jumper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AJumper_Jump, "Jump" }, // 1036784112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AJumper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Jump_That_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumper_Statics::ClassParams = {
	&AJumper::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumper_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJumper()
{
	if (!Z_Registration_Info_UClass_AJumper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumper.OuterSingleton, Z_Construct_UClass_AJumper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJumper.OuterSingleton;
}
template<> JUMP_THAT_ACTOR_API UClass* StaticClass<AJumper>()
{
	return AJumper::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJumper);
AJumper::~AJumper() {}
// End Class AJumper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_2_Jump_That_Actor_Solution_Jump_That_Actor_Source_Jump_That_Actor_Jumper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJumper, AJumper::StaticClass, TEXT("AJumper"), &Z_Registration_Info_UClass_AJumper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumper), 959182323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_2_Jump_That_Actor_Solution_Jump_That_Actor_Source_Jump_That_Actor_Jumper_h_3964414021(TEXT("/Script/Jump_That_Actor"),
	Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_2_Jump_That_Actor_Solution_Jump_That_Actor_Source_Jump_That_Actor_Jumper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_2_More_CPP_Programming_and_Unreal_Module_1_2_Jump_That_Actor_Solution_Jump_That_Actor_Source_Jump_That_Actor_Jumper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
