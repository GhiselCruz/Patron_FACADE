// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/NaveAtaqueCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAtaqueCaza() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ANaveAtaqueCaza_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ANaveAtaqueCaza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAtaqueCaza::StaticRegisterNativesANaveAtaqueCaza()
	{
	}
	UClass* Z_Construct_UClass_ANaveAtaqueCaza_NoRegister()
	{
		return ANaveAtaqueCaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAtaqueCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaCaza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaCaza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAtaqueCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAtaqueCaza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAtaqueCaza.h" },
		{ "ModuleRelativePath", "NaveAtaqueCaza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAtaqueCaza_Statics::NewProp_mallaCaza_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "mallaCaza" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAtaqueCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAtaqueCaza_Statics::NewProp_mallaCaza = { "mallaCaza", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAtaqueCaza, mallaCaza), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAtaqueCaza_Statics::NewProp_mallaCaza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueCaza_Statics::NewProp_mallaCaza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAtaqueCaza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAtaqueCaza_Statics::NewProp_mallaCaza,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAtaqueCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAtaqueCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAtaqueCaza_Statics::ClassParams = {
		&ANaveAtaqueCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAtaqueCaza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueCaza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAtaqueCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAtaqueCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAtaqueCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAtaqueCaza, 2260892029);
	template<> MYPROJECT_API UClass* StaticClass<ANaveAtaqueCaza>()
	{
		return ANaveAtaqueCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAtaqueCaza(Z_Construct_UClass_ANaveAtaqueCaza, &ANaveAtaqueCaza::StaticClass, TEXT("/Script/MyProject"), TEXT("ANaveAtaqueCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAtaqueCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
