#include "ZWindow.h"
#include "ZStatic.h"
#include "ZButton.h"
#include "ZEdit.h"

ZIControl* a = new ZStatic;
ZIControl* b = new ZEdit;
ZIControl* c = new ZButton;

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	ZString name;
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case 1:
			name = b->GetText();
			WChar str[128];
			wsprintf(str, L"很高兴认识你，%s",name.ToWString());
			MessageBox(hWnd, str, L"你好",MB_OK);
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
	// 创建窗口
	ZWindow Win;
	Win.Info.X = 100;
	Win.Info.Y = 100;
	Win.Info.W = 400;
	Win.Info.H = 300;
	Win.Info.ClassName = L"MyApp";
	Win.Info.Title = L"Hello";
	Win.Info.WndProc = WndProc;
	Win.ZInit();

	a->Text = L"Your name is:";
	a->X = 10;
	a->Y = 10;
	a->W = 100;
	a->H = 20;
	a->ID = NULL;
	Win.ZAddControl(a);

	b->X = 120;
	b->Y = 10;
	b->W = 100;
	b->H = 20;
	b->ID = NULL;
	Win.ZAddControl(b);

	c->Text = L"Hello";
	c->X = 230;
	c->Y = 10;
	c->W = 80;
	c->H = 20;
	c->ID = (HMENU)1;
	Win.ZAddControl(c);
	
	Win.ZStartLoop();
}