// Fill out your copyright notice in the Description page of Project Settings.


#include "PKDnDQueue.h"

#include "Engine/Engine.h"

void UPKDnDQueue::Enqueue_Implementation(int32 Data)
{
	Array.Emplace(Data);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Added to Queue: %d"), Data));
}

int32 UPKDnDQueue::Dequeue_Implementation()
{
	int32 DequeueData = 0;
	if(!Array.IsEmpty())
	{
		DequeueData = Array.Pop();
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Poped from Queue: %d"), DequeueData));

	}
	return DequeueData;
}

void UPKDnDQueue::PrintArray()
{
	for (const auto& Data : Array)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("%d"), Data));
	}
}
