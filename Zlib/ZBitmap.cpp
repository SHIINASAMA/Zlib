#include "ZBitmap.h"

ZBitmap::ZBitmap()
{
}

ZBitmap::ZBitmap(ZString path)
{
	LoadRes(path);
}

void ZBitmap::LoadRes(ZString path)
{
	this->hmap = (HBITMAP)LoadImage(
		NULL,
		path,
		IMAGE_BITMAP,
		0, 0,
		LR_LOADFROMFILE | LR_CREATEDIBSECTION
	);
}

BITMAP ZBitmap::GetBitmap()
{
	BITMAP bmp;
	GetObject(hmap, sizeof(bmp), &bmp);
	return  bmp;
}

void ZBitmap::operator=(HBITMAP hBmp)
{
	this->hmap = hBmp;
}

ZBitmap::operator HBITMAP()
{
	return this->hmap;
}