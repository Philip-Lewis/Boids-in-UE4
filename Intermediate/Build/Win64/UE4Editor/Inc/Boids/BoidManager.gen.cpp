// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BoidManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidManager() {}
// Cross Module References
	BOIDS_API UClass* Z_Construct_UClass_ABoidManager_NoRegister();
	BOIDS_API UClass* Z_Construct_UClass_ABoidManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Boids();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BOIDS_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ABoidManager::StaticRegisterNativesABoidManager()
	{
	}
	UClass* Z_Construct_UClass_ABoidManager_NoRegister()
	{
		return ABoidManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ABoidManager()
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
				{ "IncludePath", "BoidManager.h" },
				{ "ModuleRelativePath", "BoidManager.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(ABoidManager, SpawnLocations), METADATA_PARAMS(NewProp_SpawnLocations_MetaData, ARRAY_COUNT(NewProp_SpawnLocations_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedBoids_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedBoids = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnedBoids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ABoidManager, SpawnedBoids), METADATA_PARAMS(NewProp_SpawnedBoids_MetaData, ARRAY_COUNT(NewProp_SpawnedBoids_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedBoids_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnedBoids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoidClass_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BoidClass = { UE4CodeGen_Private::EPropertyClass::Class, "BoidClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000801, 1, nullptr, STRUCT_OFFSET(ABoidManager, BoidClass), Z_Construct_UClass_ABoid_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BoidClass_MetaData, ARRAY_COUNT(NewProp_BoidClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageBoidDirection_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AverageBoidDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "AverageBoidDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030001, 1, nullptr, STRUCT_OFFSET(ABoidManager, AverageBoidDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AverageBoidDirection_MetaData, ARRAY_COUNT(NewProp_AverageBoidDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBoidIndex_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentBoidIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "CurrentBoidIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030001, 1, nullptr, STRUCT_OFFSET(ABoidManager, CurrentBoidIndex), nullptr, METADATA_PARAMS(NewProp_CurrentBoidIndex_MetaData, ARRAY_COUNT(NewProp_CurrentBoidIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAreRulesAveraged_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			auto NewProp_bAreRulesAveraged_SetBit = [](void* Obj){ ((ABoidManager*)Obj)->bAreRulesAveraged = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAreRulesAveraged = { UE4CodeGen_Private::EPropertyClass::Bool, "bAreRulesAveraged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABoidManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAreRulesAveraged_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAreRulesAveraged_MetaData, ARRAY_COUNT(NewProp_bAreRulesAveraged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAwarenessRadius_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultAwarenessRadius = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultAwarenessRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(ABoidManager, DefaultAwarenessRadius), METADATA_PARAMS(NewProp_DefaultAwarenessRadius_MetaData, ARRAY_COUNT(NewProp_DefaultAwarenessRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBoidSpeed_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultBoidSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultBoidSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(ABoidManager, DefaultBoidSpeed), METADATA_PARAMS(NewProp_DefaultBoidSpeed_MetaData, ARRAY_COUNT(NewProp_DefaultBoidSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBoidCount_MetaData[] = {
				{ "Category", "BoidManager" },
				{ "ModuleRelativePath", "BoidManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultBoidCount = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultBoidCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(ABoidManager, DefaultBoidCount), nullptr, METADATA_PARAMS(NewProp_DefaultBoidCount_MetaData, ARRAY_COUNT(NewProp_DefaultBoidCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnLocations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnLocations_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnedBoids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnedBoids_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoidClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AverageBoidDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentBoidIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAreRulesAveraged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultAwarenessRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultBoidSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultBoidCount,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABoidManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABoidManager::StaticClass,
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
	IMPLEMENT_CLASS(ABoidManager, 3476677779);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoidManager(Z_Construct_UClass_ABoidManager, &ABoidManager::StaticClass, TEXT("/Script/Boids"), TEXT("ABoidManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
