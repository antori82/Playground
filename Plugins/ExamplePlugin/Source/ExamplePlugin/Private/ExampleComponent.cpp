// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExampleComponent.h"


UExampleComponent::UExampleComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

FString UExampleComponent::testFunction(FString prompt) {
	return Key;
}

// Called when the game starts
void UExampleComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}

// Called every frame
void UExampleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}