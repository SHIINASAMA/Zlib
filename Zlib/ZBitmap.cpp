#include "ZBitmap.h"

ZBitmap::ZBitmap(ZString path)
{
	LoadResFromFile(path);
}

ZBitmap::ZBitmap(WORD ID)
{
	this->hmap = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(ID));
}

void ZBitmap::LoadRes(WORD ID)
{
	this->hmap = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(ID));
}

void ZBitmap::LoadResFromFile(ZString path)
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