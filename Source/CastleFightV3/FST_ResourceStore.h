// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EResourceTypeV2.h"
#include "FST_ResourceStore.generated.h"

USTRUCT(BlueprintType)
struct FST_ResourceStore
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Resource")
	TMap<EResourceTypeV2, int32> Resources;

	bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess);
};

template<>
struct TStructOpsTypeTraits<FST_ResourceStore> : public TStructOpsTypeTraitsBase2<FST_ResourceStore>
{
	enum
	{
		WithNetSerializer = true
	};
};