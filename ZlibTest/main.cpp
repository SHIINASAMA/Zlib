#include "main.h"
#include "../Zlib/ZFile.h"

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();
	Win->Run();
	return 0;
}