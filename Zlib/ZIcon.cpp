#include "ZIcon.h"

ZIcon::operator HICON()
{
	return this->icon;
}

void ZIcon::LoadResource(ZString path)
{
	this->icon = (HICON)LoadImage(
		NULL,
		path,
		IMAGE_ICON,
		0, 0,
		LR_DEFAULTCOLOR | 
		LR_CREATEDIBSECTION | 
		LR_LOADFROMFILE
	);
}
