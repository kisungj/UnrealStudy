// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSPROJECT_FPSProjectGameMode_generated_h
#error "FPSProjectGameMode.generated.h already included, missing '#pragma once' in FPSProjectGameMode.h"
#endif
#define FPSPROJECT_FPSProjectGameMode_generated_h

#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_RPC_WRAPPERS
#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectGameMode(); \
	friend struct Z_Construct_UClass_AFPSProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FPSProject"), FPSPROJECT_API) \
	DECLARE_SERIALIZER(AFPSProjectGameMode)


#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSProjectGameMode(); \
	friend struct Z_Construct_UClass_AFPSProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FPSProject"), FPSPROJECT_API) \
	DECLARE_SERIALIZER(AFPSProjectGameMode)


#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSPROJECT_API AFPSProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSPROJECT_API, AFPSProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSPROJECT_API AFPSProjectGameMode(AFPSProjectGameMode&&); \
	FPSPROJECT_API AFPSProjectGameMode(const AFPSProjectGameMode&); \
public:


#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSPROJECT_API AFPSProjectGameMode(AFPSProjectGameMode&&); \
	FPSPROJECT_API AFPSProjectGameMode(const AFPSProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSPROJECT_API, AFPSProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectGameMode)


#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_9_PROLOG
#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_RPC_WRAPPERS \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_INCLASS \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FPSProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AFPSProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProject_Source_FPSProject_FPSProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
