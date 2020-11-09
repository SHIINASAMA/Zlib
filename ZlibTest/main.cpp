#include "../Zlib/ZWindow.h"

LRESULT CALLBACK WndProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

int main()
{
	ZRect* Rect = new ZRect(10, 10, 310, 210);
	ZWindow* Win = new ZWindow(L"This is a title", L"MyApp", *Rect,WndProc);
	Win->InitWindow();
}