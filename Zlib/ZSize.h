#pragma once

#include <Windows.h>

class ZSize
{
public:
	long W = 0;
	long H = 0;

	ZSize();
	//��ʼ��һ�� ZSize ����
	ZSize(long W, long Y);
};