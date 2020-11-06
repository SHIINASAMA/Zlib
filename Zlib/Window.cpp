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
	// ��ʼ�����
	hInstance = ::GetModuleHandle(NULL);

	// ��ʼ�� WindowClass
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

	// ע�� WindowClass
	if(!RegisterClassEx(&wcex))
	{
		DWORD e = GetLastError();
		MessageBox(NULL, L"ע�ᴰ��ʧ��", L"����",MB_OK);
		return;
	}

	// ��������
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
		MessageBox(NULL, L"��������ʧ��", L"����", MB_OK);
		return;
	}

	// ��ʾ����
	ShowWindow(hWnd,SW_SHOWNORMAL);

	// ���´���
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