// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.


#include "Bat.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h" // for debugging only
#include "Components/SplineComponent.h"
#include "Camera/CameraComponent.h"

DECLARE_MULTICAST_DELEGATE(MoveRight);

ABat::ABat()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	DefaultSceneRoot->SetupAttachment(RootComponent);

	BatAnchor = CreateDefaultSubobject<USceneComponent>(TEXT("BatAnchor"));
	BatAnchor->SetupAttachment(DefaultSceneRoot);

	SM_Bat = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Bat"));
	SM_Bat->SetupAttachment(BatAnchor);

	COL_Bat = CreateDefaultSubobject<UCapsuleComponent>(TEXT("COL_Bat"));
	COL_Bat->SetupAttachment(BatAnchor);

	Arrow_BatSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow_BatSpawnPoint"));
	Arrow_BatSpawnPoint->SetupAttachment(BatAnchor);

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(DefaultSceneRoot);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(DefaultSceneRoot);

}

void ABat::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABat::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

}

