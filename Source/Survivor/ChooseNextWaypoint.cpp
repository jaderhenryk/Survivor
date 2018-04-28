// Fill out your copyright notice in the Description page of Project Settings.

#include "Survivor.h"
#include "ChooseNextWaypoint.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("AI C++ tasks is running"));
	return EBTNodeResult::Succeeded;
}
