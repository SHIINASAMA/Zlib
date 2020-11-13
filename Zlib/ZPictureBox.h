#pragma once
#include "ZControl.h"

//自动缩放不适应控件
#define ZP_DISPLAYMODE_NORMAL	0
//自动缩放且适应控件
#define ZP_DISPLAYMODE_ZOOM		1
//不自动缩放不适应
#define ZP_DISPLAYMODE_NONE		2

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
	//初始化一个 ZPictureBox 对象
	ZPictureBox();
	//初始化一个 ZPictureBox 对象，参数 PhWnd 为父窗口句柄，仅用于刷新图像
	ZPictureBox(ZRect Rect, HWND PhWnD, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	//初始化一个 ZPictureBox 对象，参数 PhWnd 为父窗口句柄，仅用于刷新图像
	ZPictureBox(int X, int Y, int W, int H, HWND PhWnd, DWORDLONG ID, UINT Mode = ZP_DISPLAYMODE_NORMAL);
	void Init(HWND hWnd);

	//该方法应该在 WM_PAINT 消息中被调用
	void Show();
	//设置图像
	void SetImage(ZBitmap Bmp);
	//清除图像
	void CleanImage();
	//设置显示模式
	void SetMode(UINT Mode);

private:
	//立即刷新
	void UpdateMessage();
};
