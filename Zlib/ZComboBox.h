#pragma once

#include "ZControl.h"
#include "ZItem.h"

class ZComboBox : public ZControl
{
private:
	ZString Type = L"combobox";

public:
	ZComboBox();
	ZComboBox(int X, int Y, int W, int H, DWORD Style = WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_HASSTRINGS);
	ZComboBox(ZRect Rect, DWORD Style = WS_CHILD | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_HASSTRINGS);

	void Init(HWND hWnd);

	void AddItem(ZString str);
	void RemoveAt(UINT Pos);
	void Insert(UINT Pos, ZString str);
	UINT GetSelectedIndex();
	void SetSelectedIndex(UINT Pos);
};
