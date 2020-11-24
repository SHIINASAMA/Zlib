#pragma once

#include <Windows.h>

class ZItem
{
private:
	// 供父项 AddItem 调用
	virtual void InitItem(HWND hWnd) = 0;

public:
	// 添加子项
	virtual void AddItem(ZItem* Item) = 0;
	// 移除子项
	virtual void RemoveAt(UINT Pos) = 0;
	// 插入子项
	virtual void InsertItem(UINT Pos, ZItem* Item) = 0;
	// 获取子项
	virtual ZItem* GetItemAt(UINT Pos) = 0;
};
