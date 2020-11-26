#include "main.h"

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();

	List = new ZListBox(5, 5, 200, 100);
	Win->AddControl(List);
	List->AddItem(L"我带你们打");

	Win->Run();
	return 0;
}