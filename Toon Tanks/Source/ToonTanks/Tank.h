// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class ATank : public ABasePawn
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:

	UPROPERTY(Category = "Components", VisibleAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(Category = "Components", VisibleAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	float Speed = 200.0f;

	UPROPERTY(EditAnywhere)
	float TurnRate = 100.0f;

	void Move(float Value);
	void Turn(float Value);
	
	APlayerController* TankPlayerController;



public:

	ATank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

	APlayerController* GetTankPlayerController() const {return TankPlayerController;}

	bool bAlive = true;

};
