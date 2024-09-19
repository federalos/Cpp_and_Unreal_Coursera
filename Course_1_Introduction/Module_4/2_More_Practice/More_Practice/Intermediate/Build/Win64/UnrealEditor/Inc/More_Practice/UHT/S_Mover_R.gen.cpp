// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "More_Practice/Private/S_Mover_R.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Mover_R() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MORE_PRACTICE_API UClass* Z_Construct_UClass_AS_Mover_R();
MORE_PRACTICE_API UClass* Z_Construct_UClass_AS_Mover_R_NoRegister();
UPackage* Z_Construct_UPackage__Script_More_Practice();
// End Cross Module References

// Begin Class AS_Mover_R
void AS_Mover_R::StaticRegisterNativesAS_Mover_R()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AS_Mover_R);
UClass* Z_Construct_UClass_AS_Mover_R_NoRegister()
{
	return AS_Mover_R::StaticClass();
}
struct Z_Construct_UClass_AS_Mover_R_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "S_Mover_R.h" },
		{ "ModuleRelativePath", "Private/S_Mover_R.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_Mover_R>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AS_Mover_R_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_More_Practice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AS_Mover_R_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AS_Mover_R_Statics::ClassParams = {
	&AS_Mover_R::StaticClass,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AS_Mover_R_Statics::Class_MetaDataParams), Z_Construct_UClass_AS_Mover_R_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AS_Mover_R()
{
	if (!Z_Registration_Info_UClass_AS_Mover_R.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AS_Mover_R.OuterSingleton, Z_Construct_UClass_AS_Mover_R_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AS_Mover_R.OuterSingleton;
}
template<> MORE_PRACTICE_API UClass* StaticClass<AS_Mover_R>()
{
	return AS_Mover_R::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AS_Mover_R);
AS_Mover_R::~AS_Mover_R() {}
// End Class AS_Mover_R

// Begin Registration
struct Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_4_2_More_Practice_More_Practice_Source_More_Practice_Private_S_Mover_R_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AS_Mover_R, AS_Mover_R::StaticClass, TEXT("AS_Mover_R"), &Z_Registration_Info_UClass_AS_Mover_R, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AS_Mover_R), 973972943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_4_2_More_Practice_More_Practice_Source_More_Practice_Private_S_Mover_R_h_4157459112(TEXT("/Script/More_Practice"),
	Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_4_2_More_Practice_More_Practice_Source_More_Practice_Private_S_Mover_R_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Notes_Allmind_Cpp_and_Unreal_Coursera_Course_1_Introduction_Module_4_2_More_Practice_More_Practice_Source_More_Practice_Private_S_Mover_R_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
