// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PKDnDQueueInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPKDnDQueueInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class PK_DND_API IPKDnDQueueInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PKDNDQueueInterface")
	void Enqueue(int32 Data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PKDNDQueueInterface")
	int32 Dequeue();
};
