// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"


void ATower::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // Find distance to Tank
    if (Tank != nullptr) {
        float DistanceToTank = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
        // Check if Tank is in range
        if (DistanceToTank <= FireRange) {
            // Rotate turret towards Tank if needed
            RotateTurret(Tank->GetActorLocation());
        }
        
    }
    

    
}


void ATower::BeginPlay() 
{
    Super::BeginPlay();
    Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}