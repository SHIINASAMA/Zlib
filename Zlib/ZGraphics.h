#pragma once
#include "ZRect.h"
#include "ZColor.h"
#include "ZIcon.h"
#include "ZBitmap.h"

class ZGraphics
{
public:
	//设置控件的背景是否是透明的
	static LRESULT SetBkTransparent(BOOL IsTransparent, WPARAM wParam);
};