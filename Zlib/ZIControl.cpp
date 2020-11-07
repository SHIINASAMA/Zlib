#include "ZIControl.h"

ZString ZIControl::GetText()
{
	UINT len = GetWindowTextLengthW(this->hWnd);
	WChar *str = new WChar[len];
	GetWindowTextW(this->hWnd, str, len);
	ZString temp;
	temp.Pause(str);
	return temp;
}

void ZIControl::SetText(ZString str)
{
	SetWindowText(this->hWnd, str);
}
