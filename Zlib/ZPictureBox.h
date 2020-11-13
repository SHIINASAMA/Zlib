#pragma once
#include "ZControl.h"

//�Զ����Ų���Ӧ�ؼ�
#define ZP_DISPLAYMODE_NORMAL	0
//�Զ���������Ӧ�ؼ�
#define ZP_DISPLAYMODE_ZOOM		1
//���Զ����Ų���Ӧ
#define ZP_DISPLAYMODE_NONE		2

class ZPictureBox : public ZControl
{
protected:
	HWND PhWnd;
	ZString Type = L"static";
	DWORD Style = WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER;
	UINT Mode = ZP_DISPLAYMODE_NORMAL;
	BOOL HasImage = FALSE;
	ZBitmap Bmp;

public:
	//��ʼ��һ�� ZPictureBox ����
	ZPictureBox();
	//��ʼ��һ�� ZPictureBox ���󣬲��� PhWnd Ϊ�����ھ����������ˢ��ͼ��
	ZPictureBox(ZRect Rect, HWND PhWnD, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	//��ʼ��һ�� ZPictureBox ���󣬲��� PhWnd Ϊ�����ھ����������ˢ��ͼ��
	ZPictureBox(int X, int Y, int W, int H, HWND PhWnd, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	void Init(HWND hWnd);

	//�÷���Ӧ���� WM_PAINT ��Ϣ�б�����
	void Show();
	//����ͼ��
	void SetImage(ZBitmap Bmp);
	//���ͼ��
	void CleanImage();
	//������ʾģʽ
	void SetMode(UINT Mode);

private:
	//����ˢ��
	void UpdateMessage();
};
