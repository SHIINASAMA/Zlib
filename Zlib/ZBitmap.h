/**@file	ZBitmap.h
* @brief	Bmpͼ�����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/
#pragma once
#include "ZImage.h"
class ZBitmap :public ZImage
{
private:
	HBITMAP hmap;

public:
	/**@brief		����·����ʼ����Դ
	* @param path	�ⲿ��Դ·��
	*/
	ZBitmap(ZString path);
	/**@brief	������Դ ID ��ʼ�� ZBitmap ����
	* @param	ID ��ԴID
	*/
	ZBitmap(WORD ID);

	/**@brief	���� ID ������Դ
	* @param	ID
	*/
	void LoadRes(WORD ID);

	/**@brief	����·��������Դ
	* @param	path
	*/
	void LoadResFromFile(ZString path);

	/**@brief ����BITMAP����
	* @retval BITMAP�ṹ
	*/
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
