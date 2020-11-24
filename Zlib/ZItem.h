#pragma once

#include <Windows.h>

class ZItem
{
private:
	// 供父项 AddItem 调用
	void InitItem(HWND hWnd);

public:
	// 添加子项
	void AddItem(ZItem* Item);
	// 移除子项
	void RemoveAt(UINT Pos);
	// 插入子项
	void InsertItem(UINT Pos, ZItem* Item);
};
