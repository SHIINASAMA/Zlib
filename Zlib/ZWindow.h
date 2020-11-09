#pragma once
#include "ZControl.h"

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

class ZWindow : public ZControl
{
protected:
	void RegClass();
	void Init();
	void StartLoop();

public:
	ZWindow(ZString Text,ZString Name,ZRect Rect,WNDPROC WndProc);
	ZWindow(ZString Text, ZRect Rect, UINT Style, WNDCLASSEX wcex);
	~ZWindow();

	void InitWindow();
	void SetIcon(ZIcon Icon);
	void SetIconEx(ZIcon Icon);
};

