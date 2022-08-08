/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FFairyGUIModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

    FDelegateHandle EndPieDelegateHandle;
};
