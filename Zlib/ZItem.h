#pragma once

#include <Windows.h>

class ZItem
{
private:
	// ������ AddItem ����
	void InitItem(HWND hWnd);

public:
	// �������
	void AddItem(ZItem* Item);
	// �Ƴ�����
	void RemoveAt(UINT Pos);
	// ��������
	void InsertItem(UINT Pos, ZItem* Item);
};
