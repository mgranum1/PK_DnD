// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PKDnDQueueInterface.h"
#include "UObject/NoExportTypes.h"
#include "PKDnDQueue.generated.h"

/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class PK_DND_API UPKDnDQueue : public UObject, public IPKDnDQueueInterface
{
	GENERATED_BODY()

	// Start IPKDnDQueueInterface
	virtual void Enqueue_Implementation(int32 Data) override;
	virtual int32 Dequeue_Implementation() override;
	// End IPKDnDQueueInterface

public:
	UFUNCTION(BlueprintCallable)
	void PrintQueueArray();

	/*
	 * Variables
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> QueueArray;
};
