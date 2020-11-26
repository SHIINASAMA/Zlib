#include "ZComboBox.h"

ZComboBox::ZComboBox()
{
}

ZComboBox::ZComboBox(int X, int Y, int W, int H, DWORD Style)
{
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.SetSize(ZSize(W, H));
	this->Rect = Rect;
	this->Style = Style;
}

ZComboBox::ZComboBox(ZRect Rect, DWORD Style)
{
	this->Rect = Rect;
	this->Style = Style;
}

void ZComboBox::Init(HWND hWnd)
{
	this->hWnd = CreateWindow(
		Type,
		NULL,
		Style,
		Rect.A.X,
		Rect.A.Y,
		Rect.GetSize().W,
		Rect.GetSize().H,
		hWnd,
		NULL,
		NULL,
		NULL
	);

	Font.Create(L"ÐÂËÎÌå");
	SetFont(Font);
}

void ZComboBox::AddItem(ZString str)
{
	SendMessage(
		this->hWnd,
		CB_ADDSTRING,
		0,
		(LPARAM)str.ToWString()
	);
}

void ZComboBox::RemoveAt(UINT Pos)
{
	SendMessage(
		this->hWnd,
		CB_DELETESTRING,
		Pos,
		0
	);
}

void ZComboBox::Insert(UINT Pos, ZString str)
{
	SendMessage(
		this->hWnd,
		CB_INSERTSTRING,
		Pos,
		(LPARAM)str.ToWString()
	);
}

ZString ZComboBox::GetItemText(UINT Pos)
{
	UINT len = SendMessage(this->hWnd, CB_GETLBTEXTLEN, Pos, 0);
	WChar* str = new WChar[len];
	SendMessage(this->hWnd, CB_GETLBTEXT, Pos, (LPARAM)str);
	return ZString(str);
}

UINT ZComboBox::GetSelectedIndex()
{
	UINT temp = SendMessage(
		this->hWnd,
		CB_GETCURSEL,
		0,
		0
	);
	return temp;
}

void ZComboBox::SetSelectedIndex(UINT Pos)
{
	SendMessage(
		this->hWnd,
		CB_SETCURSEL,
		Pos,
		0
	);
}

ZString ZComboBox::GetSelectedText()
{
	UINT Pos = GetSelectedIndex();
	return GetItemText(Pos);
}

void ZComboBox::RemoveAll()
{
	SendMessage(this->hWnd, CB_RESETCONTENT, 0, 0);
}

UINT ZComboBox::GetCount()
{
	UINT count = SendMessage(this->hWnd, CB_GETCOUNT, 0, 0);
	return count;
}