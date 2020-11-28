/**@file	ZPictureBox.h
* @brief	图片控件类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief 自动缩放不适应控件
*/
#define ZP_DISPLAYMODE_NORMAL	0

/**@brief 自动缩放且适应控件
*/
#define ZP_DISPLAYMODE_ZOOM		1

/**@brief 不自动缩放不适应
*/
#define ZP_DISPLAYMODE_NONE		2

/**@brief 图片控件类
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
	/**@brief		初始化ZPictureBox对象
	* @param Rect	控件的坐标和大小
	* @param ID		控件ID
	* @param Mode	图像模式
	*/
	ZPictureBox(ZRect Rect, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);

	/**@brief		初始化ZPictureBox对象
	* @param X		控件的X坐标
	* @param Y		控件的Y坐标
	* @param W		控件的宽
	* @param H		控件的高
	* @param ID		控件ID
	* @param Mode	图像模式
	*/
	ZPictureBox(int X, int Y, int W, int H, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	void Init(HWND hWnd);

	/**@brief	该方法应该在WM_PAINT消息中被调用
	*/
	void Show();

	/**@brief		设置图像
	* @param Bmp	目标图像
	*/
	void SetImage(ZBitmap Bmp);

	/**@brief	清除图像
	*/
	void CleanImage();

	/**@brief		设置显示模式
	* @param Mode	目标显示模式
	*/
	void SetMode(UINT Mode);

private:
	/**@brief	立即更新控件
	*/
	void UpdateMessage();
};
