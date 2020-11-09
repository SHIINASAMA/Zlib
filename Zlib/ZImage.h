#pragma once

#include <Windows.h>
#include "ZString.h"

class ZImage
{
public:
	ZImage();
	virtual void LoadRes(ZString path) = 0;
};

