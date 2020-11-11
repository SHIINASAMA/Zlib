#pragma once

#include <Windows.h>

class ZSize
{
public:
	int W = 0;
	int H = 0;

	ZSize();
	//初始化一个 ZSize 对象
	ZSize(int W, int Y);
};