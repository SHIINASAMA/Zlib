/**@file	ZButton.h
* @brief	按钮控件类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief 按钮控件类
*/
class ZButton : public ZControl
{
protected:
	ZString Type = L"button";
	DWORD Style = WS_CHILD | WS_VISIBLE;

public:
	/**@brief		初始化一个 ZButton 对象
	* @param Text	控件的文本
	* @param Rect	控件的坐标和大小
	* @param ID		控件的ID
	*/
	ZButton(ZString Text, ZRect Rect, DWORDLONG ID);

	/**@brief		初始化一个 ZButton 对象
	* @param Text	控件的文本
	* @param X		控件的X坐标
	* @param Y		控件的Y坐标
	* @param W		控件的宽
	* @param H		控件的高
	* @param ID		控件的ID
	*/
	ZButton(ZString Text, int X, int Y, int W, int H, DWORDLONG ID);
	void Init(HWND hWnd);

	/**@brief		设置按钮是否可用
	* @param Enable 是否可用
	*/
	void SetEnable(BOOL Enable);
};
