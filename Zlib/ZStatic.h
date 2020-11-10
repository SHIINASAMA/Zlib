#pragma once
#include "ZControl.h"
class ZStatic : public ZControl
{
private:
	ZString Type;

public:
	ZStatic();
	ZStatic(ZString Text,ZRect Rect);
	ZStatic(ZString Text, int X, int Y, int W, int H);
	void Init(HWND hWnd);
};

