#pragma once
#include "ZControl.h"
class ZListBox : public ZControl
{
private:
	ZString Type = L"listbox";

public:
	//��ʼ��һ�� ZListBox ����
	ZListBox();
	//��ʼ��һ�� ZListBox ����
	ZListBox(ZRect rect, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);
	//��ʼ��һ�� ZListBox ����
	ZListBox(int X, int Y, int W, int H, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);

	void Init(HWND hWnd);

	//���һ������
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
