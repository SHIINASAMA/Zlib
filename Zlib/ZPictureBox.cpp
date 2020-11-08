#include "ZPictureBox.h"

ZPictureBox::ZPictureBox()
{
	this->Type = L"";
	this->Style = WS_CHILD | WS_VISIBLE | SS_BITMAP;
}

void ZPictureBox::Create(HWND hWnd)
{
	this->hWnd = CreateWindow(
		Type,
		Text,
		Style,
		X,
		Y,
		W,
		H,
		hWnd,
		(HMENU)ID,
		(HINSTANCE)GetWindowLong(hWnd, -6),
		NULL
	);
	ChangeFont();
}

void ZPictureBox::SetImage(ZBitmap zbmp)
{
	SendMessage(this->hWnd, STM_SETIMAGE, (WPARAM)0, (LPARAM)zbmp.GetHandle());
}

int ZPictureBox::ZRegisterClass()
{
	// ³õÊ¼»¯ WindowClass
	WNDCLASSEX wcex;
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = NULL;
	wcex.hCursor = NULL;
	wcex.hbrBackground = NULL;
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = L"picturebox";
	wcex.hIconSm = NULL;

	// ×¢²á WindowClass
	if (!RegisterClassEx(&wcex))
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

LRESULT ZPictureBox::WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_PAINT:
	{
		HDC hdcmem;
		HBITMAP hbmp;
		BITMAP bmp;

		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);
		hdcmem = CreateCompatibleDC(hdc);
		hbmp = (HBITMAP)LoadImage(NULL, L"C:\\Users\\kaoru\\Desktop\\b.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

		GetObject(hbmp, sizeof(bmp), &bmp);
		SelectObject(hdcmem, hbmp);
		BitBlt(hdc, 0, 0, bmp.bmWidth, bmp.bmHeight, hdcmem, 0, 0, SRCCOPY);

		DeleteObject(hbmp);
		DeleteDC(hdcmem);
		EndPaint(hWnd, &ps);
		break;
	}
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
return DefWindowProc(hWnd, uMsg, wParam, lParam);
}
