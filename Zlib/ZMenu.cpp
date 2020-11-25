#include "ZMenu.h"

void ZMenu::Init(HWND hWnd)
{
	SetMenu(hWnd, this->hMenu);
	//Font.Create(L"ÐÂËÎÌå");
	//SetFont(Font);
}

void ZMenu::ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag)
{
	POINT pt;
	pt.x = X;
	pt.y = Y;
	ClientToScreen(hWnd, (LPPOINT)&pt);
	TrackPopupMenu(this->hMenu, Flag, pt.x, pt.y, 0, hWnd, NULL);
}

void ZMenu::AddItem(ZItem* Item)
{
	AppendMenu(this->hMenu,
		((ZMenu*)Item)->Style,
		NULL,
		((ZMenu*)Item)->Text
	);
}

ZMenu ZMenu::GetItemAt(UINT Pos)
{
	HMENU hMenu = GetSubMenu(this->hMenu, Pos);
	ZMenu m;
	m.hMenu = hMenu;
	return m;
}

void ZMenu::InsertItem(UINT Pos, ZItem* Item)
{
	InsertMenu(this->hMenu,
		Pos,
		MF_BYPOSITION,
		(UINT_PTR)((ZMenu*)Item)->hMenu,
		((ZMenu*)Item)->Text
	);
}

void ZMenu::RemoveAt(UINT Pos)
{
	RemoveMenu(this->hMenu, Pos, MF_BYPOSITION);
}

void ZMenu::InitItem()
{
	AppendMenu(this->hMenu, Style, ID, Text);
}

ZMenu::operator HMENU()
{
	return this->hMenu;
}

void ZMenu::operator=(HMENU hMenu)
{
	this->hMenu = hMenu;
}

ZMenu::ZMenu()
{
	this->hMenu = CreateMenu();
}

ZMenu::ZMenu(ZString Text, DWORDLONG ID, DWORD Style)
{
	this->Text = Text;
	this->ID = ID;
	this->Style = Style;
	this->hMenu = CreateMenu();
	//AppendMenu(hMenu, Style, ID, Text);
}

HWND ZMenu::GetHandle()
{
	return (HWND)this->hMenu;
}

void ZMenu::SetTextPre(ZString str)
{
	this->Text = str;
}

void ZMenu::SetIDPre(UINT ID)
{
	this->ID = ID;
}

void ZMenu::SetStylePre(DWORD Style)
{
	this->Style = Style;
}