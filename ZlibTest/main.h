#pragma once
#include "../Zlib/ZWindow.h"
#include "../Zlib/ZStatic.h"
#include "../Zlib/ZButton.h"
#include "../Zlib/ZEdit.h"

ZWindow* Win;
ZStatic* Label;
ZButton* Button;
ZEdit* Edit;

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	HDC hdc;
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case 0:
			MessageBox(hWnd, L"��������", L"��Ϣ", MB_OK | MB_ICONINFORMATION);
			break;
		default:
			break;
		}
		break;
	case WM_CTLCOLORSTATIC:
		//SetWindowLong(Label->GetHandle(), GWL_EXSTYLE, WS_EX_TRANSPARENT);
		//����͸��������ҪStyle WS_EX_TRANSPARENT
		return ZGraphics::SetBkTransparent(TRUE,wParam);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}