// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Ball.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class GMTK_GAMEJAM_2020_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditAnywhere)
	bool bIsActive;

	UPROPERTY(EditAnywhere)
	float damage;

	UMaterialInstanceDynamic* DynamicMaterial;

	UFUNCTION()
	void OnCompHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor,
                               class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Makes this ball active or inactive
	void Activate(bool flag);

	
};
