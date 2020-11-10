#include "ZRect.h"

ZRect::ZRect()
{
}

ZRect::ZRect(ZPoint A, ZPoint B)
{
	this->A = A;
	this->B = B;
}

ZRect::ZRect(int X1, int Y1, int X2, int Y2)
{
	ZPoint A = ZPoint(X1, Y1);
	ZPoint B = ZPoint(X2, Y2);
	this->A = A;
	this->B = B;
}

ZSize ZRect::GetSize()
{
	int W = B.X - A.X;
	int H = B.Y - A.Y;
	return ZSize(W, H);
}

void ZRect::SetSize(ZSize Size)
{
	B.X = A.X + Size.W;
	B.Y = A.Y + Size.H;
}
