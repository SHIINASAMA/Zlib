#pragma once

#include <Windows.h>
#include "ZString.h"

class ZImage
{
public:
	ZImage();
	//加载资源
	virtual void LoadRes(WORD ID) = 0;
	//从文件中加载资源
	virtual void LoadResFromFile(ZString path) = 0;
};
