// Fill out your copyright notice in the Description page of Project Settings.
// Get rid of this unless you are going to fill it ^

#include "AmmoCounterWidget.h"
#include "Kismet/KismetTextLibrary.h"

void UAmmoCounterWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// You getting several pointers here, you need to check each one for nullness 
	AScifiFPSCharacter* player = Cast<AScifiFPSCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	if(player)
	{
		// I might not be understanding the ue code here but is Player a memeber var?
		Player = player;
	}
}

// IDk what an fText is but does it make sense to return a reference? 
FText UAmmoCounterWidget::GetAmmoText() const
{
	// You getting several pointers here, you need to check each one for nullness 
	return UKismetTextLibrary::Conv_IntToText(Player->GetWeaponComponent()->GetCurrentAmmoOfCurrentWeapon());
}

FText UAmmoCounterWidget::GetTotalAmmoText() const
{
	// You getting several pointers here, you need to check each one for nullness 
	return UKismetTextLibrary::Conv_IntToText(Player->GetWeaponComponent()->GetReserveAmmoOfCurrentWeapon());
}
