#pragma once

#include <windows.h>

class ZPoint
{
public:
	int X = 0;
	int Y = 0;

	ZPoint();
	//ʵ����һ�� ZPoint ����
	ZPoint(int X, int Y);

	void operator=(POINT pt);
	operator POINT();
};
