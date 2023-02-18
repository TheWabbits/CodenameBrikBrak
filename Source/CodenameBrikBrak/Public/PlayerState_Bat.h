// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PlayerState_Bat.generated.h"

/**
 * 
 */
UCLASS()
class CODENAMEBRIKBRAK_API APlayerState_Bat : public APlayerState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int CurrentScore;
	
};
