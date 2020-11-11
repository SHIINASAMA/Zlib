#include "ZIcon.h"

void ZIcon::operator=(HICON hIcon)
{
	this->hIcon = hIcon;
}

ZIcon::operator HICON()
{
	return this->hIcon;
}

void ZIcon::LoadRes(ZString Path)
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