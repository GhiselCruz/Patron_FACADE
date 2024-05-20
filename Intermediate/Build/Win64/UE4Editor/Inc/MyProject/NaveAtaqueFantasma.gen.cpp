// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/NaveAtaqueFantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAtaqueFantasma() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ANaveAtaqueFantasma_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ANaveAtaqueFantasma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAtaqueFantasma::StaticRegisterNativesANaveAtaqueFantasma()
	{
	}
	UClass* Z_Construct_UClass_ANaveAtaqueFantasma_NoRegister()
	{
		return ANaveAtaqueFantasma::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAtaqueFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaFantasma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaFantasma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAtaqueFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAtaqueFantasma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAtaqueFantasma.h" },
		{ "ModuleRelativePath", "NaveAtaqueFantasma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAtaqueFantasma_Statics::NewProp_mallaFantasma_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "mallaFantasma" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAtaqueFantasma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAtaqueFantasma_Statics::NewProp_mallaFantasma = { "mallaFantasma", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAtaqueFantasma, mallaFantasma), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAtaqueFantasma_Statics::NewProp_mallaFantasma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueFantasma_Statics::NewProp_mallaFantasma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAtaqueFantasma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAtaqueFantasma_Statics::NewProp_mallaFantasma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAtaqueFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAtaqueFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAtaqueFantasma_Statics::ClassParams = {
		&ANaveAtaqueFantasma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAtaqueFantasma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueFantasma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAtaqueFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAtaqueFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAtaqueFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAtaqueFantasma, 2276344910);
	template<> MYPROJECT_API UClass* StaticClass<ANaveAtaqueFantasma>()
	{
		return ANaveAtaqueFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAtaqueFantasma(Z_Construct_UClass_ANaveAtaqueFantasma, &ANaveAtaqueFantasma::StaticClass, TEXT("/Script/MyProject"), TEXT("ANaveAtaqueFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAtaqueFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
