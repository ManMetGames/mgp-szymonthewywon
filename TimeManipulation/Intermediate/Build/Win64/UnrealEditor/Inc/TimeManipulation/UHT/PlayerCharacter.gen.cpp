// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TIMEMANIPULATION_API UClass* Z_Construct_UClass_APlayerCharacter();
TIMEMANIPULATION_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimeManipulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerCharacter *********************************************************
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerCharacter;
UClass* APlayerCharacter::GetPrivateStaticClass()
{
	using TClass = APlayerCharacter;
	if (!Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerCharacter"),
			Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton,
			StaticRegisterNativesAPlayerCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TimeManipulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// ********** End Class APlayerCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 1543913809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_2220225599(TEXT("/Script/TimeManipulation"),
	Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
