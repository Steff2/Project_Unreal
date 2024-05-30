// Fill out your copyright notice in the Description page of Project Settings.


#include "ExportManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"

//Exports saved text
bool UExportManager::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting = false)
{
	// Set complete file path.
	SaveDirectory += "\\";
	SaveDirectory += FileName;

	//ignore for now
	if (AllowOverWriting)
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
		{
			return false;
		}
	}

	//Adds the array together to one String
	FString FinalString = "";
	for (FString& Each : SaveText)
	{
		FinalString += Each;
		FinalString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}




