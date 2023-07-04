// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Modules/ModuleManager.h"
#include "ExampleComponent.generated.h"

UCLASS(ClassGroup = (Example), meta = (BlueprintSpawnableComponent))
class UExampleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UExampleComponent();

	UPROPERTY(EditAnywhere, Category = "Settings")
		FString Key;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Test Function"), Category = "Test")
		FString testFunction(FString prompt);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};