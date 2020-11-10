#include "ZButton.h"

ZButton::ZButton()
{
}

ZButton::ZButton(ZString Text, ZRect Rect, DWORD ID)
{
	this->Text = Text;
	this->Rect = Rect;
}

ZButton::ZButton(ZString Text, int X, int Y, int W, int H, DWORD ID)
{
	this->Text = Text;
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.SetSize(ZSize(W, H));
	this->Rect = Rect;
}

void ZButton::Init(HWND hWnd)
{
	this->hWnd = CreateWindow(
		Type,
		Text,
		Style,
		Rect.A.X,
		Rect.A.Y,
		Rect.GetSize().W,
		Rect.GetSize().H,
		hWnd,
		(HMENU)ID,
		(HINSTANCE)GetWindowLong(hWnd,-6),
		NULL
	);

	Font.Create(L"ÐÂËÎÌå");
	SetFont(Font);
}
