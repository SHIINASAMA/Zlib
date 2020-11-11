#pragma once
#include <Windows.h>
#include "ZGraphics.h"
#include "ZFont.h"

class ZControl
{
protected:
	HWND hWnd;
	HINSTANCE hInstance;
	WNDCLASSEX wcex;

	ZString ClassName;
	ZString Text;
	ZString Type;
	DWORD Style;
	DWORDLONG ID;
	ZRect Rect;
	ZFont Font;

	//注册类
	void RegClass();
	//开始消息循环
	void StartLoop();

public:
	ZControl();

	//初始化
	virtual void Init(HWND hWnd);

	//获取对象的类名
	ZString GetClassName();
	//返回当前对象的句柄
	HWND GetHandle();

	//返回文本
	ZString GetText();
	//设置文本
	void SetText(ZString str);

	//返回当前使用的字体
	ZFont GetFont();
	//设置字体
	void SetFont(ZFont Font);

	//返回当前控件的位置
	ZRect GetPosition();
	//设置控件位置
	void SetPosition(ZRect Rect);

	//返回当前控件的大小
	ZSize GetSize();
	//设置控件大小
	void Size(ZSize Size);
};
