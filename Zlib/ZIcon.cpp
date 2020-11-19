#include "ZIcon.h"

void ZIcon::operator=(HICON hIcon)
{
	this->hIcon = hIcon;
}

ZIcon::operator HICON()
{
	return this->hIcon;
}

ZIcon::ZIcon()
{
}

ZIcon::ZIcon(ZString path)
{
	this->hIcon = (HICON)LoadImage(
		NULL,
		path,
		IMAGE_ICON,
		0, 0,
		LR_DEFAULTCOLOR |
		LR_CREATEDIBSECTION |
		LR_LOADFROMFILE
	);
}

ZIcon::ZIcon(WORD ID)
{
	this->hIcon = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(ID));
}

void ZIcon::LoadResFromFile(ZString Path)
{
	this->hIcon = (HICON)LoadImage(
		NULL,
		Path,
		IMAGE_ICON,
		0, 0,
		LR_DEFAULTCOLOR |
		LR_CREATEDIBSECTION |
		LR_LOADFROMFILE
	);
}

void ZIcon::LoadRes(WORD ID)
{
	this->hIcon = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(ID));
}