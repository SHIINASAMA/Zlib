#include "main.h"

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();

	bar = new ZProgressBar(5, 5, 320, 25);
	Win->AddControl(bar);

	btn = new ZButton(L"����", 5, 35, 40, 25, ID_BTN1);
	Win->AddControl(btn);

	/*HMENU h1 = CreateMenu();
	HMENU h2 = CreateMenu();
	AppendMenu(h2, MF_STRING | MF_POPUP, 1000, L"�����˵�");
	AppendMenu(h1, MF_STRING | MF_POPUP, (UINT_PTR)h2, L"һ���˵�");
	SetMenu(Win->GetHandle(), h1);*/

	ZMenu* m2 = new ZMenu(L"�����˵�", ID_MENU1);
	ZMenu* m1 = new ZMenu(L"һ���˵�", NULL);
	m1->AddItem(*m2);
	Win->AddControl(m1);

	Win->Run();
	return 0;
}