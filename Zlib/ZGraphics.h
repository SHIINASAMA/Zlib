#pragma once
#include "ZRect.h"
#include "ZColor.h"
#include "ZIcon.h"
#include "ZBitmap.h"

class ZGraphics
{
public:
	//���ÿؼ��ı����Ƿ���͸����,Ӧ�� WM_CTLCOLORSTATIC �д�������
	static LRESULT SetBkTransparent(BOOL IsTransparent, WPARAM wParam);

	//����ˢ������
	static BOOL InvalidateRect(HWND hWnd, ZRect Rect, BOOL B);
};