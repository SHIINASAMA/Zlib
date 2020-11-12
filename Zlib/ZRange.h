#pragma once
#include <Windows.h>
#include <Commctrl.h>
class ZRange
{
public:
	int X1;
	int X2;

	ZRange();
	//初始化 ZRange 对象
	ZRange(int X1, int X2);

	void operator=(PBRANGE Range);
	operator PBRANGE();
};
