// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* ProjectileSpawnPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

};
