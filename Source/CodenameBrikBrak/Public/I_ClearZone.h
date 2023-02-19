// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "I_ClearZone.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UI_ClearZone : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CODENAMEBRIKBRAK_API II_ClearZone
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ClearZoneEntered();

};
