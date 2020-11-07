#pragma once
#include "ZString.h"

class ZControl
{
public:
	int X;
	int Y;
	int W;
	int H;
	ZString Text;
	ZString Type;
	UINT Style;
	HMENU ID;
};