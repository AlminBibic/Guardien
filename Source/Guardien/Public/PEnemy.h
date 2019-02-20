// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PEnemy.generated.h"


UCLASS()
class GUARDIEN_API APEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Move")
	FVector NewLocation;

	UPROPERTY(EditAnywhere, Category = "Move")
	FRotator NewRotation;

	UPROPERTY(EditAnywhere, Category = "Move")
	float Speed;

	UPROPERTY(BlueprintReadWrite, Category = "Move")
	bool IsArived;

	UPROPERTY(BlueprintReadWrite, Category = "Move")
	bool Start;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
