


#include "PKDnDArrayObject.h"

#include "Engine/Engine.h"


void UPKDnDArrayObject::Enqueue_Implementation(int32 Data)
{
	IntArray.Emplace(Data);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Queued: %d"), Data));
}

int32 UPKDnDArrayObject::Dequeue_Implementation()
{
	int32 DequeueData = 0;
	if (!IntArray.IsEmpty())
	{
		DequeueData = IntArray[0];
		IntArray.RemoveAt(0);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Dequeued: %d"), DequeueData));
	}
	return DequeueData;
}

void UPKDnDArrayObject::IntPush_Implementation(const int32 Data)
{
	IntArray.Emplace(Data);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Pushed: %d"), Data));
}

int32 UPKDnDArrayObject::IntPop_Implementation()
{
	int32 PopData = 0;
	if (!IntArray.IsEmpty())
	{
		PopData = IntArray.Last();
		IntArray.Pop();
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Dequeued: %d"), PopData));
	}
	return int32();
}

void UPKDnDArrayObject::Print()
{
	for (const auto& Data : IntArray)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("%d"), Data));
	}
}

int32 UPKDnDArrayObject::FibNumber(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return FibNumber(n - 1) + FibNumber(n - 2);
}
