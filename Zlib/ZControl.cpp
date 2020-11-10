#include "ZControl.h"

void ZControl::RegClass()
{
	hInstance = GetModuleHandle(NULL);
	RegisterClassEx(&wcex);
}

void ZControl::Init(HWND hWnd)
{
	this->hWnd = CreateWindow(
		ClassName,
		Text,
		Style,
		Rect.A.X,
		Rect.A.Y,
		Rect.B.X - Rect.A.X,
		Rect.B.Y - Rect.A.Y,
		NULL,
		(HMENU)ID,
		hInstance,
		NULL
	);

	Font.Create(L"ÐÂËÎÌå");
	SetFont(Font);
}

void ZControl::StartLoop()
{
	ShowWindow(hWnd, SW_SHOWNORMAL);
	UpdateWindow(hWnd);
	MSG msg;
	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

ZControl::ZControl()
{
}

ZString ZControl::GetClassName()
{
	return this->ClassName;
}

ZString ZControl::GetText()
{
	UINT len = GetWindowTextLengthW(this->hWnd);
	WChar* str = new WChar[len + 1];
	GetWindowTextW(this->hWnd, str, len + 1);
	str[len] = L'\0';
	ZString temp;
	temp.Pause(str);
	return temp;
}

void ZControl::SetText(ZString str)
{
	SetWindowTextW(this->hWnd, str);
}

ZFont ZControl::GetFont()
{
	return this->Font;
}

void ZControl::SetFont(ZFont Font)
{
	this->Font = Font;
	SendMessage(hWnd, WM_SETFONT, (WPARAM)(HFONT)Font, 0);
}

ZRect ZControl::GetPosition()
{
	RECT rect;
	GetWindowRect(hWnd, &rect);
	return *new ZRect(rect.left, rect.top, rect.right, rect.bottom);
}

void ZControl::SetPosition(ZRect Rect)
{
	MoveWindow(
		hWnd, Rect.A.X, Rect.A.Y,
		Rect.B.X - Rect.A.X, Rect.B.Y - Rect.A.Y,TRUE);
}