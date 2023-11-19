// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// ordering 
#include "CoreMinimal.h"
#include "GunBase.h"
#include "AutomaticRifle.generated.h"


// You have source control not sure this log is neded 
/*****************************************************************************************************
 * Type: Class
 *
 * Name: AAutomaticRifle
 *
 * Author: Jaber Ahmed
 *
 * Purpose: Assault rifle gun, derived from the base class Gun Base // I can see it derived 
 *
 * References: N/A
 *
 * See Also: AGunBase, UTP_WeaponComponent
 *
 * Change Log:
 * Date          Initials    Version     Comments
 * 29/09/2023    JA          V1.0        N/A
*****************************************************************************************************/
UCLASS()
class SCIFIFPS_API AAutomaticRifle : public AGunBase
{
	GENERATED_BODY()
	
public:
	AAutomaticRifle();
};
