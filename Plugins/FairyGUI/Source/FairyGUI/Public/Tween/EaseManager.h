/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"
#include "EaseType.h"

class FAIRYGUI_API EaseManager
{
public:
    static float Evaluate(EEaseType EaseType, float Time, float Duration, float OvershootOrAmplitude, float Period);
};
