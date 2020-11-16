#include "ZMenu.h"

void ZMenu::Init(HWND hWnd)
{
	SetMenu(hWnd, this->hMenu);
	//Font.Create(L"ÐÂËÎÌå");
	//SetFont(Font);
}

void ZMenu::InitItem()
{
	AppendMenu(this->hMenu, Style, ID, Text);
}

void ZMenu::ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag)
{
	POINT pt;
	pt.x = X;
	pt.y = Y;
	ClientToScreen(hWnd, (LPPOINT)&pt);
	TrackPopupMenu(this->hMenu, Flag, pt.x, pt.y, 0, hWnd, NULL);
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

void ZMenu::AddSubItem(ZMenuItem Item)
{
	Item.InitItem();
	AppendMenu(this->hMenu, this->Style, (UINT_PTR)Item.hMenu, this->Text);
}

void ZMenu::AddItem(ZMenuItem Item)
{
	Item.InitItem();
	AppendMenu(this->hMenu, Item.Style, Item.ID, Item.Text);
}

ZMenu ZMenu::GetSubItem(UINT Pos)
{
	HMENU h = GetSubMenu(this->hMenu, Pos);
	ZMenu t;
	t.hMenu = h;
	return t;
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