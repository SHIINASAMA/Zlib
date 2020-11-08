#pragma once
#include <Windows.h>
#include "ZWindow.h"	

class ZImage 
{
public:
	virtual void LoadResource(ZString path) = 0;
};

