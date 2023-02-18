// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "I_Ball.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UI_Ball : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CODENAMEBRIKBRAK_API II_Ball
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Ball)
	void BallImpact();
};
