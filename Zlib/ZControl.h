#pragma once
#include <Windows.h>
#include "ZGraphics.h"
#include "ZFont.h"

class ZControl
{
protected:
	HWND hWnd;
	HINSTANCE hInstance;
	WNDCLASSEX wcex;

	ZString ClassName;
	ZString Text;
	ZString Type;
	DWORD Style;
	DWORDLONG ID;
	ZRect Rect;
	ZFont Font;

	//ע����
	void RegClass();
	//��ʼ��Ϣѭ��
	void StartLoop();

public:
	ZControl();

	//��ʼ��
	virtual void Init(HWND hWnd);

	//��ȡ���������
	ZString GetClassName();
	//���ص�ǰ����ľ��
	HWND GetHandle();

	//�����ı�
	ZString GetText();
	//�����ı�
	void SetText(ZString str);

	//���ص�ǰʹ�õ�����
	ZFont GetFont();
	//��������
	void SetFont(ZFont Font);

	//���ص�ǰ�ؼ���λ��
	ZRect GetPosition();
	//���ÿؼ�λ��
	void SetPosition(ZRect Rect);

	//���ص�ǰ�ؼ��Ĵ�С
	ZSize GetSize();
	//���ÿؼ���С
	void Size(ZSize Size);
};
