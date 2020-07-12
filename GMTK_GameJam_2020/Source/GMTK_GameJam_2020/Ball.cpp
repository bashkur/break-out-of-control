// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = MeshComponent;

	// Use this component to drive this projectile's movement.
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;

	bIsActive = false;
	damage = 10;

	MeshComponent->OnComponentHit.AddDynamic(this, &ABall::OnCompHit);
}

// Called when the game starts or when spawned

void ABall::BeginPlay()
{
	Super::BeginPlay();

	UMaterialInterface* Material = MeshComponent->GetMaterial(0);
	DynamicMaterial = UMaterialInstanceDynamic::Create(Material, nullptr);
	MeshComponent->SetMaterial(0, DynamicMaterial);
}

// Called every frame

void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABall::Activate(bool flag)
{
	bIsActive = flag;
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), flag);
}

void ABall::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                      FVector NormalImpulse, const FHitResult& Hit)
{
	/*if(OtherActor->ActorHasTag("paddle"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Physics"));
		MeshComponent->AddImpulse(FVector(0, GetInputAxisValue("MovePaddle") * 1000.0f, 0));
		MeshComponent->AddTorqueInRadians(FVector(0, 0, GetInputAxisValue("MovePaddle") * 1000.0f), NAME_None, true);		
	}*/
}

