#pragma once

#include <Windows.h>

class ZColor
{
private:
	COLORREF color;

public:
	ZColor();
	//初始化一个 ZColor 对象
	ZColor(BYTE R, BYTE G, BYTE B);

	operator COLORREF();
	void operator=(COLORREF color);

	//返回R值
	BYTE GetRVar();
	//返回G值
	BYTE GetGVar();
	//返回B值
	BYTE GetBVar();
};
