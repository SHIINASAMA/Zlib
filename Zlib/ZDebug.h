/**@file	ZDebug.h
* @brief	����������
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-30
*/
#pragma once
#include <Windows.h>
#include "ZString.h"

/**@brief ���������
*/
class ZDebug
{
public:
	/**@brief			������ʾ������Ϣ
	* @param nodeTag	��������
	*/
	static void ShowLastError(ZString nodeTag);
};