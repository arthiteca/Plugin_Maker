// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolylineTools/Public/PolylineToolsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolylineToolsBPLibrary() {}
// Cross Module References
	POLYLINETOOLS_API UClass* Z_Construct_UClass_UPolylineToolsBPLibrary_NoRegister();
	POLYLINETOOLS_API UClass* Z_Construct_UClass_UPolylineToolsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PolylineTools();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength();
	POLYLINETOOLS_API UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction();
// End Cross Module References
	void UPolylineToolsBPLibrary::StaticRegisterNativesUPolylineToolsBPLibrary()
	{
		UClass* Class = UPolylineToolsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AngleBetweenVectors", &UPolylineToolsBPLibrary::execAngleBetweenVectors },
			{ "DivideLengthLine", &UPolylineToolsBPLibrary::execDivideLengthLine },
			{ "DivideLengthPolyline", &UPolylineToolsBPLibrary::execDivideLengthPolyline },
			{ "DivideLine", &UPolylineToolsBPLibrary::execDivideLine },
			{ "DividePolyline", &UPolylineToolsBPLibrary::execDividePolyline },
			{ "EndPoints", &UPolylineToolsBPLibrary::execEndPoints },
			{ "EvaluatePolyline", &UPolylineToolsBPLibrary::execEvaluatePolyline },
			{ "FlipPolyline", &UPolylineToolsBPLibrary::execFlipPolyline },
			{ "PolylineLength", &UPolylineToolsBPLibrary::execPolylineLength },
			{ "PolylineToolsSampleFunction", &UPolylineToolsBPLibrary::execPolylineToolsSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics
	{
		struct PolylineToolsBPLibrary_eventAngleBetweenVectors_Parms
		{
			FVector vec1;
			FVector vec2;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vec2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vec1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventAngleBetweenVectors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec2 = { UE4CodeGen_Private::EPropertyClass::Struct, "vec2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventAngleBetweenVectors_Parms, vec2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec2_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec1 = { UE4CodeGen_Private::EPropertyClass::Struct, "vec1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventAngleBetweenVectors_Parms, vec1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec1_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::NewProp_vec1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "CompactNodeTitle", "ANGLE" },
		{ "DisplayName", "AngleBetweenVectors" },
		{ "Keywords", "AngleBetweenVectors" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "AngleBetweenVectors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(PolylineToolsBPLibrary_eventAngleBetweenVectors_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics
	{
		struct PolylineToolsBPLibrary_eventDivideLengthLine_Parms
		{
			FVector StartLine;
			FVector EndLine;
			float Length;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLine;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLengthLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLengthLine_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_EndLine = { UE4CodeGen_Private::EPropertyClass::Struct, "EndLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLengthLine_Parms, EndLine), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_StartLine = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLengthLine_Parms, StartLine), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_EndLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::NewProp_StartLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "DisplayName", "DivideLengthLine" },
		{ "Keywords", "DivideLengthLine" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "DivideLengthLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(PolylineToolsBPLibrary_eventDivideLengthLine_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics
	{
		struct PolylineToolsBPLibrary_eventDivideLengthPolyline_Parms
		{
			TArray<FVector> Polyline;
			float Length;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polyline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polyline_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLengthPolyline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLengthPolyline_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_Polyline = { UE4CodeGen_Private::EPropertyClass::Array, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLengthPolyline_Parms, Polyline), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_Polyline_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_Polyline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::NewProp_Polyline_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "DisplayName", "DivideLengthPolyline" },
		{ "Keywords", "DivideLengthPolyline" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "DivideLengthPolyline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PolylineToolsBPLibrary_eventDivideLengthPolyline_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics
	{
		struct PolylineToolsBPLibrary_eventDivideLine_Parms
		{
			FVector StartLine;
			FVector EndLine;
			int32 N;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_N;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLine;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_N = { UE4CodeGen_Private::EPropertyClass::Int, "N", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLine_Parms, N), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_EndLine = { UE4CodeGen_Private::EPropertyClass::Struct, "EndLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLine_Parms, EndLine), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_StartLine = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDivideLine_Parms, StartLine), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_EndLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::NewProp_StartLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "DisplayName", "DivideLine" },
		{ "Keywords", "DivideLine" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "DivideLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(PolylineToolsBPLibrary_eventDivideLine_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics
	{
		struct PolylineToolsBPLibrary_eventDividePolyline_Parms
		{
			TArray<FVector> Polyline;
			int32 N;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_N;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polyline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polyline_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDividePolyline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_N = { UE4CodeGen_Private::EPropertyClass::Int, "N", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDividePolyline_Parms, N), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_Polyline = { UE4CodeGen_Private::EPropertyClass::Array, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventDividePolyline_Parms, Polyline), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_Polyline_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_Polyline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::NewProp_Polyline_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "DisplayName", "DividePolyline" },
		{ "Keywords", "DividePolyline" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "DividePolyline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PolylineToolsBPLibrary_eventDividePolyline_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics
	{
		struct PolylineToolsBPLibrary_eventEndPoints_Parms
		{
			TArray<FVector> Polyline;
			FVector Start;
			FVector End;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polyline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polyline_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventEndPoints_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventEndPoints_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_Polyline = { UE4CodeGen_Private::EPropertyClass::Array, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventEndPoints_Parms, Polyline), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_Polyline_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_Polyline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::NewProp_Polyline_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "CompactNodeTitle", "ENDS" },
		{ "DisplayName", "PolylineEnds" },
		{ "Keywords", "EndPoints" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "EndPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(PolylineToolsBPLibrary_eventEndPoints_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics
	{
		struct PolylineToolsBPLibrary_eventEvaluatePolyline_Parms
		{
			TArray<FVector> Polyline;
			float Param;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polyline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polyline_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventEvaluatePolyline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventEvaluatePolyline_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_Polyline = { UE4CodeGen_Private::EPropertyClass::Array, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventEvaluatePolyline_Parms, Polyline), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_Polyline_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_Polyline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::NewProp_Polyline_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "DisplayName", "EvaluatePolyline" },
		{ "Keywords", "EvaluatePolyline" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "EvaluatePolyline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(PolylineToolsBPLibrary_eventEvaluatePolyline_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics
	{
		struct PolylineToolsBPLibrary_eventFlipPolyline_Parms
		{
			TArray<FVector> Polyline;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polyline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polyline_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventFlipPolyline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_Polyline = { UE4CodeGen_Private::EPropertyClass::Array, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventFlipPolyline_Parms, Polyline), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_Polyline_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_Polyline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::NewProp_Polyline_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "CompactNodeTitle", "FLIP" },
		{ "DisplayName", "FlipPolyline" },
		{ "Keywords", "FlipPolyline" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "FlipPolyline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PolylineToolsBPLibrary_eventFlipPolyline_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics
	{
		struct PolylineToolsBPLibrary_eventPolylineLength_Parms
		{
			TArray<FVector> Polyline;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polyline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polyline_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventPolylineLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::NewProp_Polyline = { UE4CodeGen_Private::EPropertyClass::Array, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventPolylineLength_Parms, Polyline), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::NewProp_Polyline_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Polyline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::NewProp_Polyline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::NewProp_Polyline_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "CompactNodeTitle", "LENGTH" },
		{ "DisplayName", "PolylineLength" },
		{ "Keywords", "LengthPolyline" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "PolylineLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PolylineToolsBPLibrary_eventPolylineLength_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics
	{
		struct PolylineToolsBPLibrary_eventPolylineToolsSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventPolylineToolsSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PolylineToolsBPLibrary_eventPolylineToolsSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolylineTools" },
		{ "DisplayName", "Testing" },
		{ "Keywords", "Testing" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolylineToolsBPLibrary, "PolylineToolsSampleFunction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PolylineToolsBPLibrary_eventPolylineToolsSampleFunction_Parms), Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPolylineToolsBPLibrary_NoRegister()
	{
		return UPolylineToolsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPolylineToolsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PolylineTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_AngleBetweenVectors, "AngleBetweenVectors" }, // 2096860294
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthLine, "DivideLengthLine" }, // 2612250588
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLengthPolyline, "DivideLengthPolyline" }, // 203584563
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_DivideLine, "DivideLine" }, // 2384657278
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_DividePolyline, "DividePolyline" }, // 1573752135
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_EndPoints, "EndPoints" }, // 4240538791
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_EvaluatePolyline, "EvaluatePolyline" }, // 529419170
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_FlipPolyline, "FlipPolyline" }, // 2031396997
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineLength, "PolylineLength" }, // 1086837087
		{ &Z_Construct_UFunction_UPolylineToolsBPLibrary_PolylineToolsSampleFunction, "PolylineToolsSampleFunction" }, // 2128011645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PolylineToolsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PolylineToolsBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolylineToolsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::ClassParams = {
		&UPolylineToolsBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolylineToolsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPolylineToolsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPolylineToolsBPLibrary, 627246245);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPolylineToolsBPLibrary(Z_Construct_UClass_UPolylineToolsBPLibrary, &UPolylineToolsBPLibrary::StaticClass, TEXT("/Script/PolylineTools"), TEXT("UPolylineToolsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolylineToolsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
