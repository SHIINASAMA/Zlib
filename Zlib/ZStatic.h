/**@file	ZStatic.h
* @brief	��̬�ı��ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief ��̬�ı��ؼ���
*/
class ZStatic : public ZControl
{
protected:
	ZString Type = L"static";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	/**@brief		��ʼ��ZStatic����
	* @param Text	�ؼ��ı�
	* @param Rect	�ؼ�����ʹ�С
	*/
	ZStatic(ZString Text, ZRect Rect);

	/**@brief		��ʼ��һ��ZStatic����
	* @param Text	�ؼ��ı�
	* @param X		�ؼ���X����
	* @param Y		�ؼ���Y����
	* @param W		�ؼ��Ŀ�
	* @param H		�ؼ��ĸ�
	*/
	ZStatic(ZString Text, int X, int Y, int W, int H);

	/**@brief		��ʼ��
	* @param hWnd	������
	*/
	void Init(HWND hWnd);
};