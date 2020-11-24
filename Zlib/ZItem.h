#pragma once

#include <Windows.h>

class ZItem
{
private:
	// ������ AddItem ����
	virtual void Init(HWND hWnd) = 0;

public:
	// �������
	virtual void AddItem(ZItem Item) = 0;
	// �Ƴ�����
	virtual int RemoveAt(UINT Pos) = 0;
	// ��������
	virtual void InsertItem(ZItem Item) = 0;
	// ��ȡ����
	virtual ZItem GetItemAt(UINT Pos) = 0;
};
