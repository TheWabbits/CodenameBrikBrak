// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Bat.generated.h"

class UCapsuleComponent;
class UArrowComponent;
class USplineComponent;
class UCameraComponent;

UCLASS()
class CODENAMEBRIKBRAK_API ABat : public APawn
{
	GENERATED_BODY()

public:
	ABat();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Movement)
	void MoveRight();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Movement)
	void MoveLeft();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Movement)
	void StopMoving();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Movement)
	void ResetBat();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Movement)
	void SetTimelinePlayRate(float PlayRate);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Ball)
	void SpawnBall();

protected:
	virtual void BeginPlay() override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USceneComponent* DefaultSceneRoot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USceneComponent* BatAnchor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SM_Bat;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* COL_Bat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UArrowComponent* Arrow_BatSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USplineComponent* Spline;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

public:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
