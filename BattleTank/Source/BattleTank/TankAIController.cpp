// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"




void ATankAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    //(LogTemp, Warning, TEXT("Executed TankAIController"));
}

	
ATank * ATankAIController::GetPlayerTank() const
{
    return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankAIController::BeginPlay()
{
    tankController = GetPlayerTank();
    if(!tankController)
    {
        UE_LOG(LogTemp, Warning, TEXT("TankController could not be found"))
    }
}