// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"

#ifdef TIMEMANIPULATION_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define TIMEMANIPULATION_PlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerCharacter *********************************************************
TIMEMANIPULATION_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();

#define FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANIPULATION_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimeManipulation"), Z_Construct_UClass_APlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&) = delete; \
	APlayerCharacter(const APlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h_9_PROLOG
#define FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerCharacter;

// ********** End Class APlayerCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_5_7_mgp_szymonthewywon_TimeManipulation_Source_TimeManipulation_Public_PlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
