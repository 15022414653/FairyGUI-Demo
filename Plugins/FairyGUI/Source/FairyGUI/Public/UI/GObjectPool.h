/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

class UGObject;

class FGObjectPool : public FGCObject
{
public:
    UGObject* GetObject(const FString& URL, UObject* WorldContextObject);
    void ReturnObject(UGObject* Obj);

    virtual void AddReferencedObjects(FReferenceCollector& Collector) override;

private:
    TMap<FString, TArray<UGObject*>> Pool;
};