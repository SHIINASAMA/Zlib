#pragma once
#include "ZControl.h"
#include "ZBitmap.h"

class ZPictureBox : public ZControl
{
public:
	HINSTANCE hInstance;
	ZPictureBox();
	void Create(HWND hWnd);
	void SetImage(ZBitmap bmp);

	int ZRegisterClass();

	static LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};

