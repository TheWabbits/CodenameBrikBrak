// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "I_Framework.h"
#include "MainGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CODENAMEBRIKBRAK_API UMainGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	int StoredLives;

	UPROPERTY(BlueprintReadWrite)
	int StoredScore;

};
