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
