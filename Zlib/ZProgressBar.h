#pragma once
#include "ZControl.h"
#include "ZRange.h"

class ZProgressBar : public ZControl
{
protected:
	ZString Type = L"msctls_progress32";
	DWORD Style = WS_CHILD | WS_VISIBLE | PBS_SMOOTH;

public:
	ZProgressBar();
	//��ʼ�� ZProgressBar ����
	ZProgressBar(int X, int Y, int W, int H, UINT Max = 100, UINT Min = 0);
	//��ʼ�� ZProgressBar ����
	ZProgressBar(ZRect Rect, UINT Max = 100, UINT Min = 0);

	void Init(HWND hWnd);

	//���ý���ֵ
	void SetValue(UINT value);
	//��ȡ����ֵ
	UINT GetValue();

	//��ȡ��Χ����
	ZRange GetRange();
	//���÷�Χ����
	void SetRange(UINT Max, UINT Min);
	//���÷�Χ����
	void SetRange(ZRange Range);
};