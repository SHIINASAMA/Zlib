#include "main.h"

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200,200,300,200, WndProc);
	Win->Create();

	Label = new ZStatic(L"ÄãºÃ", 10, 10, 50, 25);
	Win->AddControl(Label);

	Button = new ZButton(L"µãÎÒ", 10, 35, 50, 25, 0);
	Win->AddControl(Button);
	
	Edit = new ZEdit(L"", 10, 65, 100, 25,1);
	Win->AddControl(Edit);

	Win->Run();
	return 0;
}