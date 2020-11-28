/**@file	ZNotify.h
* @brief	ϵͳ���̿ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief ϵͳ���̿ؼ���
*/
class ZNotify : public ZControl
{
	NOTIFYICONDATA data;

public:
	/**@brief					��ʼ��ZNotify����
	* @param TipStr				��ʾ�ı�
	* @param Icon				����ͼ��
	* @param CallBackMessage	�Զ�����Ϣ
	* @param Style				���̷��
	*/
	ZNotify(ZString TipStr, ZIcon Icon, UINT CallBackMessage, UINT Style = NIF_ICON | NIF_MESSAGE | NIF_TIP);

	/**@brief		��ʼ��ZNotify����
	* @param data	NOTIFYICONDATA�ṹ��
	*/
	ZNotify(NOTIFYICONDATA data);

	/**@brief ��������
	*/
	void Delete();

	/**@brief		��ʼ��
	* @param hWnd	������
	*/
	void Init(HWND hWnd);
};
