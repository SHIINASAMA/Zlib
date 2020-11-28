/**@file	ZColor.h
* @brief	��ɫ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/
#pragma once

#include <Windows.h>

/**@brief ��ɫ���
*/
class ZColor
{
private:
	COLORREF color;

public:
	/**@brief ����RGBֵ��ʼ��һ��ZColor����
	* @param R ��
	* @param G ��
	* @param B ��
	*/
	ZColor(BYTE R, BYTE G, BYTE B);

	operator COLORREF();
	void operator=(COLORREF color);

	/**@brief ��ȡ��ֵ
	* @retval ���
	*/
	BYTE GetRVar();

	/**@brief ��ȡ��ֵ
	* @retval ���
	*/
	BYTE GetGVar();

	/**@brief ��ȡ��ֵ
	* @retval ���
	*/
	BYTE GetBVar();
};
