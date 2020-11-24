// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOIDS_BoidPlayerPawn_generated_h
#error "BoidPlayerPawn.generated.h already included, missing '#pragma once' in BoidPlayerPawn.h"
#endif
#define BOIDS_BoidPlayerPawn_generated_h

#define Boids_Source_Boids_BoidPlayerPawn_h_12_RPC_WRAPPERS \
	virtual bool TestOnServer_Validate(); \
	virtual void TestOnServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_TestVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_TestVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestOnServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->TestOnServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("TestOnServer_Validate")); \
			return; \
		} \
		this->TestOnServer_Implementation(); \
		P_NATIVE_END; \
	}


#define Boids_Source_Boids_BoidPlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TestOnServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_TestVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_TestVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestOnServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->TestOnServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("TestOnServer_Validate")); \
			return; \
		} \
		this->TestOnServer_Implementation(); \
		P_NATIVE_END; \
	}


#define Boids_Source_Boids_BoidPlayerPawn_h_12_EVENT_PARMS
#define Boids_Source_Boids_BoidPlayerPawn_h_12_CALLBACK_WRAPPERS
#define Boids_Source_Boids_BoidPlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoidPlayerPawn(); \
	friend BOIDS_API class UClass* Z_Construct_UClass_ABoidPlayerPawn(); \
public: \
	DECLARE_CLASS(ABoidPlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boids"), NO_API) \
	DECLARE_SERIALIZER(ABoidPlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boids_Source_Boids_BoidPlayerPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoidPlayerPawn(); \
	friend BOIDS_API class UClass* Z_Construct_UClass_ABoidPlayerPawn(); \
public: \
	DECLARE_CLASS(ABoidPlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boids"), NO_API) \
	DECLARE_SERIALIZER(ABoidPlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boids_Source_Boids_BoidPlayerPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoidPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoidPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidPlayerPawn(ABoidPlayerPawn&&); \
	NO_API ABoidPlayerPawn(const ABoidPlayerPawn&); \
public:


#define Boids_Source_Boids_BoidPlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidPlayerPawn(ABoidPlayerPawn&&); \
	NO_API ABoidPlayerPawn(const ABoidPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoidPlayerPawn)


#define Boids_Source_Boids_BoidPlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define Boids_Source_Boids_BoidPlayerPawn_h_9_PROLOG \
	Boids_Source_Boids_BoidPlayerPawn_h_12_EVENT_PARMS


#define Boids_Source_Boids_BoidPlayerPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boids_Source_Boids_BoidPlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Boids_Source_Boids_BoidPlayerPawn_h_12_RPC_WRAPPERS \
	Boids_Source_Boids_BoidPlayerPawn_h_12_CALLBACK_WRAPPERS \
	Boids_Source_Boids_BoidPlayerPawn_h_12_INCLASS \
	Boids_Source_Boids_BoidPlayerPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boids_Source_Boids_BoidPlayerPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boids_Source_Boids_BoidPlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Boids_Source_Boids_BoidPlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Boids_Source_Boids_BoidPlayerPawn_h_12_CALLBACK_WRAPPERS \
	Boids_Source_Boids_BoidPlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
	Boids_Source_Boids_BoidPlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boids_Source_Boids_BoidPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
