#include "../Zlib/ZWindow.h"
#include "../Zlib/ZPictureBox.h"

ZWindow Win;
ZPictureBox* C = new ZPictureBox;

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
	case WM_PAINT: 
	{
		HDC hdcmem;
		HBITMAP hbmp;
		BITMAP bmp;

		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(Win.ZGetHandle(), &ps);
		hdcmem = CreateCompatibleDC(hdc);
		hbmp = (HBITMAP)LoadImage(NULL, L"C:\\Users\\kaoru\\Desktop\\b.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

		GetObject(hbmp, sizeof(bmp), &bmp);
		SelectObject(hdcmem, hbmp);
		BitBlt(hdc, 0, 0, bmp.bmWidth, bmp.bmHeight, hdcmem, 0, 0, SRCCOPY);

		DeleteObject(hbmp);
		DeleteDC(hdcmem);
		EndPaint(Win.ZGetHandle(), &ps);
		break; 
	}
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

	C->X = 10;
	C->Y = 10;
	C->W = 200;
	C->H = 180;
	C->ID = 0;
	//C->SetImage(bmp);
	Win.ZAddControl(C);

	Win.ZStartLoop();
}