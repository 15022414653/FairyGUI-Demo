/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"

struct FXMLAttributes : TMap<FString, FString>
{
    const FString& Get(const FString& AttrName, const FString& DefaultValue = "");
    int32 GetInt(const FString& AttrName, int32 DefaultValue = 0);
    float GetFloat(const FString& AttrName, float DefaultValue = 0);
    bool GetBool(const FString& AttrName, bool DefaultValue = false);
    FColor GetColor(const FString& AttrName, const FColor& DefaultValue);
};