#include "ZPoint.h"

ZPoint::ZPoint()
{
}

ZPoint::ZPoint(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

void ZPoint::operator=(POINT pt)
{
	this->X = pt.x;
	this->Y = pt.y;
}

ZPoint::operator POINT()
{
	POINT pt;
	pt.x = this->X;
	pt.y = this->Y;
	return pt;
}