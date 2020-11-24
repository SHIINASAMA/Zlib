#pragma once

#include "ZControl.h"
#include "ZItem.h"

#define ZMenuItem ZMenu

class ZMenu : public ZControl, public ZItem
{
protected:
	HMENU hMenu = CreateMenu();

public:
	//��ʼ��һ�� ZMenu ����
	ZMenu();
	//��ʼ��һ�� ZMenu ����
	ZMenu(ZString Text, DWORDLONG ID, DWORD Style = MF_STRING | MF_POPUP);

	//��ȡ ZMenu ������
	HWND GetHandle();
	//�����ı�
	void SetTextPre(ZString str);
	//����ID
	void SetIDPre(UINT ID);
	//���÷��
	void SetStylePre(DWORD Style = MF_STRING | MF_POPUP);
	//��ӿؼ�ʱ������õĺ���
	void Init(HWND hWnd);
	//���������Ĳ˵�
	void ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag = TPM_LEFTALIGN | TPM_LEFTBUTTON);

	//ZItem�ӿ�ʵ��
	//�������
	void AddItem(ZItem* Item);
	//��ȡ����
	ZItem* GetItemAt(UINT Pos);
	//��������
	void InsertItem(UINT Pos, ZItem* Item);
	//�Ƴ�����
	void RemoveAt(UINT Pos);
	//�����ʼ��
	void InitItem(HWND hWnd);

	operator HMENU();
	void operator=(HMENU hMenu);
};