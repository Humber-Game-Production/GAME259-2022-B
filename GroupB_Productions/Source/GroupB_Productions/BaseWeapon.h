// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.h"
#include "BaseWeapon.generated.h"

class USkeletalMeshComponent;

UCLASS()
class GROUPB_PRODUCTIONS_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class ABaseProjectile> ProjectileClass;

	//The intended index of the weapon ??
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int Index;

	// The total max amount of charges/ammo that the weapon can carry
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int MaxTotalCharge;

	// The total amount 0f ammo being carried for the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int TotalCharge;

	// The amount of charges in the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int WeaponCharge;	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components") 
	USkeletalMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FTransform MuzzleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName MuzzleSocketName = "WeaponSocket";



	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FVector MuzzleLocation;

	FVector GetMuzzleLocation() const
	{
		return MuzzleLocation;
	};

	// Determine firing logic within the weapon's blueprint
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	void FireWeapon();

	//FVector
};
