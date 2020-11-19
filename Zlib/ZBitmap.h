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
	//初始化一个 ZBitmap 对象
	ZBitmap(WORD ID);

	//从资源中加载 bmp 位图
	void LoadRes(WORD ID);
	//从文件中加载 bmp 位图
	void LoadResFromFile(ZString path);

	// 返回一个 BITMAP 对象
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
