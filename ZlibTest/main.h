#pragma once
//#define HIDE
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
#include "../Zlib/ZFile.h"
#include "../Zlib/ZThread.h"
#include "resource.h"
#include <stdio.h>

ZWindow* Win;

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