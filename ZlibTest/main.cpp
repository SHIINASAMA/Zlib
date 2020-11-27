#include "main.h"

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();

	text = new ZStatic(L"", 5, 5, 200, 50);
	Win->AddControl(text);

	DWORD ID;
	HANDLE hThread = CreateThread(NULL, 0, Change, (LPVOID)(0), 0, &ID);

	Win->Run();
	return 0;
}