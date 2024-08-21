#include "PKDnDStack.h"
#include "Engine/Engine.h"

void UPKDnDStack::Push_Implementation(FString& Data)
{
	StackArray.Emplace(Data);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString(("Pushed: " + Data)));
}

FString UPKDnDStack::Pop_Implementation()
{
	FString PopData = "";
	if (!StackArray.IsEmpty())
	{
		PopData = StackArray.Last();
		StackArray.Pop();
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString("Poped: " + PopData));
	}
	return PopData;
}

void UPKDnDStack::PrintStackArray()
{
	for (const auto& Data : StackArray)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString(Data));
	}
}