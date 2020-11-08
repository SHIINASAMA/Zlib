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
	UINT ID;

	ZString GetText();
	void SetText(ZString str);
	void Create(HWND hWnd);

protected:
	void ChangeFont();
};