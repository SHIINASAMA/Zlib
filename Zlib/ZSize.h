/**@file	ZPoint.h
* @brief	����
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

	/**@brief	ʵ����һ��ZPoin����
	*/
	ZSize();

	/**@brief	ʵ����һ��ZPoin����
	* @param W	��
	* @param H	��
	*/
	ZSize(long W, long Y);
};