#pragma once
#include "ZWindow.h"
#include "ZStatic.h"
#include "ZButton.h"
#include "ZEdit.h"

ZWindow Win;
ZIControl* a;

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case 1:
			MessageBox(hWnd, L"你点击了我", L"信息", MB_OK);
			break;
		default:
			break;
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}