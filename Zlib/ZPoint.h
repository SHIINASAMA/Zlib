/**@file	ZPoint.h
* @brief	二维点结构
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include <windows.h>

class ZPoint
{
public:
	int X = 0;
	int Y = 0;

	/**@brief	实例化一个ZPoin对象
	*/
	ZPoint();
	/**@brief	实例化一个ZPoin对象
	* @param X	x坐标
	* @param Y	y坐标
	*/
	ZPoint(int X, int Y);

	void operator=(POINT pt);
	operator POINT();
};
