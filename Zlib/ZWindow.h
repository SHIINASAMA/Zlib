#pragma once
#include <Windows.h>
#include "ZIControl.h"

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

typedef void (*AppProc)(HWND, WPARAM, LPARAM);

typedef struct ZWindowInfo {
	int X;
	int Y;
	int W;
	int H;

	// �ַ���
	ZString ClassName;
	ZString Title;

	// ��Դ��
	HICON Icon = NULL;
	HICON IconSm = NULL;
	HCURSOR Cursor = NULL;
	HBRUSH BrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	UINT Style = WS_OVERLAPPEDWINDOW;

	WNDPROC WndProc;
}ZWindowInfo;

static AppProc MyProc;

class ZWindow
{
	// ���ھ��
	HWND hWnd;
	HINSTANCE hInstance;

	// ת�����ĺ���ָ��

public:
	// ������Ϣ
	ZWindowInfo Info;

	// ���캯��
	~ZWindow();

	// ��ʼ������
	void ZInit();

	// ��ȡ���ھ��
	HWND ZGetHandle();

	// ��ʼ��Ϣѭ��
	void ZStartLoop();

	// ��ӿؼ�
	void ZAddControl(ZIControl* ctrl);

	// �Ƴ��ؼ�
	void ZRemoveControl(ZIControl* ctrl);

	void ZRenoveControl(HWND hWnd);

	// ��ȡ�ı�
	ZString GetText();

	// �����ı�
	void SetText(ZString str);

private:
	// ע�ᴰ��
	int ZRegisterClass();

	// ��������
	void ZCreateWindow();

	// ��ʼ��Instance���
	void ZInitInstance();
};