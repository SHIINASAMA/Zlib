#include "ZColor.h"

ZColor::ZColor(BYTE R, BYTE G, BYTE B)
{
	this->color = RGB(R, G, B);
}

ZColor::operator COLORREF()
{
	return this->color;
}

void ZColor::operator=(COLORREF color)
{
	this->color = color;
}

BYTE ZColor::GetRVar()
{
	return GetRValue(color);
}

BYTE ZColor::GetGVar()
{
	return GetGValue(color);
}

BYTE ZColor::GetBVar()
{
	return GetBValue(color);
}