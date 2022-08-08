/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"

FAIRYGUI_API DECLARE_LOG_CATEGORY_EXTERN(LogFairyGUI, Log, All)

extern const FString FAIRYGUI_API G_EMPTY_STRING;

DECLARE_DELEGATE_RetVal_OneParam(class UGComponent*, FGComponentCreator, UObject*);