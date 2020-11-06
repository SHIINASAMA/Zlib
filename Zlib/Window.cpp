#include "Window.h"

ZWindow::~ZWindow()
{
	if(this->hWnd != NULL && ::IsWindow(this->hWnd))
	{
		::DestroyWindow(hWnd);
	}
}

int ZWindow::ZRegisterClassZ() 
{
	// ��ʼ�� WindowClass
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

	// ע�� WindowClass
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
	// ��������
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
		MessageBox(NULL, L"��������ʧ��", L"����", MB_OK);
		return;
	}

	// ��ʾ����
	ShowWindow(hWnd, SW_SHOWNORMAL);

	// ���´���
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

void ZWindow::ZInit(ZWindowInfo Info)
{
	this->Info = Info;
	ZRegisterClassZ();
}