// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickup.h"

// Sets default values
ABatteryPickup::ABatteryPickup() {
	GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickup::WasCollected_Implementation()
{
	// Use the case pickup behavior
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}