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
	ZString Type;
	DWORD Style;
	DWORDLONG ID;
	ZRect Rect;
	ZFont Font;

	void RegClass();
	void StartLoop();

public:
	ZControl();

	virtual void Init(HWND hWnd);

	ZString GetClassName();
	HWND GetHandle();

	ZString GetText();
	void SetText(ZString str);

	ZFont GetFont();
	void SetFont(ZFont Font);

	ZRect GetPosition();
	void SetPosition(ZRect Rect);

	ZSize GetSize();
	void Size(ZSize Size);
};

