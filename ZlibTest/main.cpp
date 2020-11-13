#include "main.h"

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();
	Pox = new ZPictureBox(10, 95, 300, 600, Win->GetHandle(), 2, ZP_DISPLAYMODE_ZOOM);
	Pox->SetImage(ZBitmap(L"C:\\Users\\kaoru\\Desktop\\b.bmp"));
	Win->AddControl(Pox);

	bar = new ZProgressBar(5, 5, 320, 25);
	Win->AddControl(bar);
	Win->Run();
	return 0;
}