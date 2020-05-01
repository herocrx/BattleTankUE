// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	tankAimingComponent = CreateDefaultSubobject<UTankAimingComponent>(FName("Aim Component"));

}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
}

void ATank::setBarrelMesh(UStaticMeshComponent * barrelMesh)
{
	tankAimingComponent->setBarrelMesh(barrelMesh);
}


// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATank::AimAt(FVector HitLocation)
{
	tankAimingComponent->AimAt(HitLocation);
	return;
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

