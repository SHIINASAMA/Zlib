#pragma once

#include "ZControl.h"

class ZEdit : public ZControl
{
protected:
	ZString Type = L"edit";
	DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER;

public:
	ZEdit();
	//ʵ����һ�� ZEdit ����
	ZEdit(ZString Text, ZRect Rect, DWORDLONG ID, DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER);
	//ʵ����һ�� ZEdit ����
	ZEdit(ZString Text, int X, int Y, int W, int H, DWORDLONG ID, DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER);

	void Init(HWND hWnd);
};
