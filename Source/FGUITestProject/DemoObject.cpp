/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/

#include "DemoObject.h"

void UDemoObject::OnDemoStart_Implementation()
{

}

void UDemoObject::OnDemoEnd_Implementation()
{

}

void UDemoObject::OnDemoTick_Implementation()
{

}

UWorld* UDemoObject::GetWorld() const {
    if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
        return GetOuter()->GetWorld();
    else
        return nullptr;
}