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

	//��ӿؼ�ʱ������õĺ���
	void Init(HWND hWnd);
	//�����ʱ������õĺ���
	void InitItem();

	operator HMENU();
	void operator=(HMENU hMenu);
};