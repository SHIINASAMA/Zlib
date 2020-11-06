#include "Window.h"

Window::Window()
{

}

Window::~Window()
{
	if(this->hWnd != NULL && ::IsWindow(this->hWnd))
	{
		::DestroyWindow(hWnd);
	}
}

void Window::Init()
{
	// 初始化句柄
	hInstance = ::GetModuleHandle(NULL);

	// 初始化 WindowClass
	WNDCLASSEX wcex;
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = Window::WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = NULL;
	wcex.hCursor = NULL;
	wcex.hbrBackground = CreateSolidBrush(0);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = L"HelloWorld";
	wcex.hIconSm = NULL;

	// 注册 WindowClass
	if(!RegisterClassEx(&wcex))
	{
		DWORD e = GetLastError();
		MessageBox(NULL, L"注册窗口失败", L"错误",MB_OK);
		return;
	}

	// 创建窗口
	hWnd = ::CreateWindow(
		L"HelloWorld",
		L"Title",
		WS_OVERLAPPEDWINDOW,
		100,
		100,
		800,
		600,
		NULL,
		NULL,
		hInstance,
		NULL
	);
	if(hWnd == NULL)
	{
		DWORD e = GetLastError();
		MessageBox(NULL, L"创建窗口失败", L"错误", MB_OK);
		return;
	}

	// 显示窗口
	ShowWindow(hWnd,SW_SHOWNORMAL);

	// 更新窗口
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

LRESULT CALLBACK Window::WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_DESTROY :
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
}