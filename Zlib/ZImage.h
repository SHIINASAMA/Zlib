#pragma once

#include <Windows.h>
#include "ZString.h"

class ZImage
{
public:
	ZImage();
	//纯虚函数：加载资源
	virtual void LoadRes(ZString path) = 0;
};
