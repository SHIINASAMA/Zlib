#pragma once
#include "ZControl.h"
class ZListBox : public ZControl
{
private:
	ZString Type = L"listbox";

public:
	//初始化一个 ZListBox 对象
	ZListBox();
	//初始化一个 ZListBox 对象
	ZListBox(ZRect rect, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);
	//初始化一个 ZListBox 对象
	ZListBox(int X, int Y, int W, int H, DWORD Style = WS_CHILD | WS_VSCROLL | WS_TABSTOP | LBS_STANDARD | LBS_HASSTRINGS | WS_VISIBLE | WS_BORDER);

	void Init(HWND hWnd);

	//添加一个子项
	void AddItem(ZString str);
	//移除一个子项
	void RemoveAt(UINT Pos);
	//在一个位置插入子项
	void Insert(UINT Pos, ZString str);
	//获取一个子项的文本
	ZString GetItemText(UINT Pos);
	//获取选取子项的索引值
	UINT GetSelectedIndex();
	//设置选取子项的索引值
	void SetSelectedIndex(UINT Pos);
	//获取选择子项的文本
	ZString GetSelectedText();
	//清空子项
	void RemoveAll();
	//获取子项总数
	UINT GetCount();
};
