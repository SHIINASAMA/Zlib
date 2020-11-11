#pragma once
#include "ZControl.h"

#define ZP_DISPLAYMODE_ZOOM		0
#define ZP_DISPLAYMODE_NORMAL	1

class ZPictureBox : public ZControl
{
protected:
	ZString Type = L"static";
	DWORD Style = WS_CHILD | WS_VISIBLE | SS_BITMAP;
	UINT Mode = ZP_DISPLAYMODE_NORMAL;
	BOOL HasImage = FALSE;
	ZBitmap Bmp;

public:
	ZPictureBox();
	ZPictureBox(ZRect Rect, ZBitmap Bmp, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	ZPictureBox(int X, int Y, int W, int H, ZBitmap Bmp, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	void Init(HWND hWnd);

	//�÷���Ӧ���� WM_PAINT ��Ϣ�б�����
	void Show();
	void SetImage(ZBitmap Bmp);
	void CleanImage();

private:
	//�����ֲ�ˢ��
	void UpdateMessage();
};
