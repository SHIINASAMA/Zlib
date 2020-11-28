/**@file	ZSize.h
* @brief	大小
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include <Windows.h>

class ZSize
{
public:
	long W = 0;
	long H = 0;

	/**@brief	实例化一个ZPoint对象
	*/
	ZSize();

	/**@brief	实例化一个ZPoint对象
	* @param W	宽
	* @param H	高
	*/
	ZSize(long W, long Y);
};