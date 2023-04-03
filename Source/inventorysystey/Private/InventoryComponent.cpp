// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
// Getter Function for inventory
TArray<FName> UInventoryComponent::GetInventory()
{
	return Inventory; 
}

// Adds item to inventory
void UInventoryComponent::AddItemToInventory(FName NewItem)
{
	Inventory.Add(NewItem);
}

// Removes item from inventory if item present
void UInventoryComponent::RemoveItemFromInventory(FName ItemToRemove)
{
	if (QueryInventoryForItem(ItemToRemove))
	{
		Inventory.Remove(ItemToRemove);
	}

}

// Check if the inventory has items
bool UInventoryComponent::QueryInventoryForItem(FName ItemName)
{
	return Inventory.Contains(ItemName);
}

