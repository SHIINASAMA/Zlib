#include "ZWindow.h"

void ZWindow::RegClass()
{
	RegisterClassEx(&wcex);
}

void ZWindow::Init(HWND hWnd)
{
	this->hWnd = ::CreateWindow(
		ClassName,
		Text,
		Style,
		Rect.A.X,
		Rect.A.Y,
		Rect.GetSize().W,
		Rect.GetSize().H,
		NULL,
		NULL,
		hInstance,
		NULL
	);

	Font.Create(L"新宋体");
	SetFont(Font);
}

void ZWindow::StartLoop()
{
	ZControl::StartLoop();
}

ZWindow::ZWindow(ZString Text, ZString Name, int X, int Y, int W, int H, WNDPROC WndProc)
{
	hInstance = ::GetModuleHandle(NULL);
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = NULL;
	wcex.hCursor = NULL;
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = Name;
	wcex.hIconSm = NULL;

	this->ClassName = wcex.lpszClassName;
	this->Text = Text;
	this->Style = WS_OVERLAPPEDWINDOW;
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.SetSize(ZSize(W, H));
	this->Rect = Rect;
}

ZWindow::ZWindow(ZString Text, int X, int Y, int W, int H, UINT Style, WNDCLASSEX wcex)
{
	hInstance = ::GetModuleHandle(NULL);
	wcex.hInstance = hInstance;

	this->ClassName = wcex.lpszClassName;
	this->Text = Text;
	this->Style = Style;
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.SetSize(ZSize(W, H));
	this->Rect = Rect;
}

ZWindow::~ZWindow()
{
	if (this->hWnd != NULL && ::IsWindow(this->hWnd))
	{
		::DestroyWindow(hWnd);
	}
}

void ZWindow::Create()
{
	RegClass();		//注册
	Init(hWnd);		//创建
}

void ZWindow::Run()
{
	StartLoop();	//循环
}

void ZWindow::SetIcon(ZIcon Icon)
{
	this->wcex.hIcon = Icon;
}

void ZWindow::SetIconEx(ZIcon Icon)
{
	SendMessage(hWnd, WM_SETICON, 0, (LPARAM)(HICON)Icon);
}

void ZWindow::AddControl(ZControl* Con)
{
	Con->Init(hWnd);
}

void ZWindow::RemoveControl(HWND hWnd)
{
	DestroyWindow(hWnd);
}