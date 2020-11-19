#pragma once
#include "ZImage.h"

class ZIcon : public ZImage
{
	HICON hIcon;
public:
	void operator=(HICON hIcon);
	operator HICON();

	ZIcon();
	//初始化一个ZIcon对象
	ZIcon(ZString path);
	//初始化一个ZIcon对象
	ZIcon(WORD ID);

	//从文件中加载 Icon 资源
	void LoadResFromFile(ZString Path);
	//从资源中加载 Icon 资源
	void LoadRes(WORD ID);
};
