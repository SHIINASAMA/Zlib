#include "ZRect.h"

ZRect::ZRect(ZPoint A, ZPoint B)
{
	this->A = A;
	this->B = B;
}

ZRect::ZRect(int X1, int Y1, int X2, int Y2)
{
	ZPoint A = ZPoint(X1, Y1);
	ZPoint B = ZPoint(X2, Y2);
	ZRect(A, B);
}