#pragma once
#include "ZControl.h"
class ZStatic : public ZControl
{
protected:
	ZString Type = L"static";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	ZStatic();
	ZStatic(ZString Text,ZRect Rect);
	ZStatic(ZString Text, int X, int Y, int W, int H);
	void Init(HWND hWnd);
};

