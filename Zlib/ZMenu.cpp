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

ZMenu::ZMenu()
{
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

void ZMenu::AddItem(ZMenuItem Item)
{
	Item.InitItem();
	AppendMenu(this->hMenu, this->Style, (UINT_PTR)Item.hMenu, this->Text);
}