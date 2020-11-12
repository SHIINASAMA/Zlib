#pragma once
#include "../Zlib/ZWindow.h"
#include "../Zlib/ZStatic.h"
#include "../Zlib/ZButton.h"
#include "../Zlib/ZEdit.h"
#include "../Zlib/ZBitmap.h"
#include "../Zlib/ZPictureBox.h"

ZWindow* Win;
ZStatic* Label;
ZButton* Button;
ZEdit* Edit;
ZPictureBox* Pox;

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case 0:
			//MessageBox(hWnd, L"你点击了我", L"消息", MB_OK | MB_ICONINFORMATION);
			Pox->SetImage(ZBitmap(L"C:\\Users\\kaoru\\Desktop\\b.bmp"));
			break;
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
		Pox->Show();
	}
	break;
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}