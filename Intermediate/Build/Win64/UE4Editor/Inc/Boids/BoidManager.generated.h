// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOIDS_BoidManager_generated_h
#error "BoidManager.generated.h already included, missing '#pragma once' in BoidManager.h"
#endif
#define BOIDS_BoidManager_generated_h

#define Boids_Source_Boids_BoidManager_h_14_RPC_WRAPPERS
#define Boids_Source_Boids_BoidManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Boids_Source_Boids_BoidManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoidManager(); \
	friend BOIDS_API class UClass* Z_Construct_UClass_ABoidManager(); \
public: \
	DECLARE_CLASS(ABoidManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boids"), NO_API) \
	DECLARE_SERIALIZER(ABoidManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boids_Source_Boids_BoidManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABoidManager(); \
	friend BOIDS_API class UClass* Z_Construct_UClass_ABoidManager(); \
public: \
	DECLARE_CLASS(ABoidManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boids"), NO_API) \
	DECLARE_SERIALIZER(ABoidManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boids_Source_Boids_BoidManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoidManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoidManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidManager(ABoidManager&&); \
	NO_API ABoidManager(const ABoidManager&); \
public:


#define Boids_Source_Boids_BoidManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidManager(ABoidManager&&); \
	NO_API ABoidManager(const ABoidManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoidManager)


#define Boids_Source_Boids_BoidManager_h_14_PRIVATE_PROPERTY_OFFSET
#define Boids_Source_Boids_BoidManager_h_11_PROLOG
#define Boids_Source_Boids_BoidManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boids_Source_Boids_BoidManager_h_14_PRIVATE_PROPERTY_OFFSET \
	Boids_Source_Boids_BoidManager_h_14_RPC_WRAPPERS \
	Boids_Source_Boids_BoidManager_h_14_INCLASS \
	Boids_Source_Boids_BoidManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boids_Source_Boids_BoidManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boids_Source_Boids_BoidManager_h_14_PRIVATE_PROPERTY_OFFSET \
	Boids_Source_Boids_BoidManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Boids_Source_Boids_BoidManager_h_14_INCLASS_NO_PURE_DECLS \
	Boids_Source_Boids_BoidManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boids_Source_Boids_BoidManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
