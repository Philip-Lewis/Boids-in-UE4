// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BoidPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidPlayerPawn() {}
// Cross Module References
	BOIDS_API UClass* Z_Construct_UClass_ABoidPlayerPawn_NoRegister();
	BOIDS_API UClass* Z_Construct_UClass_ABoidPlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Boids();
	BOIDS_API UFunction* Z_Construct_UFunction_ABoidPlayerPawn_OnRep_TestVal();
	BOIDS_API UFunction* Z_Construct_UFunction_ABoidPlayerPawn_TestOnServer();
// End Cross Module References
	static FName NAME_ABoidPlayerPawn_TestOnServer = FName(TEXT("TestOnServer"));
	void ABoidPlayerPawn::TestOnServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoidPlayerPawn_TestOnServer),NULL);
	}
	void ABoidPlayerPawn::StaticRegisterNativesABoidPlayerPawn()
	{
		UClass* Class = ABoidPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_TestVal", (Native)&ABoidPlayerPawn::execOnRep_TestVal },
			{ "TestOnServer", (Native)&ABoidPlayerPawn::execTestOnServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABoidPlayerPawn_OnRep_TestVal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BoidPlayerPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoidPlayerPawn, "OnRep_TestVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABoidPlayerPawn_TestOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BoidPlayerPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoidPlayerPawn, "TestOnServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoidPlayerPawn_NoRegister()
	{
		return ABoidPlayerPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ABoidPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Boids,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABoidPlayerPawn_OnRep_TestVal, "OnRep_TestVal" }, // 857573631
				{ &Z_Construct_UFunction_ABoidPlayerPawn_TestOnServer, "TestOnServer" }, // 1574198163
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BoidPlayerPawn.h" },
				{ "ModuleRelativePath", "BoidPlayerPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestVal_MetaData[] = {
				{ "ModuleRelativePath", "BoidPlayerPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt8PropertyParams NewProp_TestVal = { UE4CodeGen_Private::EPropertyClass::Int8, "TestVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_TestVal", STRUCT_OFFSET(ABoidPlayerPawn, TestVal), METADATA_PARAMS(NewProp_TestVal_MetaData, ARRAY_COUNT(NewProp_TestVal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestVal,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABoidPlayerPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABoidPlayerPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ABoidPlayerPawn, 1288563119);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoidPlayerPawn(Z_Construct_UClass_ABoidPlayerPawn, &ABoidPlayerPawn::StaticClass, TEXT("/Script/Boids"), TEXT("ABoidPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
