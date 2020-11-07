#pragma once
#include <Windows.h>
#include "ZControl.h"

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

typedef struct ZWindowInfo {
	int X;
	int Y;
	int W;
	int H;
	
	ZString ClassName;
	ZString Title;

	HICON Icon = NULL;
	HICON IconSm = NULL;
	HCURSOR Cursor = NULL;
	HBRUSH BrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	UINT Style = WS_OVERLAPPEDWINDOW;

	WNDPROC WndProc;
}ZWindowInfo;

class ZWindow 
{
	HWND hWnd;
	HINSTANCE hInstance;

public:
	// ������Ϣ
	ZWindowInfo Info;

	// ���캯��
	~ZWindow();

	// ��ʼ������
	void ZInit();

	// ��������
	void ZCreateWindow();

	// ��ȡ���ھ��
	HWND ZGetHandle();

	// ��ʼ��Ϣѭ��
	void ZStartLoop();

	// ��ӿؼ�
	int ZAddControl(ZControl ctrl);

private:
	// ע�ᴰ��
	int ZRegisterClassZ();

	// ��ʼ��Instance���
	void ZInitInstance();
};