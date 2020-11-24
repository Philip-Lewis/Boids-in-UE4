// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Boid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoid() {}
// Cross Module References
	BOIDS_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	BOIDS_API UClass* Z_Construct_UClass_ABoid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Boids();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ABoid::StaticRegisterNativesABoid()
	{
	}
	UClass* Z_Construct_UClass_ABoid_NoRegister()
	{
		return ABoid::StaticClass();
	}
	UClass* Z_Construct_UClass_ABoid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Boids,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Boid.h" },
				{ "ModuleRelativePath", "Boid.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLocation_MetaData[] = {
				{ "Category", "Boid" },
				{ "ModuleRelativePath", "Boid.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030001, 1, nullptr, STRUCT_OFFSET(ABoid, PreviousLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PreviousLocation_MetaData, ARRAY_COUNT(NewProp_PreviousLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[] = {
				{ "Category", "Boid" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Boid.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arrow = { UE4CodeGen_Private::EPropertyClass::Object, "Arrow", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(ABoid, Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_Arrow_MetaData, ARRAY_COUNT(NewProp_Arrow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
				{ "Category", "Boid" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Boid.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot = { UE4CodeGen_Private::EPropertyClass::Object, "SceneRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(ABoid, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SceneRoot_MetaData, ARRAY_COUNT(NewProp_SceneRoot_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Arrow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SceneRoot,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABoid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABoid::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoid, 441213459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoid(Z_Construct_UClass_ABoid, &ABoid::StaticClass, TEXT("/Script/Boids"), TEXT("ABoid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
