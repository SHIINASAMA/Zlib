/**@file	ZMenu.h
* @brief	�˵��ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include "ZControl.h"
#include "ZItem.h"

#define ZMenuItem ZMenu

/**@brief �˵��ؼ���
*/
class ZMenu : public ZControl, public ZItem
{
protected:
	HMENU hMenu = CreateMenu();

public:

	/**@brief	��ʼ��һ�� ZMenu ����
	*/
	ZMenu();

	/**@brief		��ʼ��һ�� ZMenu ����
	* @param Text	�ؼ��ı�
	* @param ID		�ؼ�ID
	* @param Style	�ؼ����
	*/
	ZMenu(ZString Text, DWORDLONG ID, DWORD Style = MF_STRING);

	/**@brief	��ȡ�ؼ����
	* @retval	���ؾ��
	*/
	HWND GetHandle();

	/**@brief		��ʵ����֮ǰ���ÿؼ��ı�
	* @param str	Ŀ���ı�
	*/
	void SetTextPre(ZString str);

	/**@brief		��ʵ����֮ǰ���ÿؼ�ID
	* @param ID		Ŀ��ID
	*/
	void SetIDPre(UINT ID);

	/**@brief		��ʵ����ǰ���ÿؼ����
	* @param Style	Ŀ����
	*/
	void SetStylePre(DWORD Style = MF_STRING);

	/**@brief		��ʼ��
	* @param hWnd	������
	*/
	void Init(HWND hWnd);

	/**@brief		���������Ĳ˵�
	* @param hWnd	������
	* @param X		����ڴ���X����
	* @param Y		����ڴ���Y����
	* @param Flag	��־
	*/
	void ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag = TPM_LEFTALIGN | TPM_LEFTBUTTON);

	/**@brief		�������
	* @param Item	����
	*/
	void AddItem(ZItem* Item);

	/**@brief		��ȡ����
	* @param Pos	��������
	*/
	ZMenu GetItemAt(UINT Pos);

	/**@brief		��������
	* @param Pos	��������
	* @param Item	Ŀ������
	*/
	void InsertItem(UINT Pos, ZItem* Item);

	/**@brief		�Ƴ�����
	* @param Pos	��������
	*/
	void RemoveAt(UINT Pos);

	/**@brief	�����ʼ�������������
	*/
	void InitItem();

	operator HMENU();
	void operator=(HMENU hMenu);
};