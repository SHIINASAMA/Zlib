/**@file	ZPictureBox.h
* @brief	ͼƬ�ؼ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief �Զ����Ų���Ӧ�ؼ�
*/
#define ZP_DISPLAYMODE_NORMAL	0

/**@brief �Զ���������Ӧ�ؼ�
*/
#define ZP_DISPLAYMODE_ZOOM		1

/**@brief ���Զ����Ų���Ӧ
*/
#define ZP_DISPLAYMODE_NONE		2

/**@brief ͼƬ�ؼ���
*/
class ZPictureBox : public ZControl
{
protected:
	HWND PhWnd;
	ZString Type = L"static";
	DWORD Style = WS_CHILD | WS_VISIBLE | SS_BITMAP | WS_BORDER;
	UINT Mode = ZP_DISPLAYMODE_NORMAL;
	BOOL HasImage = FALSE;
	ZBitmap Bmp;

public:
	/**@brief		��ʼ��ZPictureBox����
	* @param Rect	�ؼ�������ʹ�С
	* @param ID		�ؼ�ID
	* @param Mode	ͼ��ģʽ
	*/
	ZPictureBox(ZRect Rect, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);

	/**@brief		��ʼ��ZPictureBox����
	* @param X		�ؼ���X����
	* @param Y		�ؼ���Y����
	* @param W		�ؼ��Ŀ�
	* @param H		�ؼ��ĸ�
	* @param ID		�ؼ�ID
	* @param Mode	ͼ��ģʽ
	*/
	ZPictureBox(int X, int Y, int W, int H, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	void Init(HWND hWnd);

	/**@brief	�÷���Ӧ����WM_PAINT��Ϣ�б�����
	*/
	void Show();

	/**@brief		����ͼ��
	* @param Bmp	Ŀ��ͼ��
	*/
	void SetImage(ZBitmap Bmp);

	/**@brief	���ͼ��
	*/
	void CleanImage();

	/**@brief		������ʾģʽ
	* @param Mode	Ŀ����ʾģʽ
	*/
	void SetMode(UINT Mode);

private:
	/**@brief	�������¿ؼ�
	*/
	void UpdateMessage();
};
