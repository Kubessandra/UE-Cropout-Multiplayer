// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"

#include "FST_AnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FST_AnimationInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	bool bPlayingAnimation = false;

	UPROPERTY(BlueprintReadWrite)
	float Delay;

	UPROPERTY(BlueprintReadWrite)
	UAnimMontage *AnimMontage;
};
