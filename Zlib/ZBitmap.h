#pragma once
#include "ZImage.h"
class ZBitmap :public ZImage
{
private:
	HBITMAP hmap;

public:
	ZBitmap();
	//��ʼ��һ�� ZBitmap ����
	ZBitmap(ZString path);
	// ���� Bitmap ����ľ��
	void LoadRes(ZString path);
	//TODO:���һ�����Դ���Դ�м���λͼ�ķ���

	// ����һ�� BITMAP ����
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
