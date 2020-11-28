/**@file	ZGraphics.h
* @brief	GDI���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZRect.h"
#include "ZColor.h"
#include "ZIcon.h"
#include "ZBitmap.h"

/**@brief GDI���
*/
class ZGraphics
{
public:
	/**@brief				���ÿؼ�����͸����Ӧ����WM_CTLCOLORSTATIC��ֱ�ӷ���
	* @param IsTransparent	�Ƿ�͸��
	* @param wParam			��Ϣѭ���е�WPARAM
	*/
	static LRESULT SetBkTransparent(BOOL IsTransparent, WPARAM wParam);

	/**@brief			����ˢ������
	* @param	hWnd	ˢ�´��ڵľ��
	* @param	Rect	ˢ�´��ڵ�����
	* @param	B		�Ƿ����ԭ�б���
	* @retval	�������
	*/
	static BOOL InvalidateRect(HWND hWnd, ZRect Rect, BOOL B);
};