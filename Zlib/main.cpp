#include "ZWindow.h"
#include "ZStatic.h"

ZWindow Win;

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	HWND hwndButton;
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
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

int main()
{
	// 创建窗口
	Win.Info.X = 100;
	Win.Info.Y = 100;
	Win.Info.W = 400;
	Win.Info.H = 300;
	Win.Info.ClassName = L"MyApp";
	Win.Info.Title = L"你好";
	Win.Info.WndProc = WndProc;
	Win.ZInit();
	Win.ZCreateWindow();

	ZControl *c = new ZStatic;
	c->Text = L"Hello";
	c->X = 0;
	c->Y = 0;
	c->W = 100;
	c->H = 50;
	c->ID = NULL;
	Win.ZAddControl(c);
	Win.ZRemoveControl(c);

	Win.ZStartLoop();
}