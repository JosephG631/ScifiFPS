// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Make sure includes are alphabetical 
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIManager.generated.h"

UCLASS()
class SCIFIFPS_API AAIManager : public ACharacter
{
	GENERATED_BODY()

public:
// I don't know if this is ue5 naming convention but the name AAIManger is not clear. is that actor AI manager? 
	// Sets default values for this character's properties
	AAIManager();

protected:
// Does this need to be protected if you are overriding it in child?
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame // comment not needed
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input // comment not needed 
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
