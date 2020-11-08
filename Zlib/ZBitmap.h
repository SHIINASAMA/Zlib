#pragma once
#include "ZImage.h"
class ZBitmap : public ZImage
{
	BITMAP bmp;
public:
	HBITMAP hBmp;
	ZBitmap();
	operator HBITMAP();
	void LoadResource(ZString path);
	HBITMAP GetHandle();

	void Res();
};

