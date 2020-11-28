/**@file	ZIcon.h
* @brief	Iconͼ�����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZImage.h"

class ZIcon : public ZImage
{
	HICON hIcon;
public:
	void operator=(HICON hIcon);
	operator HICON();

	/**@brief		����·����ʼ��ZIcon����
	* @param path	�ⲿ��Դ·��
	*/
	ZIcon(ZString path);

	/**@brief		������ԴID��ʼ��ZIcon����
	* @param path	��ԴID
	*/
	ZIcon(WORD ID);

	/**@brief		����·������ZIcon����
	* @param path	�ⲿ��Դ·��
	*/
	void LoadResFromFile(ZString Path);

	/**@brief		������ԴID��ʼ��ZIcon����
	* @param path	��ԴID
	*/
	void LoadRes(WORD ID);
};
