/**@file	ZListBox.h
* @brief	列表控件类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

/**@brief 列表控件类
*/
#include "ZControl.h"

class ZListBox : public ZControl
{
private:
	ZString Type = L"listbox";

public:
	/**@brief		初始化一个 ZListBox 对象
	* @param rect	控件的坐标和大小
	* @param Style	控件的风格
	*/
	ZListBox(ZRect rect, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);

	/**@brief		初始化一个 ZListBox 对象
	* @param X		控件的X坐标
	* @param Y		控件的Y坐标
	* @param W		控件的宽
	* @param H		控件的高
	* @param Style	控件的风格
	*/
	ZListBox(int X, int Y, int W, int H, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);

	/**@brief		初始化
	* @param hWnd	父项句柄
	*/
	void Init(HWND hWnd);

	/**@brief		添加子项
	* @param str	子项字符串
	*/
	void AddItem(ZString str);

	/**@brief		移除子项
	* @param Pos	子项字符串索引
	*/
	void RemoveAt(UINT Pos);

	/**@brief		在一个位置插入子项
	* @param Pos	插入位置
	* @param str	子项字符串
	*/
	void Insert(UINT Pos, ZString str);

	/**@brief		获取子项文本
	* @param Pos	子项字符串索引
	*/
	ZString GetItemText(UINT Pos);

	/*@brief	获取选取子项的索引值
	* retval	索引值
	*/
	UINT GetSelectedIndex();

	/**@brief		设置选取子项的索引值
	* @param Pos	目标索引值
	*/
	void SetSelectedIndex(UINT Pos);

	/**@brief	获取选择子项的文本
	* @retval	文本
	*/
	ZString GetSelectedText();

	/**@brief	清空子项
	*/
	void RemoveAll();

	/**@brief	获取子项总数
	* @retval	子项总数
	*/
	UINT GetCount();
};
