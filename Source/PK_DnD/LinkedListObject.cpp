// Fill out your copyright notice in the Description page of Project Settings.


#include "LinkedListObject.h"
#include "MLGNodeObject.h"

void ULinkedListObject::Append(FString Data)
{
	//Set node
	mData = Data;

	UMLGNodeObject* NewNode = NewObject<UMLGNodeObject>(GetTransientPackage());
	NewNode->Node(mData);


	if (IsValid(Head))
	{
		CurrentNode = Head;
		while (IsValid(CurrentNode->NextNode))
		{
			CurrentNode = CurrentNode->NextNode;
		}
		CurrentNode->NextNode = NewNode;
	}

	else
	{
		Head = NewNode;
	}

}

void ULinkedListObject::Prepend(FString Data)
{

	mData = Data;

	UMLGNodeObject* NewNode = NewObject<UMLGNodeObject>(GetTransientPackage());
	NewNode->Node(mData);

	if (IsValid(Head))
	{


	}

	else	
	{


	}

}

void ULinkedListObject::DeleteWithValue(FString Data)
{
}

void ULinkedListObject::PrintList()
{

	if (IsValid(Head))
	{
		
		CurrentNode = Head;
		while (IsValid(CurrentNode->NextNode))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d"), mData));
		}
		
		CurrentNode = CurrentNode->NextNode;

	}

	else
	{
		return;
	}

}
