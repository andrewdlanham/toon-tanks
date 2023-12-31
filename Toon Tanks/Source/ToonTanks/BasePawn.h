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

	void HandleDestruction();

protected:

	void RotateTurret(FVector LookAtTarget);

	void Fire();

	
private:

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(Category = "Components", meta = (AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere)
	class UParticleSystem* ExplosionParticles;

	UPROPERTY(EditAnywhere)
	class USoundBase* DeathSound;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UCameraShakeBase> DeathCameraShakeClass;

};
