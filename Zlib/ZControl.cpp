#include "ZControl.h"

void ZControl::Create(HWND hWnd)
{
	this->hWnd = CreateWindow(Type,
		Text,
		Style,
		X,
		Y,
		W,
		H,
		hWnd,
		ID,
		(HINSTANCE)GetWindowLong(hWnd, -6),
		NULL
	);
	this->ChangeFont();
}

ZString ZControl::GetText()
{
	UINT len = GetWindowTextLengthW(this->hWnd);
	WChar *str = new WChar[len+1];
	GetWindowTextW(this->hWnd, str, len+1);
	str[len] = '\0';
	ZString temp;
	temp.Pause(str);
	return temp;
}

void ZControl::SetText(ZString str)
{
	SetWindowText(this->hWnd, str);
}

void ZControl::ChangeFont()
{
	HFONT hFont = CreateFont(12, 0, 0, 0, 0, 0, 0, 0,
		GB2312_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY, DEFAULT_PITCH, L"ÐÂËÎÌå");
	SendMessage(hWnd, WM_SETFONT, (WPARAM)hFont, 0);
}
