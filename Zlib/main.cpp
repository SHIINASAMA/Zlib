#include "ZWindow.h"
#include <stdio.h>

ZWindow Win;

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	HWND hwndButton;
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case 3301:
			MessageBox(hWnd, L"S", L"S", MB_OK);
			break;
		default:
			break;
		}
		break;
	case WM_CREATE:
		 //hwndButton = CreateWindow(
			//L"BUTTON",   // predefined class  
			//L"OK",       // button text  
			//WS_VISIBLE | WS_CHILD ,  // styles  
			//// Size and position values are given explicitly, because  
			//// the CW_USEDEFAULT constant gives zero values for buttons.  
			//10,         // starting x position  
			//10,         // starting y position  
			//100,        // button width  
			//100,        // button height  
			//hWnd,       // parent window  
			//(HMENU)3301,       // No menu  
			//(HINSTANCE)GetWindowLong(hWnd, -6),
			//NULL);      // pointer not needed  
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

	ZControl c;
	c.Type = L"button";
	c.Text = L"Hello";
	c.Style = WS_VISIBLE | WS_CHILD;
	c.X = 0;
	c.Y = 0;
	c.W = 100;
	c.H = 50;
	c.ID = (HMENU)3301;
	Win.ZAddControl(c);

	Win.ZStartLoop();
}