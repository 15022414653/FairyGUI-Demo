/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "MeshFactory.h"

class FAIRYGUI_API FRoundedRectMesh : public IMeshFactory
{
public:
    MESHFACTORY_TYPE(FRoundedRectMesh, nullptr)

    FRoundedRectMesh();
    virtual ~FRoundedRectMesh() {}

    TOptional<FBox2D> DrawRect;
    float LineWidth;
    FColor LineColor;
    TOptional<FColor> FillColor;
    float TopLeftRadius;
    float TopRightRadius;
    float BottomLeftRadius;
    float BottomRightRadius;

    void OnPopulateMesh(FVertexHelper& Helper);
};