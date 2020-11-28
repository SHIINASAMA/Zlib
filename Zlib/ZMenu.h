/**@file	ZMenu.h
* @brief	菜单控件类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include "ZControl.h"
#include "ZItem.h"

#define ZMenuItem ZMenu

/**@brief 菜单控件类
*/
class ZMenu : public ZControl, public ZItem
{
protected:
	HMENU hMenu = CreateMenu();

public:

	/**@brief	初始化一个 ZMenu 对象
	*/
	ZMenu();

	/**@brief		初始化一个 ZMenu 对象
	* @param Text	控件文本
	* @param ID		控件ID
	* @param Style	控件风格
	*/
	ZMenu(ZString Text, DWORDLONG ID, DWORD Style = MF_STRING);

	/**@brief	获取控件句柄
	* @retval	返回句柄
	*/
	HWND GetHandle();

	/**@brief		在实例化之前设置控件文本
	* @param str	目标文本
	*/
	void SetTextPre(ZString str);

	/**@brief		在实例化之前设置控件ID
	* @param ID		目标ID
	*/
	void SetIDPre(UINT ID);

	/**@brief		在实例化前设置控件风格
	* @param Style	目标风格
	*/
	void SetStylePre(DWORD Style = MF_STRING);

	/**@brief		初始化
	* @param hWnd	父项句柄
	*/
	void Init(HWND hWnd);

	/**@brief		弹出上下文菜单
	* @param hWnd	父项句柄
	* @param X		相对于窗口X坐标
	* @param Y		相对于窗口Y坐标
	* @param Flag	标志
	*/
	void ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag = TPM_LEFTALIGN | TPM_LEFTBUTTON);

	/**@brief		添加子项
	* @param Item	子项
	*/
	void AddItem(ZItem* Item);

	/**@brief		获取子项
	* @param Pos	子项索引
	*/
	ZMenu GetItemAt(UINT Pos);

	/**@brief		插入子项
	* @param Pos	子项索引
	* @param Item	目标子项
	*/
	void InsertItem(UINT Pos, ZItem* Item);

	/**@brief		移除子项
	* @param Pos	子项索引
	*/
	void RemoveAt(UINT Pos);

	/**@brief	子项初始化，供父项调用
	*/
	void InitItem();

	operator HMENU();
	void operator=(HMENU hMenu);
};