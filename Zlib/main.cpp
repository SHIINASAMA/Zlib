#include "main.h"

int main()
{
	Win.Info.X = 100;
	Win.Info.Y = 100;
	Win.Info.W = 400;
	Win.Info.H = 300;
	Win.Info.ClassName = L"MyApp";
	Win.Info.Title = L"Hello";
	Win.Info.WndProc = WndProc;
	Win.ZInit();

	a = new ZButton;
	a->X = 5;
	a->Y = 5;
	a->W = 150;
	a->H = 50;
	a->Text = L"Hello";
	a->ID = (HMENU)1;
	Win.ZAddControl(a);

	Win.ZStartLoop();
}