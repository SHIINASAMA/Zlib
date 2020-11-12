#include "ZPictureBox.h"

ZPictureBox::ZPictureBox()
{
}

ZPictureBox::ZPictureBox(ZRect Rect, HWND PhWnd, DWORDLONG ID, UINT Mode)
{
	this->Rect = Rect;
	this->Bmp = Bmp;
	this->HasImage = TRUE;
	this->PhWnd = PhWnd;
	this->Mode = Mode;
}

ZPictureBox::ZPictureBox(int X, int Y, int W, int H, HWND PhWnd, DWORDLONG ID, UINT Mode)
{
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.B.X = Rect.A.X + W;
	Rect.B.Y = Rect.A.Y + H;
	this->Rect = Rect;
	this->Bmp = Bmp;
	this->HasImage = TRUE;
	this->PhWnd = PhWnd;
	this->Mode = Mode;
}

void ZPictureBox::Init(HWND hWnd)
{
	this->hWnd = CreateWindow(
		Type,
		NULL,
		Style,
		Rect.A.X,
		Rect.A.Y,
		Rect.GetSize().W,
		Rect.GetSize().H,
		hWnd,
		(HMENU)ID,
		(HINSTANCE)GetWindowLong(hWnd, -6),
		NULL
	);

	Font.Create(L"新宋体");
}

void ZPictureBox::Show()
{
	if (HasImage)
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(this->hWnd, &ps);
		HDC hdcmem = CreateCompatibleDC(hdc);
		LONG w = Rect.GetSize().W, h = Rect.GetSize().H;
		SelectObject(hdcmem, Bmp);
		BITMAP bmp = Bmp.GetBitmap();
		switch (Mode)
		{
		case ZP_DISPLAYMODE_NORMAL:
			//这里用 StretchBlt
			SetStretchBltMode(hdc, COLORONCOLOR);
			StretchBlt(hdc, 0, 0, w, h, hdcmem, 0, 0, bmp.bmWidth, bmp.bmHeight, SRCCOPY);
			break;
		case ZP_DISPLAYMODE_ZOOM:
			SetStretchBltMode(hdc, COLORONCOLOR);
			if (bmp.bmWidth >= bmp.bmHeight)
			{
				long y = (double)bmp.bmHeight / (double)bmp.bmWidth * Rect.GetSize().H;
				y = (h - y) / 2;
				StretchBlt(hdc, 0, y, w, h - 2 * y, hdcmem, 0, 0, bmp.bmWidth, bmp.bmHeight, SRCCOPY);
			}
			else
			{
				long x = (double)bmp.bmWidth / (double)bmp.bmHeight * Rect.GetSize().W;
				x = (w - x) / 2;
				StretchBlt(hdc, x, 0, w - 2 * x, h, hdcmem, 0, 0, bmp.bmWidth, bmp.bmHeight, SRCCOPY);
			}
			break;
		case ZP_DISPLAYMODE_NONE:
			if (bmp.bmWidth < Rect.GetSize().W)
				w = bmp.bmWidth;
			if (bmp.bmHeight < Rect.GetSize().H)
				h = bmp.bmHeight;
			BitBlt(hdc, 0, 0, w, h, hdcmem, 0, 0, SRCCOPY);
			break;
		default:
			break;
		}
		DeleteDC(hdcmem);
		EndPaint(this->hWnd, &ps);
	}
}

void ZPictureBox::SetImage(ZBitmap Bmp)
{
	this->Bmp = Bmp;
	this->HasImage = TRUE;
	UpdateMessage();
}

void ZPictureBox::CleanImage()
{
	this->Bmp = nullptr;
	this->HasImage = FALSE;
	UpdateMessage();
}

void ZPictureBox::SetMode(UINT Mode)
{
	this->Mode = Mode;
	UpdateMessage();
}

void ZPictureBox::UpdateMessage()
{
	RECT rect = Rect.GetRect();
	InvalidateRect(PhWnd, &rect, FALSE);
}