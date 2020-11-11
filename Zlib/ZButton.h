#pragma once
#include "ZControl.h"
class ZButton : public ZControl
{
protected:
	ZString Type = L"button";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	ZButton();
	ZButton(ZString Text, ZRect Rect, DWORD ID);
	ZButton(ZString Text, int X, int Y, int W, int H, DWORD ID);
	void Init(HWND hWnd);

	void SetIcon(ZIcon Icon);
};
