#pragma once
#include "ZImage.h"

class ZIcon : public ZImage
{
	HICON hIcon;
public:
	void operator=(HICON hIcon);
	operator HICON();

	//���ļ��м��� Icon ��Դ
	void LoadResFromFile(ZString Path);

	//����Դ�м��� Icon ��Դ
	void LoadRes(WORD ID);
};
