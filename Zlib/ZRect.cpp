#include "ZRect.h"

ZRect::ZRect()
{
}

ZRect::ZRect(RECT Rect)
{
	this->A.X = Rect.left;
	this->A.Y = Rect.top;
	this->B.X = Rect.right;
	this->B.Y = Rect.bottom;
}

ZRect::ZRect(ZPoint A, ZPoint B)
{
	this->A = A;
	this->B = B;
}

ZRect::ZRect(long X1, long Y1, long X2, long Y2)
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

RECT ZRect::GetRect()
{
	RECT rect;
	rect.left = A.X;
	rect.top = A.Y;
	rect.right = B.X;
	rect.bottom = B.Y;
	return rect;
}

ZRect::operator RECT()
{
	return GetRect();
}