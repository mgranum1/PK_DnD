#pragma once

#include "CoreMinimal.h"
#include "PKDnDStackInterface.h"
#include "UObject/NoExportTypes.h"
#include "PKDnDStack.generated.h"

/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class PK_DND_API UPKDnDStack : public UObject, public IPKDnDStackInterface
{
	GENERATED_BODY()

	// Start IPKDnDStackInterface
	virtual void Push_Implementation(FString& Data) override;
	virtual FString Pop_Implementation() override;
	// End IPKDnDStackInterface

public:
	UFUNCTION(BlueprintCallable)
	void PrintStackArray();

	/*
	 * Variables
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> StackArray;
};