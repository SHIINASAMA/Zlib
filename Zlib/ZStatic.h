/**@file	ZStatic.h
* @brief	静态文本控件类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief 静态文本控件类
*/
class ZStatic : public ZControl
{
protected:
	ZString Type = L"static";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	/**@brief		初始化ZStatic对象
	* @param Text	控件文本
	* @param Rect	控件坐标和大小
	*/
	ZStatic(ZString Text, ZRect Rect);

	/**@brief		初始化一个ZStatic对象
	* @param Text	控件文本
	* @param X		控件的X坐标
	* @param Y		控件的Y坐标
	* @param W		控件的宽
	* @param H		控件的高
	*/
	ZStatic(ZString Text, int X, int Y, int W, int H);

	/**@brief		初始化
	* @param hWnd	父项句柄
	*/
	void Init(HWND hWnd);
};