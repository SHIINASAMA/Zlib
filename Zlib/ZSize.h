#pragma once

#include <Windows.h>

class ZSize
{
public:
	long W = 0;
	long H = 0;

	ZSize();
	//初始化一个 ZSize 对象
	ZSize(long W, long Y);
};