// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.generated.h"

UCLASS()
class GMTK_GAMEJAM_2020_API AEnemyManager : public AActor
{
	GENERATED_BODY()



public:	
	// Sets default values for this actor's properties
	AEnemyManager();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* TestMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> Enemy;

	UPROPERTY(EditAnywhere)
	int columns;
	UPROPERTY(EditAnywhere)
	int rows;
	UPROPERTY(EditAnywhere)
	float horizontalSpacing;
	UPROPERTY(EditAnywhere)
	float verticalSpacing;

	void Spawn(FVector positionOffset);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
