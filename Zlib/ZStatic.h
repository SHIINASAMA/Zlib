#pragma once
#include "ZControl.h"
class ZStatic : public ZControl
{
protected:
	ZString Type = L"static";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	ZStatic();
	//初始化 ZStatic 对象
	ZStatic(ZString Text, ZRect Rect);
	//初始化 ZStatic 对象
	ZStatic(ZString Text, int X, int Y, int W, int H);
	void Init(HWND hWnd);
};