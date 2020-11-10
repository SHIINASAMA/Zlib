#include "ZStatic.h"

ZStatic::ZStatic()
{
	this->Type = L"static";
	this->Style = WS_CHILD | WS_VISIBLE;
}

ZStatic::ZStatic(ZString Text, ZRect Rect)
{
	this->Type = L"static";
	this->Style = WS_CHILD | WS_VISIBLE;
	this->Text = Text;
	this->Rect = Rect;
}

ZStatic::ZStatic(ZString Text, int X, int Y, int W, int H)
{
	this->Type = L"static";
	this->Style = WS_CHILD | WS_VISIBLE;
	this->Text = Text;
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.SetSize(ZSize(W, H));
	this->Rect = Rect;
}

void ZStatic::Init(HWND hWnd)
{
	this->hWnd = CreateWindow(
		Type,
		Text,
		Style,
		Rect.A.X,
		Rect.A.Y,
		Rect.B.X - Rect.A.X,
		Rect.B.Y - Rect.A.Y,
		hWnd,
		(HMENU)ID,
		(HINSTANCE)GetWindowLong(hWnd, -6),
		NULL
	);

	int e = GetLastError();

	Font.Create(L"ÐÂËÎÌå");
	SetFont(Font);
}
