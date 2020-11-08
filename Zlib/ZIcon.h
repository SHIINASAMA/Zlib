#pragma once
#include "ZImage.h"

class ZIcon : public ZImage
{
	HICON icon;
public:
	operator HICON();
	void LoadResource(ZString path);
};

