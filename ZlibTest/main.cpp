#include "main.h"

//TODO:���ϵͳ���̿ؼ�
#define WM_NOTIFY WM_USER+1

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();

	bar = new ZProgressBar(5, 5, 320, 25);
	Win->AddControl(bar);

	btn = new ZButton(L"����", 5, 35, 40, 25, ID_BTN1);
	Win->AddControl(btn);

	Menu = new ZMenu();
	*Menu = LoadMenu(NULL, MAKEINTRESOURCE(IDR_MENU1));
	Win->AddControl(Menu);

	ZIcon ico;
	ico.LoadRes(IDI_ICON1);
	WChar str[] = L"���";

	nit = new ZNotify(L"���", ico, WM_USER + 1);
	Win->AddControl(nit);

	Win->Run();
	return 0;
}