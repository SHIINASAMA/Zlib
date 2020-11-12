#include "ZRange.h"

ZRange::ZRange()
{
}

ZRange::ZRange(int X1, int X2)
{
	this->X1 = X1;
	this->X2 = X2;
}

void ZRange::operator=(PBRANGE Range)
{
	this->X1 = Range.iLow;
	this->X2 = Range.iHigh;
}

ZRange::operator PBRANGE()
{
	PBRANGE range;
	range.iLow = X1;
	range.iHigh = X2;
	return range;
}