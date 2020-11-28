/**@file	ZProgressBar.h
* @brief	�������ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"
#include "ZRange.h"

/**@brief �������ؼ���
*/
class ZProgressBar : public ZControl
{
protected:
	ZString Type = L"msctls_progress32";
	DWORD Style = WS_CHILD | WS_VISIBLE | PBS_SMOOTH;

public:
	/**@brief		��ʼ��һ�� ZProgressBar ����
	* @param X		�ؼ���X����
	* @param Y		�ؼ���Y����
	* @param W		�ؼ��Ŀ�
	* @param H		�ؼ��ĸ�
	* @param Max	�������ֵ
	* @param Min	������Сֵ
	*/
	ZProgressBar(int X, int Y, int W, int H, UINT Max = 100, UINT Min = 0);

	/**@brief		��ʼ��һ�� ZProgressBar ����
	* @param Rect	�ؼ�������ʹ�С
	* @param Max	�������ֵ
	* @param Min	������Сֵ
	*/
	ZProgressBar(ZRect Rect, UINT Max = 100, UINT Min = 0);

	/**@brief		��ʼ��
	* @param hWnd	������
	*/
	void Init(HWND hWnd);

	/**@brief		���ý���ֵ
	* @param value	Ŀ��ֵ
	*/
	void SetValue(UINT value);

	/**@brief	��ȡ����ֵ
	* @retval	����ֵ
	*/
	UINT GetValue();

	/**@brief ��ȡ����������
	* @retval ����
	*/
	ZRange GetRange();

	/**@brief		���ý���������
	* @param Max	���ֵ
	* @param Min	��Сֵ
	*/
	void SetRange(UINT Max, UINT Min);

	/**@brief		���ý���������
	* @param Range	Ŀ������
	*/
	void SetRange(ZRange Range);
};