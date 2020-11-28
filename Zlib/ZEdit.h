/**@file	ZEdit.h
* @brief	�ı��ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include "ZControl.h"

class ZEdit : public ZControl
{
protected:
	ZString Type = L"edit";
	DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER;

public:
	/**@brief		��ʼ��һ�� ZEdit ����
	* @param Text	�ؼ����ı�
	* @param Rect	�ؼ�������ʹ�С
	* @param ID		�ؼ���ID
	*/
	ZEdit(ZString Text, ZRect Rect, DWORDLONG ID, DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER);

	/**@brief		��ʼ��һ�� ZButton ����
	* @param Text	�ؼ����ı�
	* @param X		�ؼ���X����
	* @param Y		�ؼ���Y����
	* @param W		�ؼ��Ŀ�
	* @param H		�ؼ��ĸ�
	* @param ID		�ؼ���ID
	* @param Style	�ؼ��ķ��
	*/
	ZEdit(ZString Text, int X, int Y, int W, int H, DWORDLONG ID, DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER);

	void Init(HWND hWnd);

	/**@brief		���ÿؼ�ֻ��
	* @param value	�Ƿ�ֻ��
	*/
	void SetReadOnly(BOOL value);
};
