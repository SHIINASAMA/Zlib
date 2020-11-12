#include "ZProgressBar.h"

ZProgressBar::ZProgressBar()
{
}

ZProgressBar::ZProgressBar(int X, int Y, int W, int H, UINT Max, UINT Min)
{
	this->Rect = ZRect(X, Y, X + W, Y + H);
	SendMessage(this->hWnd, PBM_SETRANGE, 0, MAKELPARAM(Min, Max));
}

ZProgressBar::ZProgressBar(ZRect Rect, UINT Max, UINT Min)
{
	this->Rect = Rect;
	SendMessage(this->hWnd, PBM_SETRANGE, 0, MAKELPARAM(Min, Max));
}

void ZProgressBar::Init(HWND hWnd)
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
}

void ZProgressBar::SetValue(UINT value)
{
	SendMessage(hWnd, PBM_SETPOS, value, 0);
}

UINT ZProgressBar::GetValue()
{
	return (UINT)SendMessage(hWnd, PBM_GETPOS, 0, 0);
}

ZRange ZProgressBar::GetRange()
{
	PBRANGE range;
	SendMessage(hWnd, PBM_GETRANGE, TRUE, (LPARAM)&range);
	return ZRange(range.iLow, range.iHigh);
}

void ZProgressBar::SetRange(UINT Max, UINT Min)
{
	SendMessage(hWnd, PBM_SETRANGE, 0, MAKELPARAM(Min, Max));
}

void ZProgressBar::SetRange(ZRange Range)
{
	SendMessage(hWnd, PBM_SETRANGE, 0, MAKELPARAM(Range.X1, Range.X2));
}