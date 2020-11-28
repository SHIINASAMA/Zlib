/**@file	ZItem.h
* @brief	Item基类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

/**@brief Item基类
*/
#include <Windows.h>

class ZItem
{
private:
	/**@brief		供父项AddItem调用
	* @param hWnd	父项句柄
	*/
	void InitItem(HWND hWnd);

public:
	/**@brief		添加子项
	* @param Item	子项
	*/
	void AddItem(ZItem* Item);

	/**@brief		删除子项
	* @param Pos	索引值
	*/
	void RemoveAt(UINT Pos);

	/**@brief		插入子项
	* @param Pos	索引
	* @param Item	子项
	*/
	void InsertItem(UINT Pos, ZItem* Item);
};
