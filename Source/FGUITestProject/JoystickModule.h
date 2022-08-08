/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairyGUI.h"

class FGUITESTPROJECT_API FJoystickModule
{
public:
    FJoystickModule(UGComponent* MainView);

    DECLARE_DELEGATE_OneParam(FJoystickMovingDelegate, float);
    FJoystickMovingDelegate OnMoving;
    FSimpleDelegate OnMoveEnd;

private:
    void OnTouchBegin(UEventContext* Context);
    void OnTouchMove(UEventContext* Context);
    void OnTouchEnd(UEventContext* Context);

    FVector2D InitPos;
    FVector2D StartStagePos;
    FVector2D LastStagePos;
    int32 Radius;

    UGButton* Button;
    UGObject* TouchArea;
    UGObject* Thumb;
    UGObject* Center;
    FTweenerHandle TweenerHandle;
    int32 PointerId;
};
