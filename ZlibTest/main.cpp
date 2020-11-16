#include "main.h"

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();

	bar = new ZProgressBar(5, 5, 320, 25);
	Win->AddControl(bar);

	btn = new ZButton(L"µãÎÒ", 5, 35, 40, 25, ID_BTN1);
	Win->AddControl(btn);

	Menu = new ZMenu();
	*Menu = LoadMenu(NULL, MAKEINTRESOURCE(IDR_MENU1));
	Win->AddControl(Menu);

	Win->Run();
	return 0;
}