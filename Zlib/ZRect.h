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
	ZRect(ZPoint A, ZPoint B);
	//��ʼ��һ�� ZRect ����
	ZRect(int X1, int Y1, int X2, int Y2);

	//��ȡ��ǰ�����С
	ZSize GetSize();
	//���õ�ǰ�����С
	void SetSize(ZSize Size);
};
