#include "ZWindow.h"

ZWindow::~ZWindow()
{
	if(this->hWnd != NULL && ::IsWindow(this->hWnd))
	{
		::DestroyWindow(hWnd);
	}
}

HWND ZWindow::ZGetHandle()
{
	return this->hWnd;
}

void ZWindow::ZStartLoop()
{
	// 显示窗口
	ShowWindow(hWnd, SW_SHOWNORMAL);

	// 更新窗口
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

void ZWindow::ZAddControl(ZIControl* ctrl)
{
	ctrl->Create(this->hWnd);
}

void ZWindow::ZRemoveControl(ZIControl* ctrl)
{
	DestroyWindow(ctrl->hWnd);
}

void ZWindow::ZRenoveControl(HWND hWnd)
{
	DestroyWindow(hWnd);
}

ZString ZWindow::GetText()
{
	UINT len = GetWindowTextLengthW(this->hWnd);
	WChar* str = new WChar[len+1];
	GetWindowTextW(this->hWnd, str, len+1);
	str[len] = '\0';
	ZString temp;
	temp.Pause(str);
	return temp;
}

void ZWindow::SetText(ZString str)
{
	SetWindowTextW(this->hWnd, str);
}

int ZWindow::ZRegisterClass()
{
	// 初始化 WindowClass
	WNDCLASSEX wcex;
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = Info.WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = Info.Icon;
	wcex.hCursor = Info.Cursor;
	wcex.hbrBackground = Info.BrBackground;
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = Info.ClassName;
	wcex.hIconSm = NULL;

	// 注册 WindowClass
	if (!RegisterClassEx(&wcex))
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

void ZWindow::ZInitInstance()
{
	hInstance = ::GetModuleHandle(NULL);
}

void ZWindow::ZCreateWindow()
{
	// 创建窗口
	hWnd = ::CreateWindow(
		Info.ClassName,
		Info.Title,
		Info.Style,
		Info.X,
		Info.Y,
		Info.W,
		Info.H,
		NULL,
		NULL,
		hInstance,
		NULL
	);

	if (hWnd == NULL)
	{
		DWORD e = GetLastError();
		MessageBox(NULL, L"创建窗口失败", L"错误", MB_OK);
		return;
	}
}

void ZWindow::ZInit()
{
	//MyProc = Info.WndProc;
	ZRegisterClass();
	ZCreateWindow();
}