/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairyGUI.h"
#include "DemoObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class FGUITESTPROJECT_API UDemoObject : public UObject
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDemoStart();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDemoEnd();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDemoTick();

    virtual class UWorld* GetWorld() const override;
};
