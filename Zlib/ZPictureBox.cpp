#include "ZPictureBox.h"

ZPictureBox::ZPictureBox()
{
}

ZPictureBox::ZPictureBox(ZRect Rect, ZBitmap Bmp, UINT Mode)
{
	this->Rect = Rect;
	if (!Bmp)
	{
		this->Bmp = Bmp;
		this->HasImage = TRUE;
	}
	this->Mode = Mode;
}

ZPictureBox::ZPictureBox(int X, int Y, int W, int H, ZBitmap Bmp, UINT Mode)
{
	ZRect Rect;
	Rect.A.X = X;
	Rect.A.Y = Y;
	Rect.B.X = Rect.A.X + W;
	Rect.B.Y = Rect.A.Y + H;
	this->Rect = Rect;
	if (!Bmp)
	{
		this->Bmp = Bmp;
		this->HasImage = TRUE;
	}
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

	Font.Create(L"ÐÂËÎÌå");
}

void ZPictureBox::Show()
{
	PAINTSTRUCT ps;
	HDC hdc = BeginPaint(this->hWnd, &ps);
	HDC hdcmem = CreateCompatibleDC(hdc);
	ZBitmap zbmp;
	zbmp.LoadRes(L"C:\\Users\\kaoru\\Desktop\\b.bmp");
	BITMAP bmp = zbmp.GetBitmap();
	SelectObject(hdcmem, zbmp);
	BitBlt(hdc, 0, 0, bmp.bmWidth, bmp.bmHeight, hdcmem, 0, 0, SRCCOPY);
	DeleteDC(hdcmem);
	EndPaint(this->hWnd, &ps);
}

void ZPictureBox::SetImage(ZBitmap Bmp)
{
}

void ZPictureBox::CleanImage()
{
}

void ZPictureBox::UpdateMessage()
{
}