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
	ZButton(ZString Text, ZRect Rect, DWORDLONG ID);
	//初始化一个 ZButton 对象
	ZButton(ZString Text, int X, int Y, int W, int H, DWORDLONG ID);
	void Init(HWND hWnd);

	//TODO:添加enable功能
};
