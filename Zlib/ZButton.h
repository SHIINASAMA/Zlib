#pragma once
#include "ZControl.h"
class ZButton : public ZControl
{
protected:
	ZString Type = L"button";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	ZButton();
	//初始化一个 ZButton 对象
	ZButton(ZString Text, ZRect Rect, DWORD ID);
	//初始化一个 ZButton 对象
	ZButton(ZString Text, int X, int Y, int W, int H, DWORD ID);
	void Init(HWND hWnd);

	//TODO:添加enable功能
};
