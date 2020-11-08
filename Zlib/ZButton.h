#pragma once
#include "ZControl.h"

class ZButton : public ZControl
{
public:
	ZButton();
private:
	void Create(HWND hWnd);
};