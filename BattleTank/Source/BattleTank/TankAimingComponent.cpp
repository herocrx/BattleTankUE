// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAimingComponent.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
UTankAimingComponent::UTankAimingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UTankAimingComponent::AimAt(FVector target)
{
	UE_LOG(LogTemp, Warning, TEXT("Aiming at: %s"), *target.ToString());
	DrawDebugLine(GetWorld(), barrelMesh->GetComponentLocation(), target, FColor(0, 255,0));
	return;
}

void UTankAimingComponent::setBarrelMesh(UStaticMeshComponent * barrel)
{
	barrelMesh = barrel;
}


// Called when the game starts
void UTankAimingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTankAimingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

