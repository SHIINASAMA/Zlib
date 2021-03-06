﻿#include "ZPictureBox.h"

ZPictureBox::ZPictureBox(ZRect Rect, DWORDLONG ID, UINT Mode)
{
	this->Rect = Rect;
	this->Bmp = Bmp;
	this->HasImage = TRUE;
	this->PhWnd = PhWnd;
	this->Mode = Mode;
}

ZPictureBox::ZPictureBox(int X, int Y, int W, int H, DWORDLONG ID, UINT Mode)
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
	this->PhWnd = hWnd;
	Font.Create(L"新宋体");
}

void ZPictureBox::Show()
{
	if (HasImage)
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(this->hWnd, &ps);
		HDC hdcmem = CreateCompatibleDC(hdc);
		SelectObject(hdcmem, Bmp);
		BITMAP bmp = Bmp.GetBitmap();
		switch (Mode)
		{
		case ZP_DISPLAYMODE_NORMAL:
			SetStretchBltMode(hdc, COLORONCOLOR);
			{
				StretchBlt(hdc, 0, 0, Rect.GetSize().W, Rect.GetSize().H, hdcmem, 0, 0, bmp.bmWidth, bmp.bmHeight, SRCCOPY);
				break;
			}
		case ZP_DISPLAYMODE_ZOOM:
			SetStretchBltMode(hdc, COLORONCOLOR);
			{
				double con = (double)Rect.GetSize().W / (double)Rect.GetSize().H;
				double pic = (double)bmp.bmWidth / (double)bmp.bmHeight;

				if (con >= 1)
				{
					LONG x = pic * Rect.GetSize().H;
					x = (Rect.GetSize().W - x) / 2;
					StretchBlt(hdc, x, 0, Rect.GetSize().W - 2 * x, Rect.GetSize().H, hdcmem, 0, 0, bmp.bmWidth, bmp.bmHeight, SRCCOPY);
				}
				else
				{
					LONG y = Rect.GetSize().W / pic;
					y = (Rect.GetSize().H - y) / 2;
					StretchBlt(hdc, 0, y, Rect.GetSize().W, Rect.GetSize().H - 2 * y, hdcmem, 0, 0, bmp.bmWidth, bmp.bmHeight, SRCCOPY);
				}
				break;
			}
		case ZP_DISPLAYMODE_NONE:
		{
			LONG w = Rect.GetSize().W, h = Rect.GetSize().H;
			if (bmp.bmWidth < Rect.GetSize().W)
				w = bmp.bmWidth;
			if (bmp.bmHeight < Rect.GetSize().H)
				h = bmp.bmHeight;
			BitBlt(hdc, 0, 0, w, h, hdcmem, 0, 0, SRCCOPY);
			break;
		}
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