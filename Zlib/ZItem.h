/**@file	ZItem.h
* @brief	Item����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

/**@brief Item����
*/
#include <Windows.h>

class ZItem
{
private:
	/**@brief		������AddItem����
	* @param hWnd	������
	*/
	void InitItem(HWND hWnd);

public:
	/**@brief		�������
	* @param Item	����
	*/
	void AddItem(ZItem* Item);

	/**@brief		ɾ������
	* @param Pos	����ֵ
	*/
	void RemoveAt(UINT Pos);

	/**@brief		��������
	* @param Pos	����
	* @param Item	����
	*/
	void InsertItem(UINT Pos, ZItem* Item);
};
