#pragma once
#include "ZImage.h"
class ZBitmap :public ZImage
{
private:
	HBITMAP hmap;

public:
	ZBitmap();
	// ���� Bitmap ����ľ��
	void LoadRes(ZString path);

	// ����һ�� BITMAP ����
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
