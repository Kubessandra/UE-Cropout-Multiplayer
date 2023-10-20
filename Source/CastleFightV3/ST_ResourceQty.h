// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EResourceTypeV2.h"
#include "ST_ResourceQty.generated.h"

USTRUCT(BlueprintType)
struct FST_ResourceQty
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<EResourceTypeV2, int32> Resources;
};