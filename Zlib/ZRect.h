/**@file	ZRect.h
* @brief	������
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZPoint.h"
#include "ZSize.h"

/**@brief ������
*/
class ZRect
{
public:
	ZPoint A;
	ZPoint B;

	/**@brief ��ʼ�� ZRect ����
	*/
	ZRect();

	/**@brief		��ʼ�� ZRect ����
	* @param Rect	Դ����
	*/
	ZRect(RECT Rect);

	/**@brief	��ʼ�� ZRect ����
	* @param A	���Ͻǵĵ�
	* @param B	���½ǵĵ�
	*/
	ZRect(ZPoint A, ZPoint B);

	/**@brief	��ʼ�� ZRect ����
	* @param X1 ���Ͻǵ�X����
	* @param Y1 ���Ͻǵ�Y����
	* @param X2 ���½ǵ�Y����
	* @param Y2 ���½ǵ�Y����
	*/
	ZRect(long X1, long Y1, long X2, long Y2);

	/**@brief	��ȡ�����С
	* @retval	��С
	*/
	ZSize GetSize();

	/**@brief		���þ����С
	* @param Size	Ŀ���С
	*/
	void SetSize(ZSize Size);

	/**@brief	��ȡRECT�ṹ
	* @retval	�ṹ
	*/
	RECT GetRect();

	operator RECT();
	operator LPCRECT();
};
