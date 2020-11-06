#pragma once
#include <Windows.h>

class Window 
{
	HWND hWnd;
	HINSTANCE hInstance;
public:
	// 构造函数
	Window();
	~Window();
	// 初始化函数
	void Init();
	// 消息相应
	//virtual int HandleMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};