#pragma once
#include "ZImage.h"

class ZIcon : public ZImage
{
	HICON hIcon;
public:
	void operator=(HICON hIcon);
	operator HICON();

	//���� Icon ��Դ
	void LoadRes(ZString Path);
};
