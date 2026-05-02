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
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
TIMEMANIPULATION_API UClass* Z_Construct_UClass_APlayerCharacter();
TIMEMANIPULATION_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
TIMEMANIPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FTimeSnapshot();
UPackage* Z_Construct_UPackage__Script_TimeManipulation();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTimeSnapshot *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTimeSnapshot;
class UScriptStruct* FTimeSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTimeSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTimeSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeSnapshot, (UObject*)Z_Construct_UPackage__Script_TimeManipulation(), TEXT("TimeSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FTimeSnapshot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTimeSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TimeManipulation,
	nullptr,
	&NewStructOps,
	"TimeSnapshot",
	nullptr,
	0,
	sizeof(FTimeSnapshot),
	alignof(FTimeSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimeSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimeSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FTimeSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTimeSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FTimeSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTimeSnapshot.InnerSingleton;
}
// ********** End ScriptStruct FTimeSnapshot *******************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
<<<<<<< HEAD
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordInterval_MetaData[] = {
		{ "Category", "Rewind" },
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecordTime_MetaData[] = {
		{ "Category", "Rewind" },
=======
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipDistanceMultiplier_MetaData[] = {
		{ "Category", "TimeSkip" },
>>>>>>> TimeskipTeleport
		{ "ModuleRelativePath", "Public/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
<<<<<<< HEAD
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeBuffer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecordInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecordTime;
=======
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkipDistanceMultiplier;
>>>>>>> TimeskipTeleport
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
<<<<<<< HEAD
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TimeBuffer_Inner = { "TimeBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimeSnapshot, METADATA_PARAMS(0, nullptr) }; // 797901284
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TimeBuffer = { "TimeBuffer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, TimeBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBuffer_MetaData), NewProp_TimeBuffer_MetaData) }; // 797901284
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RecordInterval = { "RecordInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, RecordInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordInterval_MetaData), NewProp_RecordInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MaxRecordTime = { "MaxRecordTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MaxRecordTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRecordTime_MetaData), NewProp_MaxRecordTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TimeBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TimeBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RecordInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MaxRecordTime,
=======
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SkipDistanceMultiplier = { "SkipDistanceMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SkipDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipDistanceMultiplier_MetaData), NewProp_SkipDistanceMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SkipDistanceMultiplier,
>>>>>>> TimeskipTeleport
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTimeSnapshot::StaticStruct, Z_Construct_UScriptStruct_FTimeSnapshot_Statics::NewStructOps, TEXT("TimeSnapshot"), &Z_Registration_Info_UScriptStruct_FTimeSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeSnapshot), 797901284U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
<<<<<<< HEAD
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 2114123147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_3243947057(TEXT("/Script/TimeManipulation"),
=======
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 246162300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_2253440189(TEXT("/Script/TimeManipulation"),
>>>>>>> TimeskipTeleport
	Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h__Script_TimeManipulation_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
