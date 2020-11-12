#pragma once
#include "ZPoint.h"
#include "ZSize.h"

class ZRect
{
public:
	ZPoint A;
	ZPoint B;

	ZRect();
	//初始化一个 ZRect 对象
	ZRect(RECT Rect);
	//初始化一个 ZRect 对象
	ZRect(ZPoint A, ZPoint B);
	//初始化一个 ZRect 对象
	ZRect(long X1, long Y1, long X2, long Y2);

	//获取当前矩阵大小
	ZSize GetSize();
	//设置当前矩阵大小
	void SetSize(ZSize Size);

	//返回一个 RECT 对象
	RECT GetRect();

	operator RECT();
};
