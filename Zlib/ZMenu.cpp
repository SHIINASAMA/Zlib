#include "ZMenu.h"

void ZMenu::Init(HWND hWnd)
{
	SetMenu(hWnd, this->hMenu);
	//Font.Create(L"新宋体");
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

//todo:重构ZMenu类，继承ZItem类
void ZMenu::AddItem(ZItem* Item)
{
}

ZItem* ZMenu::GetItemAt(UINT Pos)
{
}

void ZMenu::InsertItem(UINT Pos, ZItem* Item)
{
}

void ZMenu::RemoveAt(UINT Pos)
{
}

void ZMenu::InitItem(HWND hWnd)
{
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