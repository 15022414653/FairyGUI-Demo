/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "GearBase.h"

class FAIRYGUI_API FGearFontSize : public FGearBase
{
public:
    FGearFontSize(UGObject* InOwner);
    virtual ~FGearFontSize();

    virtual void Apply() override;
    virtual void UpdateState() override;

protected:
    virtual void AddStatus(const FString& PageID, FByteBuffer* Buffer) override;
    virtual void Init() override;

private:
    TMap<FString, int32> Storage;
    int32 Default;
};