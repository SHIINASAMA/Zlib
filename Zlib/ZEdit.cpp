#include "ZEdit.h"

ZEdit::ZEdit()
{
	this->Type = L"edit";
	this->Style = WS_CHILD | WS_VISIBLE | WS_BORDER;
}

void ZEdit::Create(HWND hWnd)
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
}
