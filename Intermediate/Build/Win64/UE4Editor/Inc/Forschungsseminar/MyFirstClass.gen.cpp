// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Forschungsseminar/MyFirstClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstClass() {}
// Cross Module References
	FORSCHUNGSSEMINAR_API UClass* Z_Construct_UClass_AMyFirstClass_NoRegister();
	FORSCHUNGSSEMINAR_API UClass* Z_Construct_UClass_AMyFirstClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Forschungsseminar();
// End Cross Module References
	void AMyFirstClass::StaticRegisterNativesAMyFirstClass()
	{
	}
	UClass* Z_Construct_UClass_AMyFirstClass_NoRegister()
	{
		return AMyFirstClass::StaticClass();
	}
	struct Z_Construct_UClass_AMyFirstClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFirstClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Forschungsseminar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyFirstClass.h" },
		{ "ModuleRelativePath", "MyFirstClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFirstClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFirstClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyFirstClass_Statics::ClassParams = {
		&AMyFirstClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyFirstClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFirstClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyFirstClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFirstClass, 2097984785);
	template<> FORSCHUNGSSEMINAR_API UClass* StaticClass<AMyFirstClass>()
	{
		return AMyFirstClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFirstClass(Z_Construct_UClass_AMyFirstClass, &AMyFirstClass::StaticClass, TEXT("/Script/Forschungsseminar"), TEXT("AMyFirstClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
