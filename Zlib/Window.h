#pragma once
#include <Windows.h>
#include "ZString.h"

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

typedef struct ZWindowInfo {
	int X;
	int Y;
	int W;
	int H;
	
	ZString ClassName;
	ZString Title;

	HICON Icon = NULL;
	HICON IconSm = NULL;
	HCURSOR Cursor = NULL;
	HBRUSH BrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	UINT Style = WS_OVERLAPPEDWINDOW;

	WNDPROC WndProc;
}ZWindowInfo;

class ZWindow 
{
	HWND hWnd;
	HINSTANCE hInstance;
	ZWindowInfo Info;

public:
	// 构造函数
	~ZWindow();

	// 初始化函数
	void ZInit(ZWindowInfo Info);

	// 创建窗口
	void ZCreateWindow();

private:
	// 注册窗口
	int ZRegisterClassZ();

	// 初始化Instance句柄
	void ZInitInstance();
};