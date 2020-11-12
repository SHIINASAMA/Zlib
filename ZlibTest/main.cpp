#include "main.h"
#include  <Commctrl.h>

int main()
{
	Win = new ZWindow(L"This is a title", L"MyApp", 200, 200, 800, 600, WndProc);
	Win->Create();
	Pox = new ZPictureBox(10, 95, 200, 150, Win->GetHandle(), 2, ZP_DISPLAYMODE_NONE);
	Pox->SetImage(ZBitmap(L"C:\\Users\\kaoru\\Desktop\\b.bmp"));
	Win->AddControl(Pox);

	bar = new ZProgressBar(5, 5, 300, 25);
	Win->AddControl(bar);
	bar->SetValue(50);
	ZRange a = bar->GetRange();
	Win->Run();
	return 0;
}