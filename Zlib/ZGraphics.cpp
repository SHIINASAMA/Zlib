#include "ZGraphics.h"

LRESULT ZGraphics::SetBkTransparent(BOOL IsTransparent, WPARAM wParam)
{
	HDC hdc = (HDC)wParam;
	if (IsTransparent)
	{
		SetBkMode(hdc, TRANSPARENT);
	}
	else
	{
		SetBkMode(hdc, OPAQUE);
	}
	return (LRESULT)GetStockObject(NULL_BRUSH);
}

BOOL ZGraphics::InvalidateRect(HWND hWnd, ZRect Rect, BOOL value)
{
	RECT rect = Rect;
	return ::InvalidateRect(hWnd, &rect, value);
}