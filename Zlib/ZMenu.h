#pragma once

#include "ZControl.h"
#include "ZItem.h"

#define ZMenuItem ZMenu

class ZMenu : public ZControl, public ZItem
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
	//设置文本
	void SetTextPre(ZString str);
	//设置ID
	void SetIDPre(UINT ID);
	//设置风格
	void SetStylePre(DWORD Style = MF_STRING | MF_POPUP);
	//添加控件时父类调用的函数
	void Init(HWND hWnd);
	//弹出上下文菜单
	void ShowPopupMenu(HWND hWnd, UINT X, UINT Y, UINT Flag = TPM_LEFTALIGN | TPM_LEFTBUTTON);

	//ZItem接口实现
	//添加子项
	void AddItem(ZItem* Item);
	//获取子项
	ZItem* GetItemAt(UINT Pos);
	//插入子项
	void InsertItem(UINT Pos, ZItem* Item);
	//移除子项
	void RemoveAt(UINT Pos);
	//子项初始化
	void InitItem(HWND hWnd);

	operator HMENU();
	void operator=(HMENU hMenu);
};