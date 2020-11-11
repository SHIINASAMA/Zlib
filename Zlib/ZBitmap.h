#pragma once
#include "ZImage.h"
class ZBitmap :public ZImage
{
private:
	HBITMAP hmap;

public:
	ZBitmap();
	// 加载 Bitmap 对象的句柄
	void LoadRes(ZString path);

	// 返回一个 BITMAP 对象
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
