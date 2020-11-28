/**@file	ZComboBox.h
* @brief	�������ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include "ZControl.h"
#include "ZItem.h"

class ZComboBox : public ZControl
{
private:
	ZString Type = L"combobox";

public:
	/**@brief		��ʼ��һ�� ZComboBox ����
	* @param X		�ؼ���X����
	* @param Y		�ؼ���Y����
	* @param W		�ؼ��Ŀ�
	* @param H		�ؼ��ĸ�
	* @param Style	�ؼ��ķ��
	*/
	ZComboBox(int X, int Y, int W, int H, DWORD Style = WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_HASSTRINGS);

	/**@brief		��ʼ��һ�� ZComboBox ����
	* @param Rect	�ؼ�������ʹ�С
	* @param Style	�ؼ��ķ��
	*/
	ZComboBox(ZRect Rect, DWORD Style = WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_HASSTRINGS);

	void Init(HWND hWnd);

	/**@brief		�������
	* @param str	�����ַ���
	*/
	void AddItem(ZString str);

	/**@brief		�Ƴ�����
	* @param Pos	�����ַ�������
	*/
	void RemoveAt(UINT Pos);

	/**@brief		��һ��λ�ò�������
	* @param Pos	����λ��
	* @param str	�����ַ���
	*/
	void Insert(UINT Pos, ZString str);

	/**@brief		��ȡ�����ı�
	* @param Pos	�����ַ�������
	*/
	ZString GetItemText(UINT Pos);

	/*@brief	��ȡѡȡ���������ֵ
	* retval	����ֵ
	*/
	UINT GetSelectedIndex();

	/**@brief		����ѡȡ���������ֵ
	* @param Pos	Ŀ������ֵ
	*/
	void SetSelectedIndex(UINT Pos);

	/**@brief		��ȡѡ��������ı�
	* @retval		�ı�
	*/
	ZString GetSelectedText();

	/**@brief	�������*/
	void RemoveAll();

	/**@brief	��ȡ��������
	* @retbal	��������
	*/
	UINT GetCount();
};
