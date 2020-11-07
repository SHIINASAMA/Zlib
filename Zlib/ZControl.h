#pragma once
#include "ZString.h"

class ZControl
{
public:
	HWND hWnd;
	int X;
	int Y;
	int W;
	int H;
	ZString Text;
	ZString Type;
	UINT Style;
	HMENU ID;

	virtual void Create(HWND hWnd) = 0;
};