// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BatPlayerController.generated.h"

UCLASS()
class CODENAMEBRIKBRAK_API ABatPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABatPlayerController();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ScoreUpdated();

protected:
	virtual void BeginPlay();

private:

public:
	
};
