

#pragma once

#include "CoreMinimal.h"
#include "PKDnDQueueInterface.h"
#include "PKDnDStackInterface.h"
#include "PKDnDArrayObject.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class PK_DND_API UPKDnDArrayObject : public UObject, public IPKDnDQueueInterface, public IPKDnDStackInterface
{
	GENERATED_BODY()

	// Start Interface
	virtual void Enqueue_Implementation(int32 Data) override;
	virtual int32 Dequeue_Implementation() override;
	virtual void IntPush_Implementation(const int32 Data) override;
	virtual int32 IntPop_Implementation() override;
	// End Interface

public:

	UFUNCTION(BlueprintCallable)
	void Print();

	UFUNCTION(BlueprintCallable)
	int32 FibNumber(int n);

	/*
	 * Variables
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> IntArray;
	
};
