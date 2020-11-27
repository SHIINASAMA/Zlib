#pragma once
#include "ZRect.h"
#include "ZColor.h"
#include "ZIcon.h"
#include "ZBitmap.h"

class ZGraphics
{
public:
	//设置控件的背景是否是透明的,应在 WM_CTLCOLORSTATIC 中处理并返回
	static LRESULT SetBkTransparent(BOOL IsTransparent, WPARAM wParam);

	//设置刷新区域
	static BOOL InvalidateRect(HWND hWnd, ZRect Rect, BOOL B);
};