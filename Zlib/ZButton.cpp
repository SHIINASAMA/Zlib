#include "ZButton.h"

ZButton::ZButton(ZString Text, ZRect Rect, DWORDLONG ID)
{
	this->Text = Text;
	this->Rect = Rect;
	this->ID = ID;
}

ZButton::ZButton(ZString Text, int X, int Y, int W, int H, DWORDLONG ID)
{
	this->Text = Text;
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.SetSize(ZSize(W, H));
	this->Rect = Rect;
	this->ID = ID;
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
		(HINSTANCE)GetWindowLong(hWnd, -6),
		NULL
	);

	Font.Create(L"ÐÂËÎÌå");
	SetFont(Font);
}

void ZButton::SetEnable(BOOL Enable)
{
	/*long style = getwindowlong(this->hwnd, gwl_style);
	if (enable)
	{
		style &= ~ws_disabled;
	}
	else
	{
		style |= ws_disabled;
	}
	setwindowlong(this->hwnd, gwl_style, style);*/

	EnableWindow(this->hWnd, Enable);
}