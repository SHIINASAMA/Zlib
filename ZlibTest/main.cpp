#include "../Zlib/ZWindow.h"
#include "../Zlib/ZStatic.h"
#include "../Zlib/ZButton.h"

LRESULT CALLBACK WndProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case 0:
			MessageBox(hWnd, L"你点击了我", L"消息", MB_OK | MB_ICONINFORMATION);
			break;
		default:
			break;
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

int main()
{
	ZWindow* Win = new ZWindow(L"This is a title", L"MyApp", 200,200,300,200, WndProc);
	Win->Create();

	ZStatic* Label = new ZStatic(L"你好", 10, 10, 50, 25);
	Win->AddControl(Label);

	ZButton* Button = new ZButton(L"点我", 10, 35, 50, 25, 0);
	Win->AddControl(Button);

	Win->Run();
	return 0;
}