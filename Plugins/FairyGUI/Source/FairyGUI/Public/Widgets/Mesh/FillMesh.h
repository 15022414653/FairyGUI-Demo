/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "MeshFactory.h"
#include "UI/FieldTypes.h"

class FAIRYGUI_API FFillMesh : public IMeshFactory
{
public:
    MESHFACTORY_TYPE(FFillMesh, nullptr)

    FFillMesh();
    virtual ~FFillMesh() {}

    EFillMethod Method;
    int32 Origin;
    bool bClockwise;
    float Amount;

    void OnPopulateMesh(FVertexHelper& Helper);
};