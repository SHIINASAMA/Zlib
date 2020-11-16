#pragma once

#include <windows.h>

class ZPoint
{
public:
	int X = 0;
	int Y = 0;

	ZPoint();
	//实例化一个 ZPoint 对象
	ZPoint(int X, int Y);

	void operator=(POINT pt);
	operator POINT();
};
