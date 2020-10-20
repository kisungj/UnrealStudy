// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSPROJECT_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define FPSPROJECT_MyPlayer_generated_h

#define FPSProject_Source_FPSProject_MyPlayer_h_12_RPC_WRAPPERS
#define FPSProject_Source_FPSProject_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSProject_Source_FPSProject_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FPSProject_Source_FPSProject_MyPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FPSProject_Source_FPSProject_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public:


#define FPSProject_Source_FPSProject_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer)


#define FPSProject_Source_FPSProject_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define FPSProject_Source_FPSProject_MyPlayer_h_9_PROLOG
#define FPSProject_Source_FPSProject_MyPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_MyPlayer_h_12_RPC_WRAPPERS \
	FPSProject_Source_FPSProject_MyPlayer_h_12_INCLASS \
	FPSProject_Source_FPSProject_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProject_Source_FPSProject_MyPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProject_Source_FPSProject_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
