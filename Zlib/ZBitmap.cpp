#include "ZBitmap.h"

ZBitmap::ZBitmap()
{
}

ZBitmap::operator HBITMAP()
{
	return this->hBmp;
}

void ZBitmap::LoadResource(ZString path)
{
	this->hBmp = (HBITMAP)LoadImage(
		NULL,
		path,
		IMAGE_BITMAP,
		0, 0,
		LR_LOADFROMFILE | LR_CREATEDIBSECTION
	);
}

HBITMAP ZBitmap::GetHandle()
{
	return this->hBmp;
}
