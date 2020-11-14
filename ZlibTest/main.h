#pragma once
#include "../Zlib/ZWindow.h"
#include "../Zlib/ZStatic.h"
#include "../Zlib/ZButton.h"
#include "../Zlib/ZEdit.h"
#include "../Zlib/ZBitmap.h"
#include "../Zlib/ZPictureBox.h"
#include "../Zlib/ZProgressBar.h"

#define ID_BTN1 1

ZWindow* Win;
ZProgressBar* bar;
ZButton* btn;

DWORD WINAPI Change(LPVOID)
{
	for (int i = 0; i < 100; i++)
	{
		bar->SetValue(i);
		Sleep(1000);
	}
	btn->SetEnable(TRUE);
	return 0;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (wParam)
		{
		case ID_BTN1:
		{
			//PostMessage(bar->GetHandle(), PBM_SETPOS, 80, 0);
			DWORD ID;
			HANDLE hThread = CreateThread(NULL, 0, Change, (LPVOID)(0), 0, &ID);
			btn->SetEnable(FALSE);
			break;
		}
		default:
			break;
		}
		break;
	case WM_CREATE:
		break;
	case WM_CTLCOLORSTATIC:
		//SetWindowLong(Label->GetHandle(), GWL_EXSTYLE, WS_EX_TRANSPARENT);
		//设置透明背景必要Style WS_EX_TRANSPARENT
		return ZGraphics::SetBkTransparent(TRUE, wParam);
		break;
	case WM_PAINT:
	{
	}
	break;
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}