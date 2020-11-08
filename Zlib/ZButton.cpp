#include "ZButton.h"

ZButton::ZButton()
{
	this->Type = L"button";
	this->Style = WS_VISIBLE | WS_CHILD;
}

void ZButton::Create(HWND hWnd)
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
	ChangeFont();
}
