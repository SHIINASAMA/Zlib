/**@file	ZSize.h
* @brief	��С��
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include <Windows.h>

/**@brief ��С��
*/
class ZSize
{
public:
	long W = 0;
	long H = 0;

	/**@brief	ʵ����һ��ZPoint����
	*/
	ZSize();

	/**@brief	ʵ����һ��ZPoint����
	* @param W	��
	* @param H	��
	*/
	ZSize(long W, long H);
};