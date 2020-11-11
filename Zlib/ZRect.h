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
	ZRect(ZPoint A, ZPoint B);
	//初始化一个 ZRect 对象
	ZRect(int X1, int Y1, int X2, int Y2);

	//获取当前矩阵大小
	ZSize GetSize();
	//设置当前矩阵大小
	void SetSize(ZSize Size);
};
