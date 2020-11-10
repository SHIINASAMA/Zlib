#pragma once
#include "ZControl.h"

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

class ZWindow : public ZControl
{
protected:
	void RegClass();
	void StartLoop();

public:
	ZWindow(ZString Text,ZString Name,int X,int Y,int W,int H,WNDPROC WndProc);
	ZWindow(ZString Text, int X, int Y, int W, int H, UINT Style, WNDCLASSEX wcex);
	~ZWindow();

	void Init(HWND hWnd);

	void Create();
	void Run();

	void SetIcon(ZIcon Icon);
	void SetIconEx(ZIcon Icon);

	void AddControl(ZControl* Con);
	void RemoveControl(HWND hWnd);
};

