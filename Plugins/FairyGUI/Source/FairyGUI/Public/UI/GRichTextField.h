/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "GTextField.h"
#include "GRichTextField.generated.h"

UCLASS(BlueprintType)
class FAIRYGUI_API UGRichTextField : public UGTextField
{
    GENERATED_BODY()

public:
    UGRichTextField();
    virtual ~UGRichTextField();

    UPROPERTY(BlueprintAssignable, Category = "FairyGUI|Event")
    FGUIEventDynMDelegate OnClickLink;

protected:
};