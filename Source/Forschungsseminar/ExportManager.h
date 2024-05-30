// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExportManager.generated.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"

/**
 * 
 */
UCLASS()
class FORSCHUNGSSEMINAR_API UExportManager : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()

	UFUNCTION(BluePrintCallable, Category = "Custom", meta = (Keywords = "Save"))
	static bool SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting);

};
