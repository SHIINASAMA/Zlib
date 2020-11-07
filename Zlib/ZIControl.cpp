#include "ZIControl.h"

ZString ZIControl::GetText()
{
	UINT len = GetWindowTextLengthW(this->hWnd);
	WChar *str = new WChar[len+1];
	GetWindowTextW(this->hWnd, str, len+1);
	str[len] = '\0';
	ZString temp;
	temp.Pause(str);
	return temp;
}

void ZIControl::SetText(ZString str)
{
	SetWindowText(this->hWnd, str);
}
