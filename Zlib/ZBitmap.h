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

	//����Դ�м��� bmp λͼ
	void LoadRes(WORD ID);
	//���ļ��м��� bmp λͼ
	void LoadResFromFile(ZString path);

	// ����һ�� BITMAP ����
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
