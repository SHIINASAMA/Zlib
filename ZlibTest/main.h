#pragma once
#define HIDE
#include "../Zlib/ZWindow.h"
#include "../Zlib/ZStatic.h"
#include "../Zlib/ZButton.h"
#include "../Zlib/ZEdit.h"
#include "../Zlib/ZBitmap.h"
#include "../Zlib/ZPictureBox.h"
#include "../Zlib/ZProgressBar.h"
#include "../Zlib/ZMenu.h"
#include "../Zlib/ZNotify.h"
#include "../Zlib/ZComboBox.h"
#include "../Zlib/ZListBox.h"
#include "resource.h"
#include <stdio.h>

ZWindow* Win;
ZStatic* text;
LPWSTR str = new WCHAR[128];

DWORD WINAPI Change(LPVOID)
{
	int time = 0;
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			for (int s = 0; s < 60; s++)
			{
				wsprintf(str, L"%d:%d:%d第%d次想你", h, m, s, ++time);
				text->SetText(str);
				ZGraphics::InvalidateRect(Win->GetHandle(), text->GetRect(), TRUE);
				Sleep(1000);
			}
		}
	}
	return 0;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (wParam)
		{
		default:
			break;
		}
		break;
	case WM_CTLCOLORSTATIC:
		//SetWindowLong(Label->GetHandle(), GWL_EXSTYLE, WS_EX_TRANSPARENT);
		//设置透明背景必要Style WS_EX_TRANSPARENT
		return ZGraphics::SetBkTransparent(TRUE, wParam);
		break;
	case WM_PAINT:
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}