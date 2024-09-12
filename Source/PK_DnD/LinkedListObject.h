// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LinkedListObject.generated.h"

class UMLGNodeObject;

/**
 * 
 */
UCLASS()
class PK_DND_API ULinkedListObject : public UObject
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintCallable, Category = "List")
	void Append(FString Data);

	UFUNCTION(BlueprintCallable, Category = "List")
	void Prepend(FString Data);

	UFUNCTION(BlueprintCallable, Category = "List")
	void DeleteWithValue(FString Data);

	UFUNCTION(BlueprintCallable, Category = "List")
	void PrintList();


	//Variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NodeObject")
	TObjectPtr<UMLGNodeObject> Head;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NodeObject")
	FString mData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NodeObject")
	TObjectPtr<UMLGNodeObject> CurrentNode;



};
