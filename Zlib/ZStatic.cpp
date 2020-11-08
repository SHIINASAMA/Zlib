#include "ZStatic.h"

ZStatic::ZStatic()
{
	this->Type = L"static";
	this->Style = WS_VISIBLE | WS_CHILD;
}

void ZStatic::Create(HWND hWnd)
{
	this->hWnd = CreateWindow(Type,
		Text,
		Style,
		X,
		Y,
		W,
		H,
		hWnd,
		(HMENU)ID,
		(HINSTANCE)GetWindowLong(hWnd, -6),
		NULL
	);
	ChangeFont();
}