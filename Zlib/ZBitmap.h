#pragma once
#include "ZImage.h"
class ZBitmap :public ZImage
{
private:
	HBITMAP hmap;

public:
	ZBitmap();
	//初始化一个 ZBitmap 对象
	ZBitmap(ZString path);
	// 加载 Bitmap 对象的句柄
	void LoadRes(ZString path);
	//TODO:添加一个可以从资源中加载位图的方法

	// 返回一个 BITMAP 对象
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
