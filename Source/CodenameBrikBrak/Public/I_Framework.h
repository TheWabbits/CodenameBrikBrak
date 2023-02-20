// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "I_Framework.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UI_Framework : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CODENAMEBRIKBRAK_API II_Framework
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ScoreUpdate(int points);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void LivesUpdate(int lives);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdatePersistentData(int lives, int score);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void RetrievePersistentData(int& lives, int& score);
};
