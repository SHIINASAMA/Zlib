/**@file	ZImage.h
* @brief	ͼ�����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include <Windows.h>
#include "ZString.h"

class ZImage
{
public:
	/**@brief	���� ID ������Դ
	* @param	ID
	*/
	virtual void LoadRes(WORD ID) = 0;

	/**@brief	����·��������Դ
	* @param	path
	*/
	virtual void LoadResFromFile(ZString path) = 0;
};
