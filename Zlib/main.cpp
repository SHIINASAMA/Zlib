#include "Window.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	}
}

int main()
{
	// ��ʼ��������Ϣ
	ZWindowInfo Info;
	Info.X = 100;
	Info.Y = 100;
	Info.W = 400;
	Info.H = 300;
	Info.ClassName = L"MyApp";
	Info.Title = L"���";
	Info.WndProc = WndProc;

	// ��������
	ZWindow Win;
	Win.ZInit(Info);
	Win.ZCreateWindow();
}