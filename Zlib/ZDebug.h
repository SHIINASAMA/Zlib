/**@file	ZDebug.h
* @brief	程序调试相关
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-30
*/
#pragma once
#include <Windows.h>
#include "ZString.h"

/**@brief 程序调试类
*/
class ZDebug
{
public:
	/**@brief			快速显示错误信息
	* @param nodeTag	弹窗标题
	*/
	static void ShowLastError(ZString nodeTag);
};