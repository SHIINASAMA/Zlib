#pragma once
#include <Windows.h>
#include "ZControl.h"

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

typedef void (*AppProc)(HWND, WPARAM, LPARAM);

typedef struct ZWindowInfo {
	int X;
	int Y;
	int W;
	int H;

	// 字符类
	ZString ClassName;
	ZString Title;

	// 资源类
	HICON Icon = NULL;
	HICON IconSm = NULL;
	HCURSOR Cursor = NULL;
	HBRUSH BrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	UINT Style = WS_OVERLAPPEDWINDOW;

	WNDPROC WndProc;
}ZWindowInfo;

static AppProc MyProc;

class ZWindow
{
	// 窗口句柄
	HWND hWnd;
	HINSTANCE hInstance;

	// 转发到的函数指针

public:
	// 窗口信息
	ZWindowInfo Info;

	// 构造函数
	~ZWindow();

	// 初始化函数
	void ZInit();

	// 获取窗口句柄
	HWND ZGetHandle();

	// 开始消息循环
	void ZStartLoop();

	// 添加控件
	void ZAddControl(ZControl* ctrl);

	// 移除控件
	void ZRemoveControl(ZControl* ctrl);

	void ZRenoveControl(HWND hWnd);

	// 获取文本
	ZString GetText();

	// 设置文本
	void SetText(ZString str);

protected:
	// 注册窗口
	int ZRegisterClass();

	// 创建窗口
	void ZCreateWindow();

	// 初始化Instance句柄
	void ZInitInstance();

	// 初始化字体
	void ChangeFont();
};