#pragma once
#include "ZControl.h"

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

class ZWindow : public ZControl
{
protected:
	void RegClass();
	void StartLoop();

public:
	ZWindow(ZString Text,ZString Name,ZRect Rect,WNDPROC WndProc);
	ZWindow(ZString Text, ZRect Rect, UINT Style, WNDCLASSEX wcex);
	~ZWindow();

	void Init(HWND hWnd);

	void Create();
	void Run();

	void SetIcon(ZIcon Icon);
	void SetIconEx(ZIcon Icon);

	void AddControl(ZControl* Con);
	void RemoveControl(HWND hWnd);
};

