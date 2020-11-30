#include "main.h"
#include "../Zlib/ZDebug.h"

DWORD WINAPI Print(PARAM)
{
	for (int i = 0; i < 1000; i++)
	{
		printf("[Client Thread]:\tHello\n");
	}
	return 0;
}

int main()
{
	/*Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();
	Win->Run();*/

	ZThread* thread = new ZThread(Print, MAKEPARAM(0));
	thread->Run();
	for (int i = 0; i < 1000; i++)
	{
		printf("[Main Thread]:\t\tHello\n");
	}

	SetLastError(1400);
	ZDebug::ShowLastError(L"ÕâÊÇ²âÊÔ");

	system("pause");
	return 0;
}