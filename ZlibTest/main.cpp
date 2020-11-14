#include "main.h"
#include  <Commctrl.h>

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();

	bar = new ZProgressBar(5, 5, 300, 25);
	Win->AddControl(bar);
	bar->SetValue(5);

	btn = new ZButton(L"µãÎÒ", 5, 35, 45, 25, ID_BTN1);
	Win->AddControl(btn);

	Win->Run();
	return 0;
}