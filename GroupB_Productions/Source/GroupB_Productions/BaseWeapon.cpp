// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"

#include "BaseProjectile.h"
#include "Engine/SkeletalMeshSocket.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxTotalCharge = 10;
	TotalCharge = 10;
	

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseWeapon::FireWeapon_Implementation()
{
	//if (FireSound)
	//play sound
	
	AActor* MyOwner = GetOwner();
	
	if (MyOwner)
	{
		//dont need this ??
		FVector CameraLocation ;
		FRotator CameraRotation;
		MyOwner->GetActorEyesViewPoint(CameraLocation, CameraRotation);
		
		const USkeletalMeshSocket* WeaponSocket = MeshComp->GetSocketByName(MuzzleSocketName); //Get the socket thats in the weapon

		if (WeaponSocket)
		{
			// Set MuzzleOffset to spawn projectiles at WeaponSocket
			MuzzleOffset.SetLocation(FVector(WeaponSocket->GetSocketLocation(MeshComp)));
	
			MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset.GetLocation());
	
			//Skew the aim to be slightly upwards
			FRotator MuzzleRotation = CameraRotation;
			MuzzleRotation.Pitch += MuzzleOffset.GetRotation().X; //Could make this in header for testing
	
			UWorld* World = GetWorld();
			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = GetInstigator();
	
				//Spawn Projectile at Muzzle location.
			ABaseProjectile* Projectile = World->SpawnActor<ABaseProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, "Firing???");
				// if (Projectile)
				// {
				// 	//Set the projectiles initial trajectory
				// 	FVector LaunchDirection = MuzzleRotation.Vector();
				// 	Projectile->FireInDirection(LaunchDirection);
				// }
			}
		}
	}
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
