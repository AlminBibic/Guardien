// Fill out your copyright notice in the Description page of Project Settings.

#include "PEnemy.h"


// Sets default values
APEnemy::APEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 0.5f;

}

// Called when the game starts or when spawned
void APEnemy::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void APEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector CurrentLocation = GetActorLocation();

	FVector Destination = FMath::VInterpTo(CurrentLocation, NewLocation,DeltaTime,Speed);

	SetActorLocationAndRotation(Destination, NewRotation, false, 0, ETeleportType::None);
}

