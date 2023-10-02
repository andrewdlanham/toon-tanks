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
	
private:

	UPROPERTY(Category = "Components", VisibleAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(Category = "Components", VisibleAnywhere)
	class UCameraComponent* Camera;

	void Move(float Value);

public:

	ATank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
