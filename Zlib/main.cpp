#include "ZWindow.h"
#include "ZStatic.h"
#include "ZButton.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
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
	ZWindow Win;
	Win.Info.X = 100;
	Win.Info.Y = 100;
	Win.Info.W = 400;
	Win.Info.H = 300;
	Win.Info.ClassName = L"MyApp";
	Win.Info.Title = L"你好";
	Win.Info.WndProc = WndProc;
	Win.ZInit();

	ZIControl *c = new ZButton;
	c->Text = L"Hello";
	c->X = 0;
	c->Y = 0;
	c->W = 100;
	c->H = 30;
	c->ID = NULL;
	Win.ZAddControl(c);
	//Win.ZRemoveControl(c);
	
	Win.ZStartLoop();
}