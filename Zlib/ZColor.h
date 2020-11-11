#pragma once

#include <Windows.h>

class ZColor
{
private:
	COLORREF color;

public:
	ZColor();
	//��ʼ��һ�� ZColor ����
	ZColor(BYTE R, BYTE G, BYTE B);

	operator COLORREF();
	void operator=(COLORREF color);

	//����Rֵ
	BYTE GetRVar();
	//����Gֵ
	BYTE GetGVar();
	//����Bֵ
	BYTE GetBVar();
};
