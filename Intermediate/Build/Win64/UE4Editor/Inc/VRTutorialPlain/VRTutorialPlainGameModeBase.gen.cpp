// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRTutorialPlainGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTutorialPlainGameModeBase() {}
// Cross Module References
	VRTUTORIALPLAIN_API UClass* Z_Construct_UClass_AVRTutorialPlainGameModeBase_NoRegister();
	VRTUTORIALPLAIN_API UClass* Z_Construct_UClass_AVRTutorialPlainGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VRTutorialPlain();
// End Cross Module References
	void AVRTutorialPlainGameModeBase::StaticRegisterNativesAVRTutorialPlainGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVRTutorialPlainGameModeBase_NoRegister()
	{
		return AVRTutorialPlainGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRTutorialPlainGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_VRTutorialPlain,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "VRTutorialPlainGameModeBase.h" },
				{ "ModuleRelativePath", "VRTutorialPlainGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRTutorialPlainGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRTutorialPlainGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRTutorialPlainGameModeBase, 1228813813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRTutorialPlainGameModeBase(Z_Construct_UClass_AVRTutorialPlainGameModeBase, &AVRTutorialPlainGameModeBase::StaticClass, TEXT("/Script/VRTutorialPlain"), TEXT("AVRTutorialPlainGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRTutorialPlainGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
