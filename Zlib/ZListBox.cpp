#include "ZListBox.h"

ZListBox::ZListBox()
{
}

ZListBox::ZListBox(ZRect rect, DWORD Style)
{
	this->Rect = rect;
	this->Style = Style;
}

ZListBox::ZListBox(int X, int Y, int W, int H, DWORD Style)
{
	ZRect rect;
	rect.A.X = X;
	rect.A.Y = Y;
	rect.SetSize(ZSize(W, H));
	this->Rect = rect;
	this->Style = Style;
}

void ZListBox::Init(HWND hWnd)
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

void ZListBox::AddItem(ZString str)
{
	SendMessage(this->hWnd, LB_ADDSTRING, 0, (LPARAM)str.ToWString());
}

void ZListBox::RemoveAt(UINT Pos)
{
	SendMessage(this->hWnd, LB_DELETESTRING, Pos, NULL);
}

void ZListBox::Insert(UINT Pos, ZString str)
{
	SendMessage(this->hWnd, LB_INSERTSTRING, Pos, (LPARAM)str.ToWString());
}

ZString ZListBox::GetItemText(UINT Pos)
{
	UINT len = SendMessage(this->hWnd, LB_GETTEXTLEN, Pos, 0);
	WChar* str = new WChar[len];
	SendMessage(this->hWnd, LB_GETTEXT, Pos, (LPARAM)str);
	return ZString(str);
}

UINT ZListBox::GetSelectedIndex()
{
	return SendMessage(this->hWnd, LB_GETCURSEL, 0, 0);
}

void ZListBox::SetSelectedIndex(UINT Pos)
{
	SendMessage(this->hWnd, LB_SETCURSEL, Pos, 0);
}

ZString ZListBox::GetSelectedText()
{
	UINT Pos = GetSelectedIndex();
	ZString str = GetItemText(Pos);
	return str;
}

void ZListBox::RemoveAll()
{
	SendMessage(this->hWnd, LB_RESETCONTENT, 0, 0);
}

UINT ZListBox::GetCount()
{
	UINT count = SendMessage(this->hWnd, LB_GETCOUNT, 0, 0);
	return count;
}