/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "ControllerAction.h"

class UTransition;

class FPlayTransitionAction : public FControllerAction
{
public:
    FPlayTransitionAction();
    virtual void Setup(FByteBuffer * Buffer) override;

    FString TransitionName;
    int32 PlayTimes;
    float Delay;
    bool bStopOnExit;

protected:
    virtual void Enter(UGController* Controller) override;
    virtual void Leave(UGController* Controller) override;

    UTransition* CurrentTransition;
};