# Zlib

## 介绍

轻量级Windows平台开发SDK

最新版本为<kbd>[0.1.1](https://github.com/SHIINASAMA/Zlib/releases)</kbd>

目标是抽取Win32开发的最主要部分，封装主要控件，同时还要保留最基本的消息循环机制。

下面是一个窗口程序所需的最小代码量：

```
#include "ZWindow.h"

LRESULT CALLBACK WndProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
	default:
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

int main()
{
	ZWindow* Win = new ZWindow(L"This is a title", L"MyApp", 200,200,300,200,WndProc);
	Win->Create();
	Win->Run();
	return 0;
}
```

如上所示，保留了基础的消息循环的同时，将窗口封装成了ZWindow类。

相比起MFC，MFC过于庞大，且一般初学者需要同时理解消息循环和面向对象编程，

这给不少人提高了学习成本。

与Qt相比，Qt很不错，跨平台也很爽，但我的目标仅是给初学者提供一个提前了解消息循环机制的SDK

~~和方便自己平时摸鱼、做实验和快速做Demo~~，所以和Qt莫得可比性，况且Qt的SDK也是重量级了...

**最后一提，这些都是个人见解，大佬勿喷。**