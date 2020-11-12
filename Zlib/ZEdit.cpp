#include "ZEdit.h"

ZEdit::ZEdit()
{
}

ZEdit::ZEdit(ZString Text, ZRect Rect, DWORDLONG ID)
{
	this->Text = Text;
	this->Rect = Rect;
	this->ID = ID;
}

ZEdit::ZEdit(ZString Text, int X, int Y, int W, int H, DWORDLONG ID)
{
	this->Text = Text;
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.SetSize(ZSize(W, H));
	this->Rect = Rect;
	this->ID = ID;
	this->Style = Style;
}

void ZEdit::Init(HWND hWnd)
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