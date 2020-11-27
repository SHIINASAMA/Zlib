#pragma once
#include "ZControl.h"

//隐藏控制台
#ifdef HIDE
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
#else
#endif // HIDE

class ZWindow : public ZControl
{
protected:
	//注册类
	void RegClass();
	//开始消息循环
	void StartLoop();

public:
	//模式对话框返回值枚举
	enum DialogResult
	{
		Yes = 0,
		No = 1
	};
	DialogResult Result = No;

	//初始化一个 ZWindow 对象
	ZWindow(ZString Text, ZString Name, int X, int Y, int W, int H, WNDPROC WndProc, DWORD Style = WS_OVERLAPPEDWINDOW);
	//初始化一个 ZWindow 对象
	ZWindow(ZString Text, int X, int Y, int W, int H, UINT Style, WNDCLASSEX wcex);
	//释放资源
	~ZWindow();

	//初始化
	void Init(HWND hWnd);
	DialogResult ShowDialog(HWND hWnd);

	//创建窗体（其中包括了注册类和初始化）
	void Create();
	//运行窗体，此时进入阻塞，开始消息循环
	void Run();

	//设置程序图标（不推荐使用）
	void SetIcon(ZIcon Icon);
	//设置程序图标（推荐）
	void SetIconEx(ZIcon Icon);

	//向当前窗体添加控件
	void AddControl(ZControl* Con);
	//从当前窗体移除控件
	void RemoveControl(HWND hWnd);
};
