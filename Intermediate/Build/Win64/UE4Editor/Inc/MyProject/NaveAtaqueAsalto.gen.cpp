// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/NaveAtaqueAsalto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAtaqueAsalto() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ANaveAtaqueAsalto_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ANaveAtaqueAsalto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAtaqueAsalto::StaticRegisterNativesANaveAtaqueAsalto()
	{
	}
	UClass* Z_Construct_UClass_ANaveAtaqueAsalto_NoRegister()
	{
		return ANaveAtaqueAsalto::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAtaqueAsalto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaAsalto_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaAsalto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAtaqueAsalto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAtaqueAsalto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAtaqueAsalto.h" },
		{ "ModuleRelativePath", "NaveAtaqueAsalto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAtaqueAsalto_Statics::NewProp_mallaAsalto_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "mallaAsalto" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAtaqueAsalto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAtaqueAsalto_Statics::NewProp_mallaAsalto = { "mallaAsalto", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAtaqueAsalto, mallaAsalto), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAtaqueAsalto_Statics::NewProp_mallaAsalto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueAsalto_Statics::NewProp_mallaAsalto_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAtaqueAsalto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAtaqueAsalto_Statics::NewProp_mallaAsalto,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAtaqueAsalto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAtaqueAsalto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAtaqueAsalto_Statics::ClassParams = {
		&ANaveAtaqueAsalto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAtaqueAsalto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueAsalto_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAtaqueAsalto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAtaqueAsalto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAtaqueAsalto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAtaqueAsalto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAtaqueAsalto, 3071901501);
	template<> MYPROJECT_API UClass* StaticClass<ANaveAtaqueAsalto>()
	{
		return ANaveAtaqueAsalto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAtaqueAsalto(Z_Construct_UClass_ANaveAtaqueAsalto, &ANaveAtaqueAsalto::StaticClass, TEXT("/Script/MyProject"), TEXT("ANaveAtaqueAsalto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAtaqueAsalto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
