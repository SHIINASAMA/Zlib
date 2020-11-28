/**@file	ZEdit.h
* @brief	文本控件类
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
	/**@brief		初始化一个 ZEdit 对象
	* @param Text	控件的文本
	* @param Rect	控件的坐标和大小
	* @param ID		控件的ID
	*/
	ZEdit(ZString Text, ZRect Rect, DWORDLONG ID, DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER);

	/**@brief		初始化一个 ZButton 对象
	* @param Text	控件的文本
	* @param X		控件的X坐标
	* @param Y		控件的Y坐标
	* @param W		控件的宽
	* @param H		控件的高
	* @param ID		控件的ID
	* @param Style	控件的风格
	*/
	ZEdit(ZString Text, int X, int Y, int W, int H, DWORDLONG ID, DWORD Style = WS_CHILD | WS_VISIBLE | WS_BORDER);

	void Init(HWND hWnd);

	/**@brief		设置控件只读
	* @param value	是否只读
	*/
	void SetReadOnly(BOOL value);
};
