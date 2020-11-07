#pragma once
#include "ZString.h"

class ZIControl
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
	ZString GetText();
	void SetText(ZString str);
};