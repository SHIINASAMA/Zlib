#pragma once

#include <Windows.h>

class ZColor
{
private:
	COLORREF color;

public:
	ZColor();
	ZColor(BYTE R, BYTE G, BYTE B);

	operator COLORREF();
	void operator=(COLORREF color);

	BYTE GetRVar();
	BYTE GetGVar();
	BYTE GetBVar();
};

