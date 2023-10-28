// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

ATank::ATank()
{
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);

}

void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) 
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    
    // Axis mappings
    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
    PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);

    // Action mappings
    PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::Fire);
}

void ATank::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (TankPlayerController != nullptr) {
        FHitResult HitResult;
        TankPlayerController->GetHitResultUnderCursor(
            ECollisionChannel::ECC_Visibility, 
            false,
            HitResult);
        DrawDebugSphere(
            GetWorld(),
            HitResult.ImpactPoint,
            30.f,
            12,
            FColor::Green,
            false,
            -1.f);
        RotateTurret(HitResult.ImpactPoint);
    }
}

void ATank::BeginPlay() 
{
    Super::BeginPlay();
    TankPlayerController = Cast<APlayerController>(GetController());
}

void ATank::Move(float Value)
{
    //UE_LOG(LogTemp, Display, TEXT("Move(%f)"), Value);
    FVector MoveOffset(0.0f, 0.0f, 0.0f);
    float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
    MoveOffset.X = Value * Speed * DeltaTime;
    AddActorLocalOffset(MoveOffset, true);
}

void ATank::Turn(float Value)
{
    FRotator DeltaRotation = FRotator::ZeroRotator;
    float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
    DeltaRotation.Yaw = Value * TurnRate * DeltaTime;

    AddActorLocalRotation(DeltaRotation, true);
}

void ATank::HandleDestruction()
{
    Super::HandleDestruction();
    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);
    bAlive = false;
}