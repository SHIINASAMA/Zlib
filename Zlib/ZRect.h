#pragma once
#include "ZPoint.h"
#include "ZSize.h"

class ZRect
{
public:
	ZPoint A;
	ZPoint B;

	ZRect();
	//��ʼ��һ�� ZRect ����
	ZRect(RECT Rect);
	//��ʼ��һ�� ZRect ����
	ZRect(ZPoint A, ZPoint B);
	//��ʼ��һ�� ZRect ����
	ZRect(long X1, long Y1, long X2, long Y2);

	//��ȡ��ǰ�����С
	ZSize GetSize();
	//���õ�ǰ�����С
	void SetSize(ZSize Size);

	//����һ�� RECT ����
	RECT GetRect();

	operator RECT();
};
