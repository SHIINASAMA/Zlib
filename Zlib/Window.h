#pragma once
#include <Windows.h>

class Window 
{
	HWND hWnd;
	HINSTANCE hInstance;
public:
	// ���캯��
	Window();
	~Window();
	// ��ʼ������
	void Init();
	// ��Ϣ��Ӧ
	//virtual int HandleMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};