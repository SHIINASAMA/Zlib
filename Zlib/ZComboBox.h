#pragma once

#include "ZControl.h"
#include "ZItem.h"

class ZComboBox : public ZControl
{
private:
	ZString Type = L"combobox";

public:
	//��ʼ��һ��ZComboBox����
	ZComboBox();
	//��ʼ��һ��ZComboBox����
	ZComboBox(int X, int Y, int W, int H, DWORD Style = WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_HASSTRINGS);
	//��ʼ��һ��ZComboBox����
	ZComboBox(ZRect Rect, DWORD Style = WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_HASSTRINGS);

	void Init(HWND hWnd);

	//����һ������
	void AddItem(ZString str);
	//�Ƴ�һ������
	void RemoveAt(UINT Pos);
	//��һ��λ�ò�������
	void Insert(UINT Pos, ZString str);
	//��ȡһ��������ı�
	ZString GetItemText(UINT Pos);
	//��ȡѡȡ���������ֵ
	UINT GetSelectedIndex();
	//����ѡȡ���������ֵ
	void SetSelectedIndex(UINT Pos);
	//��ȡѡ��������ı�
	ZString GetSelectedText();
	//�������
	void RemoveAll();
	//��ȡ��������
	UINT GetCount();
};