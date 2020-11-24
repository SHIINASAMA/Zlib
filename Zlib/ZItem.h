#pragma once

#include <Windows.h>

class ZItem
{
private:
	// ������ AddItem ����
	virtual void InitItem(HWND hWnd) = 0;

public:
	// �������
	virtual void AddItem(ZItem* Item) = 0;
	// �Ƴ�����
	virtual void RemoveAt(UINT Pos) = 0;
	// ��������
	virtual void InsertItem(UINT Pos, ZItem* Item) = 0;
	// ��ȡ����
	virtual ZItem* GetItemAt(UINT Pos) = 0;
};
