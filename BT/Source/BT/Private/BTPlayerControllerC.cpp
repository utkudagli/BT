// Fill out your copyright notice in the Description page of Project Settings.


#include "BTPlayerControllerC.h"

ATank* ABTPlayerControllerC::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}