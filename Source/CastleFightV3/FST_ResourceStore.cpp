#include "FST_ResourceStore.h"

bool FST_ResourceStore::NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess)
{
	Ar << Resources;
	bOutSuccess = true;
	return true;
}