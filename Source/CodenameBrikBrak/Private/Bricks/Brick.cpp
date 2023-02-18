// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.

#include "CodenameBrikBrak/Public/Bricks/Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	DefaultSceneRoot->SetupAttachment(RootComponent);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(DefaultSceneRoot);


	// Set collisions in MeshComponent.
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Set response to all channels to BlockAll.
	MeshComponent->SetCollisionResponseToAllChannels(ECR_Block);

}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

