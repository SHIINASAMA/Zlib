/**@file	ZGraphics.h
* @brief	GDI相关
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZRect.h"
#include "ZColor.h"
#include "ZIcon.h"
#include "ZBitmap.h"

/**@brief GDI相关
*/
class ZGraphics
{
public:
	/**@brief				设置控件背景透明，应该在WM_CTLCOLORSTATIC并直接返回
	* @param IsTransparent	是否透明
	* @param wParam			消息循环中的WPARAM
	*/
	static LRESULT SetBkTransparent(BOOL IsTransparent, WPARAM wParam);

	/**@brief			设置刷新区域
	* @param	hWnd	刷新窗口的句柄
	* @param	Rect	刷新窗口的区域
	* @param	B		是否擦除原有背景
	* @retval	操作结果
	*/
	static BOOL InvalidateRect(HWND hWnd, ZRect Rect, BOOL B);
};