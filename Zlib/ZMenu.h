#pragma once

#include "ZControl.h"

#define ZMenuItem ZMenu

class ZMenu : public ZControl
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
	//�������
	void AddSubItem(ZMenuItem Item);
	//���ͬ����
	void AddItem(ZMenuItem Item);
	//��ȡ����
	ZMenu GetSubItem(UINT Pos);

	//�����ı�
	void SetTextPre(ZString str);
	//����ID
	void SetIDPre(UINT ID);
	//���÷��
	void SetStylePre(DWORD Style = MF_STRING | MF_POPUP);

	//��ӿؼ�ʱ������õĺ���
	void Init(HWND hWnd);
	//�����ʱ������õĺ���
	void InitItem();

	//���������Ĳ˵�
	void ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag = TPM_LEFTALIGN | TPM_LEFTBUTTON);

	operator HMENU();
	void operator=(HMENU hMenu);
};