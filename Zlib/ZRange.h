/**@file	ZRange.h
* @brief	����ṹ
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include <Windows.h>
#include <Commctrl.h>

/**@brief ������
*/
class ZRange
{
public:
	int X1;
	int X2;

	/**@brief	ʵ����һ��ZRange����
	*/
	ZRange();
	/**@brief	ʵ����һ��ZRange����
	* @param X1 ��Сֵ
	* @param X2 ���ֵ
	*/
	ZRange(int X1, int X2);

	void operator=(PBRANGE Range);
	operator PBRANGE();
};
