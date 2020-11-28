/**@file	ZControl.h
* @brief	�ؼ�����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include <Windows.h>
#include "ZGraphics.h"
#include "ZFont.h"

class ZControl
{
protected:
	HWND hWnd;
	HINSTANCE hInstance;
	WNDCLASSEX wcex;

	ZString ClassName;
	ZString Text;
	ZString Type;
	DWORD Style;
	DWORDLONG ID;
	ZRect Rect;
	ZFont Font;

	/**@brief ����ע����
	*/
	void RegClass();

	/**@brief ��ʼ��Ϣѭ��
	*/
	void StartLoop();

public:
	ZControl();

	/**@brief		��ʼ��
	* @param hWnd	������
	*/
	virtual void Init(HWND hWnd);

	/**@brief ��ȡ��������
	* @retval ����
	*/
	ZString GetClassName();

	/**@brief ��ȡ���
	* @retval ���
	*/
	HWND GetHandle();

	/**@brief ��ȡ�ı�
	* @retval �ı�
	*/
	ZString GetText();

	/**@brief		�����ı�
	* @param str	���õ��ı�
	*/
	void SetText(ZString str);

	/**@brief ��ȡ��ǰʹ�õ�����
	* @retval ��ǰʹ�õ�����
	*/
	ZFont GetFont();

	/**@brief		��������
	* @param Font	Ŀ������
	*/
	void SetFont(ZFont Font);

	/**@brief	��ȡ�ؼ���ǰ��λ��
	* @retval	λ��
	*/
	ZRect GetPosition();

	/**@brief		���ÿؼ�λ��
	* @param Rect	Ŀ��λ��
	*/
	void SetPosition(ZRect Rect);

	/**@brief	��ȡ�ؼ���С
	* @retval	��С
	*/
	ZSize GetSize();

	/**@brief		���ÿؼ���С
	* @param Size	Ŀ���С
	*/
	void SetSize(ZSize Size);

	/**@brief	���ص�ǰ����
	* @retval	����
	*/
	ZRect GetRect();
};
