// Copyright 2017-2022 Wabbit, LLC. All Rights Reserved.


#include "Ball.h"
#include "bat.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


ABall::ABall()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = CollisionComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(CollisionComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("PMC_Ball"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);

	// Disable collisions in Visual Component.
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// Enable Query Only Collisions in the Collision component.
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	// Set collision object type to Projectile.
	CollisionComponent->SetCollisionObjectType(ECC_GameTraceChannel1); // ECC_GameTraceChannel1 is Projectile Collision Object Type.
	// Set response to all channels to ignore.
	CollisionComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	// Set block response to Pawn's object channel.
	CollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
	// Set block response to Frontier's object channel.
	CollisionComponent->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Block); // ECC_GameTraceChannel2 is Frontier Collision Object Type.
	// Set overlap response to Objective's object channel.
	CollisionComponent->SetCollisionResponseToChannel(ECC_GameTraceChannel3, ECR_Overlap); // ECC_GameTraceChannel3 is Objective Collision Object Type.
	// Set to generate overlap events.
	CollisionComponent->SetGenerateOverlapEvents(true);
	// Set the method to execute when a hit event it's triggered.
	CollisionComponent->OnComponentHit.AddDynamic(this, &ABall::OnHit);

	// Use this component to drive ball's movement.
	ProjectileMovementComponent->InitialSpeed = 0.0f;
	ProjectileMovementComponent->MaxSpeed = 190.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = false;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	
}

void ABall::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	
}

void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

