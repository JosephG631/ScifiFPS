// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIManager.generated.h"

UCLASS()
// Make sure includes are alphabetical 
// I don't know if this is ue5 naming convention but the name AAIManger is not clear. is that actor AI manager?
class SCIFIFPS_API AAIManager : public ACharacter
{
	GENERATED_BODY()

public:
	
	AAIManager();

protected:
// Does this need to be protected if you are overriding it in child?
	// Called when the game starts or when spawned // comment not needed
	virtual void BeginPlay() override;

public:	
	// Called every frame // comment not needed
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
