// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "Ball.h"

// Sets default values
AEnemy::AEnemy()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	BoxCollider->SetupAttachment(GetRootComponent());
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh->OnComponentHit.AddDynamic(this, &AEnemy::OnBeginHit);
	playDeathNoise = false;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(GetActorLocation() + (FVector(moveSpeed, 0, 0)*DeltaTime));
}


void AEnemy::OnBeginHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor,
                               class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if(OtherActor->ActorHasTag("Ball"))
	{
		ABall* OtherBall = Cast<ABall>(OtherActor);
		if(OtherBall->bIsActive)
		{
			playDeathNoise = true;
		}
	}
}

