// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOIDS_BoidPlayerController_generated_h
#error "BoidPlayerController.generated.h already included, missing '#pragma once' in BoidPlayerController.h"
#endif
#define BOIDS_BoidPlayerController_generated_h

#define Boids_Source_Boids_BoidPlayerController_h_15_RPC_WRAPPERS
#define Boids_Source_Boids_BoidPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Boids_Source_Boids_BoidPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoidPlayerController(); \
	friend BOIDS_API class UClass* Z_Construct_UClass_ABoidPlayerController(); \
public: \
	DECLARE_CLASS(ABoidPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Boids"), NO_API) \
	DECLARE_SERIALIZER(ABoidPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boids_Source_Boids_BoidPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoidPlayerController(); \
	friend BOIDS_API class UClass* Z_Construct_UClass_ABoidPlayerController(); \
public: \
	DECLARE_CLASS(ABoidPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Boids"), NO_API) \
	DECLARE_SERIALIZER(ABoidPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boids_Source_Boids_BoidPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoidPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoidPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidPlayerController(ABoidPlayerController&&); \
	NO_API ABoidPlayerController(const ABoidPlayerController&); \
public:


#define Boids_Source_Boids_BoidPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoidPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidPlayerController(ABoidPlayerController&&); \
	NO_API ABoidPlayerController(const ABoidPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoidPlayerController)


#define Boids_Source_Boids_BoidPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Boids_Source_Boids_BoidPlayerController_h_12_PROLOG
#define Boids_Source_Boids_BoidPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boids_Source_Boids_BoidPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Boids_Source_Boids_BoidPlayerController_h_15_RPC_WRAPPERS \
	Boids_Source_Boids_BoidPlayerController_h_15_INCLASS \
	Boids_Source_Boids_BoidPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boids_Source_Boids_BoidPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boids_Source_Boids_BoidPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Boids_Source_Boids_BoidPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Boids_Source_Boids_BoidPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Boids_Source_Boids_BoidPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boids_Source_Boids_BoidPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
