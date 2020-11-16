#include "ZMenu.h"

void ZMenu::Init(HWND hWnd)
{
	SetMenu(hWnd, this->hMenu);
	//Font.Create(L"������");
	//SetFont(Font);
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