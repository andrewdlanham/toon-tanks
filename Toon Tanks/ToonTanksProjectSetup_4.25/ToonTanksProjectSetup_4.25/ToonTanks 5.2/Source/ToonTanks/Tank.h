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

public:

	ATank();

};
