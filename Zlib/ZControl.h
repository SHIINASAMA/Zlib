#pragma once
#include <Windows.h>
#include "ZGraphics.h"
#include "ZFont.h"

class ZControl
{
protected:
	HWND hWnd;
	HINSTANCE hInstance;
	WNDCLASSEX wcex;

	ZString ClassName;
	ZString Text;
	UINT Style;
	ZRect Rect;

	ZFont Font;

	void RegClass();
	void Init();
	void StartLoop();

public:
	ZControl();

	ZString GetClassName();

	ZString GetText();
	void SetText(ZString str);

	ZFont GetFont();
	void SetFont(ZFont Font);

	ZRect GetPosition();
	void SetPosition(ZRect Rect);
};

