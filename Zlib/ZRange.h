#pragma once
#include <Windows.h>
#include <Commctrl.h>
class ZRange
{
public:
	int X1;
	int X2;

	ZRange();
	//��ʼ�� ZRange ����
	ZRange(int X1, int X2);

	void operator=(PBRANGE Range);
	operator PBRANGE();
};
