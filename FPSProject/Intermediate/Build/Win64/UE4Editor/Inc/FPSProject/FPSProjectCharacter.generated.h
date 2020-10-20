// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSPROJECT_FPSProjectCharacter_generated_h
#error "FPSProjectCharacter.generated.h already included, missing '#pragma once' in FPSProjectCharacter.h"
#endif
#define FPSPROJECT_FPSProjectCharacter_generated_h

#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_RPC_WRAPPERS
#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectCharacter(); \
	friend struct Z_Construct_UClass_AFPSProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectCharacter)


#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSProjectCharacter(); \
	friend struct Z_Construct_UClass_AFPSProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectCharacter)


#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectCharacter(AFPSProjectCharacter&&); \
	NO_API AFPSProjectCharacter(const AFPSProjectCharacter&); \
public:


#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectCharacter(AFPSProjectCharacter&&); \
	NO_API AFPSProjectCharacter(const AFPSProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectCharacter)


#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFPSProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFPSProjectCharacter, FollowCamera); }


#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_9_PROLOG
#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_RPC_WRAPPERS \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_INCLASS \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FPSProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AFPSProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProject_Source_FPSProject_FPSProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
