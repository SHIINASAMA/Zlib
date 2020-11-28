/**@file	ZPoint.h
* @brief	��ά��ṹ
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

	/**@brief	ʵ����һ��ZPoin����
	*/
	ZPoint();
	/**@brief	ʵ����һ��ZPoin����
	* @param X	x����
	* @param Y	y����
	*/
	ZPoint(int X, int Y);

	void operator=(POINT pt);
	operator POINT();
};
