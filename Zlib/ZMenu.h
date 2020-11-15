#pragma once

#include "ZControl.h"

#define ZMenuItem ZMenu

class ZMenu : public ZControl
{
	HMENU hMenu = CreateMenu();

public:
	//初始化一个 ZMenu 对象
	ZMenu();
	//初始化一个 ZMenu 对象
	ZMenu(ZString Text, DWORDLONG ID, DWORD Style = MF_STRING | MF_POPUP);
	//获取 ZMenu 对象句柄
	HWND GetHandle();
	//添加子项
	void AddItem(ZMenuItem Item);

	//添加控件时父类调用的函数
	void Init(HWND hWnd);
	//添加子项时父类调用的函数
	void InitItem();
};