#pragma once
#include "ZControl.h"
class ZButton : public ZControl
{
protected:
	ZString Type = L"button";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	ZButton();
	//��ʼ��һ�� ZButton ����
	ZButton(ZString Text, ZRect Rect, DWORDLONG ID);
	//��ʼ��һ�� ZButton ����
	ZButton(ZString Text, int X, int Y, int W, int H, DWORDLONG ID);
	void Init(HWND hWnd);

	//TODO:���enable����
};
