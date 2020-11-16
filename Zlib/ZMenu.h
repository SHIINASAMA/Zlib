#pragma once

#include "ZControl.h"

#define ZMenuItem ZMenu

class ZMenu : public ZControl
{
protected:
	HMENU hMenu = CreateMenu();

public:
	//初始化一个 ZMenu 对象
	ZMenu();
	//初始化一个 ZMenu 对象
	ZMenu(ZString Text, DWORDLONG ID, DWORD Style = MF_STRING | MF_POPUP);

	//获取 ZMenu 对象句柄
	HWND GetHandle();
	//添加子项
	void AddSubItem(ZMenuItem Item);
	//添加同级项
	void AddItem(ZMenuItem Item);
	//获取子项
	ZMenu GetSubItem(UINT Pos);

	//设置文本
	void SetTextPre(ZString str);
	//设置ID
	void SetIDPre(UINT ID);
	//设置风格
	void SetStylePre(DWORD Style = MF_STRING | MF_POPUP);

	//添加控件时父类调用的函数
	void Init(HWND hWnd);
	//添加项时父类调用的函数
	void InitItem();

	//弹出上下文菜单
	void ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag = TPM_LEFTALIGN | TPM_LEFTBUTTON);

	operator HMENU();
	void operator=(HMENU hMenu);
};