// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"




void ATankAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    tankControlled->AimAt(tankPlayer->GetActorLocation());
}

ATank * ATankAIController::GetControlledTank() const
{
    return Cast<ATank>(GetParentActor());
}

	
ATank * ATankAIController::GetPlayerTank() const
{
    return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankAIController::BeginPlay()
{
    tankPlayer = GetPlayerTank();
    if(!tankPlayer)
    {
        UE_LOG(LogTemp, Warning, TEXT("TankPlayer could not be found"))
    }

    tankControlled = GetControlledTank();
    if(!tankControlled)
    {
        UE_LOG(LogTemp, Warning, TEXT("TankController could not be found"))
    }
}