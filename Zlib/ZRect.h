#pragma once
#include "ZPoint.h"

class ZRect
{
public:
	ZPoint A;
	ZPoint B;

	ZRect();
	ZRect(ZPoint A, ZPoint B);
	ZRect(int X1, int Y1, int X2, int Y2);
};

ZRect::ZRect()
{
}

