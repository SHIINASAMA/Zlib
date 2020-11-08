#include "../Zlib/ZWindow.h"
#include "../Zlib/ZButton.h"
#include "../Zlib/ZIcon.h"

ZWindow Win;
ZControl* Button = new ZButton;

LRESULT CALLBACK WndProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (wParam)
		{
		case 0:
			MessageBox(hWnd, L"You clicked me!", L"Message", NULL);
			break;
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
	Win.Info.X = 100;
	Win.Info.Y = 100; 
	Win.Info.W = 300;
	Win.Info.H = 240;
	Win.Info.ClassName = L"TestApp";
	Win.Info.Title = L"This is a title.";
	Win.Info.WndProc = WndProc;
	Win.ZInit();

	Button->X = 10;
	Button->Y = 10;
	Button->W = 80;
	Button->H = 30;
	Button->Text = L"Click Me";
	Button->ID = 0;
	Win.ZAddControl(Button);

	Win.ZStartLoop();
}