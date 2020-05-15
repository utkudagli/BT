// Fill out your copyright notice in the Description page of Project Settings.


#include "BTPlayerControllerC.h"

void ABTPlayerControllerC::BeginPlay() {
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possesing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possesing: %s"), *ControlledTank->GetName());
	}
}
void ABTPlayerControllerC::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	AimTowardsCrosshair();
}


ATank* ABTPlayerControllerC::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}

void ABTPlayerControllerC::AimTowardsCrosshair() {

	if (!GetControlledTank()) {
		return;
	}

}