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
	//初始化 ZProgressBar 对象
	ZProgressBar(int X, int Y, int W, int H, UINT Max = 100, UINT Min = 0);
	//初始化 ZProgressBar 对象
	ZProgressBar(ZRect Rect, UINT Max = 100, UINT Min = 0);

	void Init(HWND hWnd);

	//设置进度值
	void SetValue(UINT value);
	//获取进度值
	UINT GetValue();

	//获取范围区间
	ZRange GetRange();
	//设置范围区间
	void SetRange(UINT Max, UINT Min);
	//设置范围区间
	void SetRange(ZRange Range);
};