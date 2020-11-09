#include "ZWindow.h"

void ZWindow::RegClass()
{
	int a = 0;
	if (!RegisterClassEx(&wcex))
		a = 1;
}

void ZWindow::Init()
{
	ZControl::Init();
}

void ZWindow::StartLoop()
{
	ZControl::StartLoop();
}

ZWindow::ZWindow(ZString Text, ZString Name, ZRect Rect, WNDPROC WndProc)
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
	this->Rect = Rect;
}

ZWindow::ZWindow(ZString Text,ZRect Rect,UINT Style,WNDCLASSEX wcex)
{
	hInstance = ::GetModuleHandle(NULL);
	wcex.hInstance = hInstance;

	this->ClassName = wcex.lpszClassName;
	this->Text = Text;
	this->Rect = Rect;
	this->Style = Style;
}

void ZWindow::InitWindow()
{
	RegClass();		//×¢²á
	Init();			//´´½¨
	StartLoop();	//Ñ­»·
}

void ZWindow::SetIcon(ZIcon Icon)
{
	this->wcex.hIcon = Icon;
}

void ZWindow::SetIconEx(ZIcon Icon)
{
	SendMessage(hWnd,WM_SETICON,0,(LPARAM)(HICON)Icon);
}
