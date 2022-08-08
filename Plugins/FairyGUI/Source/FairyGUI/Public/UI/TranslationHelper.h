/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"

class FPackageItem;

class FTranslationHelper
{
public:
    static TMap<FString, TMap<FString, FString>> Strings;

    static void LoadFromXML(const FString XmlString);
    static void TranslateComponent(const TSharedPtr<FPackageItem>& Item);
};