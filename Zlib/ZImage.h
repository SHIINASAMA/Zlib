#pragma once

#include <Windows.h>
#include "ZString.h"

class ZImage
{
public:
	ZImage();
	//���麯����������Դ
	virtual void LoadRes(ZString path) = 0;
};
