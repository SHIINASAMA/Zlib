/**@file	ZIcon.h
* @brief	Iconͼ�����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZImage.h"

/**@brief Iconͼ����
*/
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
	* @param ID		��ԴID
	*/
	ZIcon(WORD ID);

	/**@brief		����·������ZIcon����
	* @param Path	�ⲿ��Դ·��
	*/
	void LoadResFromFile(ZString Path);

	/**@brief		������ԴID��ʼ��ZIcon����
	* @param ID		��ԴID
	*/
	void LoadRes(WORD ID);
};
