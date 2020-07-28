// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnGravity.h"

// Sets default values
APawnGravity::APawnGravity()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APawnGravity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnGravity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawnGravity::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

