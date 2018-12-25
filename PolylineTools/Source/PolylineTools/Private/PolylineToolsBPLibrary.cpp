// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PolylineToolsBPLibrary.h"
#include "PolylineTools.h"
#include "Kismet/KismetArrayLibrary.h"



UPolylineToolsBPLibrary::UPolylineToolsBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

float UPolylineToolsBPLibrary::PolylineToolsSampleFunction(float Param)
{
	return -1;
}

void  UPolylineToolsBPLibrary::EndPoints(TArray < FVector > Polyline, FVector & Start, FVector & End)
{
	Start = Polyline[0];
	End = Polyline[Polyline.Num() - 1];
}

float UPolylineToolsBPLibrary::PolylineLength(TArray < FVector > Polyline)
{
	float Length = 0;
	
	int32 LastIndex = Polyline.Num() - 2;
	for (int32 i = 0; i <= LastIndex; ++i)
		{
		
		Length = (Polyline[i] - Polyline[i + 1]).Size() + Length;
		
		}
	return Length;
	}

TArray < FVector > UPolylineToolsBPLibrary::FlipPolyline(TArray < FVector > Polyline)
{
	int32 LastIndex = Polyline.Num() - 1;
	TArray < FVector > FlipPolyline;
	for (int32 i = 0; i <= LastIndex; ++i)
	{
		FlipPolyline.Add(Polyline[LastIndex - i]);
	}
	return FlipPolyline;
}

FVector UPolylineToolsBPLibrary::EvaluatePolyline(TArray < FVector > Polyline,float Param)
{
	float a = Param / 0;
	float Length = 0;
	FVector Result;
	int32 LastIndex = Polyline.Num() - 2;
	if (Param <= 0) 
	{
		Result = Polyline[0];
	}
	else
	{

	for (int32 i = 0; i <= LastIndex; ++i)
	{

		Length = (Polyline[i] - Polyline[i + 1]).Size() + Length;
		if (Param < Length)
		{
			Result = ((Polyline[i] - Polyline[i + 1]) / (Polyline[i] - Polyline[i + 1]).Size())*(Length - Param) + Polyline[i + 1];
			break;
		}
		else { Result = Polyline[i + 1]; }
	}
		}
	return Result;
}

float UPolylineToolsBPLibrary::AngleBetweenVectors(const FVector & vec1, const FVector & vec2) {
	return FMath::Atan2(FVector::CrossProduct(vec1, vec2).Normalize(), FVector::DotProduct(vec1, vec2));
}

TArray < FVector > UPolylineToolsBPLibrary::DivideLine(FVector StartLine, FVector EndLine, int N)
{
		TArray < FVector > Result;
		FVector Direction = (EndLine - StartLine)/N;
		for (int32 i = 0; i <= N; ++i)
	{
			Result.Add(Direction*i + StartLine);
	}
	return Result;
}

TArray < FVector > UPolylineToolsBPLibrary::DivideLengthLine(FVector StartLine, FVector EndLine, float Length)
{
	TArray < FVector > Result;
	FVector Direction = (EndLine - StartLine)/(EndLine - StartLine).Size() * Length;
	int N = (EndLine - StartLine).Size() / Length;
	for (int32 i = 0; i <= N ; ++i)
	{
		Result.Add(Direction*i + StartLine);
	}
	return Result;
}

TArray < FVector > UPolylineToolsBPLibrary::DivideLengthPolyline(TArray <FVector> Polyline, float Length)
{
	int32 LastIndex = PolylineLength(Polyline)/Length;
	TArray < FVector > Result;
	for(int32 i = 0; i <= LastIndex; ++i)
	{
		Result.Add(EvaluatePolyline(Polyline, i*Length));
	}
	return Result;
}

TArray < FVector > UPolylineToolsBPLibrary::DividePolyline(TArray <FVector> Polyline, int N)
{
	float Delta = PolylineLength(Polyline) / N;
	TArray < FVector > Result;
	for (int32 i = 0; i <= N; ++i)
	{
		Result.Add(EvaluatePolyline(Polyline, i*Delta));
	}
	return Result;
}