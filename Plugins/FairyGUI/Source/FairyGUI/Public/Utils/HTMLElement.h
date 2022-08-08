/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "Slate.h"
#include "Widgets/NTextFormat.h"
#include "XMLAttributes.h"

enum class EHTMLElementType
{
    Text,
    Link,
    Image,
    Input,
    Select,
    Object,

    //internal
    LinkEnd,
};

class FAIRYGUI_API FHTMLElement
{
public:
    EHTMLElementType Type;
    FString Name;
    FString Text;
    FNTextFormat Format;
    int32 CharIndex;

    int32 Space;
    FVector2D Position;
    FXMLAttributes Attributes;
};
