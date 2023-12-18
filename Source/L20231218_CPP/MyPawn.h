// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"


#include "MyPawn.generated.h"


class UBoxComponent;
class UStaticMeshComponent;
class UFloatingPawnMovement;
class UArrowComponent;
class UCameraComponent;
class USpringArmComponent;


UCLASS()
class L20231218_CPP_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UBoxComponent* Box;

	UStaticMeshComponent* Body;

	UStaticMeshComponent* Left;

	UStaticMeshComponent* Right;

	UFloatingPawnMovement* Movement;

	UArrowComponent* Arrow;

	UCameraComponent* Camera ;

	USpringArmComponent* SpringArm;

};
