#pragma once

#include <Windows.h>
#include "ZString.h"

class ZImage
{
public:
	ZImage();
	//������Դ
	virtual void LoadRes(WORD ID) = 0;
	//���ļ��м�����Դ
	virtual void LoadResFromFile(ZString path) = 0;
};
