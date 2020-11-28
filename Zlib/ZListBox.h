/**@file	ZListBox.h
* @brief	�б�ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

/**@brief �б�ؼ���
*/
#include "ZControl.h"

class ZListBox : public ZControl
{
private:
	ZString Type = L"listbox";

public:
	/**@brief		��ʼ��һ�� ZListBox ����
	* @param rect	�ؼ�������ʹ�С
	* @param Style	�ؼ��ķ��
	*/
	ZListBox(ZRect rect, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);

	/**@brief		��ʼ��һ�� ZListBox ����
	* @param X		�ؼ���X����
	* @param Y		�ؼ���Y����
	* @param W		�ؼ��Ŀ�
	* @param H		�ؼ��ĸ�
	* @param Style	�ؼ��ķ��
	*/
	ZListBox(int X, int Y, int W, int H, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);

	/**@brief		��ʼ��
	* @param hWnd	������
	*/
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

	/**@brief	��ȡѡ��������ı�
	* @retval	�ı�
	*/
	ZString GetSelectedText();

	/**@brief	�������
	*/
	void RemoveAll();

	/**@brief	��ȡ��������
	* @retval	��������
	*/
	UINT GetCount();
};
