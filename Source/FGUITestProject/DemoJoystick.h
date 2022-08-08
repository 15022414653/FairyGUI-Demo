/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DemoObject.h"
#include "JoystickModule.h"
#include "DemoJoystick.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class FGUITESTPROJECT_API UDemoJoystick : public UDemoObject
{
    GENERATED_BODY()

public:
    virtual void OnDemoStart_Implementation() override;
    virtual void OnDemoEnd_Implementation() override;

private:
    UGComponent* MainView;
    TSharedPtr<FJoystickModule> Joystick;
};
