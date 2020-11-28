/**@file	ZImage.h
* @brief	图像基类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include <Windows.h>
#include "ZString.h"

class ZImage
{
public:
	/**@brief	根据 ID 加载资源
	* @param	ID
	*/
	virtual void LoadRes(WORD ID) = 0;

	/**@brief	根据路径加载资源
	* @param	path
	*/
	virtual void LoadResFromFile(ZString path) = 0;
};
