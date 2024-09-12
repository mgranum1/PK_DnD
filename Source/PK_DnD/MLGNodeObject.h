// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MLGNodeObject.generated.h"

/**
 * 
 */
UCLASS()
class PK_DND_API UMLGNodeObject : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "NodeObject")
	UMLGNodeObject* Node(FString Data);

	//Variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NodeObject")
	FString mData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NodeObject")
	TObjectPtr<UMLGNodeObject> NextNode;


};
