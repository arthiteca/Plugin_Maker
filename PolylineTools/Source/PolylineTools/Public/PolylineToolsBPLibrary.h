// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolylineToolsBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UPolylineToolsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Testing", Keywords = "Testing"), Category = "PolylineTools")
	static float PolylineToolsSampleFunction(float Param);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "PolylineEnds", CompactNodeTitle = "ENDS", Keywords = "EndPoints"), Category = "PolylineTools")//начало и конец полилинии(список точек)
	static void EndPoints(TArray < FVector > Polyline, FVector & Start, FVector & End);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PolylineLength", CompactNodeTitle = "LENGTH", Keywords = "LengthPolyline"), Category = "PolylineTools")//длина полилинии
		static float PolylineLength(TArray < FVector > Polyline);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "FlipPolyline", CompactNodeTitle = "FLIP", Keywords = "FlipPolyline"), Category = "PolylineTools")//...
		static TArray < FVector > FlipPolyline(TArray < FVector > Polyline);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "EvaluatePolyline", Keywords = "EvaluatePolyline"), Category = "PolylineTools")//...
		static FVector EvaluatePolyline(TArray < FVector > Polyline, float Param);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "AngleBetweenVectors", CompactNodeTitle = "ANGLE", Keywords = "AngleBetweenVectors"), Category = "PolylineTools")//...
		static float AngleBetweenVectors(const FVector & vec1, const FVector & vec2);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "DivideLine",  Keywords = "DivideLine"), Category = "PolylineTools")//...
	static TArray < FVector >DivideLine(FVector StartLine, FVector EndLine, int N);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "DivideLengthLine",  Keywords = "DivideLengthLine"), Category = "PolylineTools")//...
		static TArray < FVector > DivideLengthLine(FVector StartLine, FVector EndLine, float Length);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "DivideLengthPolyline",  Keywords = "DivideLengthPolyline"), Category = "PolylineTools")//...
		static TArray < FVector > DivideLengthPolyline(TArray <FVector>  Polyline, float Length);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "DividePolyline", Keywords = "DividePolyline"), Category = "PolylineTools")//...
		static TArray < FVector > DividePolyline(TArray <FVector>  Polyline, int N);
};
