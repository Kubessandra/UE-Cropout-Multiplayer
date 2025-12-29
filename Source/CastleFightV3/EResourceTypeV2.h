// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EResourceTypeV2.generated.h"

UENUM(BlueprintType)
enum class EResourceTypeV2 : uint8 {
	None,
	Food,
	Wood,
	Stone,
	Iron,
	IronIngot
	
};

ENUM_RANGE_BY_FIRST_AND_LAST(EResourceTypeV2, EResourceTypeV2::None, EResourceTypeV2::IronIngot);