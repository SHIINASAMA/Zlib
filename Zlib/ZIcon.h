#pragma once
#include "ZImage.h"

class ZIcon : public ZImage
{
	HICON hIcon;
public:
	void operator=(HICON hIcon);
	operator HICON();

	ZIcon();
	//��ʼ��һ��ZIcon����
	ZIcon(ZString path);
	//��ʼ��һ��ZIcon����
	ZIcon(WORD ID);

	//���ļ��м��� Icon ��Դ
	void LoadResFromFile(ZString Path);
	//����Դ�м��� Icon ��Դ
	void LoadRes(WORD ID);
};
