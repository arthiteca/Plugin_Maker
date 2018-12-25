// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef POLYLINETOOLS_PolylineToolsBPLibrary_generated_h
#error "PolylineToolsBPLibrary.generated.h already included, missing '#pragma once' in PolylineToolsBPLibrary.h"
#endif
#define POLYLINETOOLS_PolylineToolsBPLibrary_generated_h

#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDividePolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_PROPERTY(UIntProperty,Z_Param_N); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DividePolyline(Z_Param_Polyline,Z_Param_N); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivideLengthPolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DivideLengthPolyline(Z_Param_Polyline,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivideLengthLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartLine); \
		P_GET_STRUCT(FVector,Z_Param_EndLine); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DivideLengthLine(Z_Param_StartLine,Z_Param_EndLine,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivideLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartLine); \
		P_GET_STRUCT(FVector,Z_Param_EndLine); \
		P_GET_PROPERTY(UIntProperty,Z_Param_N); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DivideLine(Z_Param_StartLine,Z_Param_EndLine,Z_Param_N); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenVectors) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vec1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vec2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPolylineToolsBPLibrary::AngleBetweenVectors(Z_Param_Out_vec1,Z_Param_Out_vec2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluatePolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPolylineToolsBPLibrary::EvaluatePolyline(Z_Param_Polyline,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipPolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::FlipPolyline(Z_Param_Polyline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPolylineLength) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPolylineToolsBPLibrary::PolylineLength(Z_Param_Polyline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndPoints) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPolylineToolsBPLibrary::EndPoints(Z_Param_Polyline,Z_Param_Out_Start,Z_Param_Out_End); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPolylineToolsSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPolylineToolsBPLibrary::PolylineToolsSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDividePolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_PROPERTY(UIntProperty,Z_Param_N); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DividePolyline(Z_Param_Polyline,Z_Param_N); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivideLengthPolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DivideLengthPolyline(Z_Param_Polyline,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivideLengthLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartLine); \
		P_GET_STRUCT(FVector,Z_Param_EndLine); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DivideLengthLine(Z_Param_StartLine,Z_Param_EndLine,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivideLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartLine); \
		P_GET_STRUCT(FVector,Z_Param_EndLine); \
		P_GET_PROPERTY(UIntProperty,Z_Param_N); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::DivideLine(Z_Param_StartLine,Z_Param_EndLine,Z_Param_N); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngleBetweenVectors) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vec1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vec2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPolylineToolsBPLibrary::AngleBetweenVectors(Z_Param_Out_vec1,Z_Param_Out_vec2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluatePolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPolylineToolsBPLibrary::EvaluatePolyline(Z_Param_Polyline,Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipPolyline) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UPolylineToolsBPLibrary::FlipPolyline(Z_Param_Polyline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPolylineLength) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPolylineToolsBPLibrary::PolylineLength(Z_Param_Polyline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndPoints) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Polyline); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPolylineToolsBPLibrary::EndPoints(Z_Param_Polyline,Z_Param_Out_Start,Z_Param_Out_End); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPolylineToolsSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPolylineToolsBPLibrary::PolylineToolsSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolylineToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UPolylineToolsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPolylineToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolylineTools"), NO_API) \
	DECLARE_SERIALIZER(UPolylineToolsBPLibrary)


#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPolylineToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UPolylineToolsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPolylineToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolylineTools"), NO_API) \
	DECLARE_SERIALIZER(UPolylineToolsBPLibrary)


#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolylineToolsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolylineToolsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolylineToolsBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolylineToolsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPolylineToolsBPLibrary(UPolylineToolsBPLibrary&&); \
	NO_API UPolylineToolsBPLibrary(const UPolylineToolsBPLibrary&); \
public:


#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolylineToolsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPolylineToolsBPLibrary(UPolylineToolsBPLibrary&&); \
	NO_API UPolylineToolsBPLibrary(const UPolylineToolsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolylineToolsBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolylineToolsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolylineToolsBPLibrary)


#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_25_PROLOG
#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_RPC_WRAPPERS \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_INCLASS \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PolylineToolsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugin_Maker_Plugins_PolylineTools_Source_PolylineTools_Public_PolylineToolsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
