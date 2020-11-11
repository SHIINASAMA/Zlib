#pragma once
#include "ZControl.h"

//���ؿ���̨
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

class ZWindow : public ZControl
{
protected:
	//ע����
	void RegClass();
	//��ʼ��Ϣѭ��
	void StartLoop();

public:
	//��ʼ��һ�� ZWindow ����
	ZWindow(ZString Text, ZString Name, int X, int Y, int W, int H, WNDPROC WndProc);
	//��ʼ��һ�� ZWindow ����
	ZWindow(ZString Text, int X, int Y, int W, int H, UINT Style, WNDCLASSEX wcex);
	//�ͷ���Դ
	~ZWindow();

	//��ʼ��
	void Init(HWND hWnd);

	//�������壨���а�����ע����ͳ�ʼ����
	void Create();
	//���д��壬��ʱ������������ʼ��Ϣѭ��
	void Run();

	//���ó���ͼ�꣨���Ƽ�ʹ�ã�
	void SetIcon(ZIcon Icon);
	//���ó���ͼ�꣨�Ƽ���
	void SetIconEx(ZIcon Icon);

	//��ǰ������ӿؼ�
	void AddControl(ZControl* Con);
	//�ӵ�ǰ�����Ƴ��ؼ�
	void RemoveControl(HWND hWnd);
};
