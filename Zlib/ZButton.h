/**@file	ZButton.h
* @brief	��ť�ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief ��ť�ؼ���
*/
class ZButton : public ZControl
{
protected:
	ZString Type = L"button";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	/**@brief		��ʼ��һ�� ZButton ����
	* @param Text	�ؼ����ı�
	* @param Rect	�ؼ�������ʹ�С
	* @param ID		�ؼ���ID
	*/
	ZButton(ZString Text, ZRect Rect, DWORDLONG ID);

	/**@brief		��ʼ��һ�� ZButton ����
	* @param Text	�ؼ����ı�
	* @param X		�ؼ���X����
	* @param Y		�ؼ���Y����
	* @param W		�ؼ��Ŀ�
	* @param H		�ؼ��ĸ�
	* @param ID		�ؼ���ID
	*/
	ZButton(ZString Text, int X, int Y, int W, int H, DWORDLONG ID);
	void Init(HWND hWnd);

	/**@brief		���ð�ť�Ƿ����
	* @param Enable �Ƿ����
	*/
	void SetEnable(BOOL Enable);
};
