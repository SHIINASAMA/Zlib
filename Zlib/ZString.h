#pragma once
#include <Windows.h>

#define WString LPCWSTR
#define WChar wchar_t
#define AString char*
#define AChar char

class ZString
{
private:
	WString str;

public:
	ZString();
	//用 WString 初始化一个 ZString 对象
	ZString(WString str);
	//用 AString 初始化一个 ZString 对象
	ZString(AString str);

	// 转换 WString 对象
	void Pause(WString str);
	// 转换 AString 对象
	void Pause(AString str);

	//输出 WString 对象
	WString ToWString();
	//输出 AString 对象
	AString ToAString();

	// 返回 ZString 对象的长度
	int Len();

	void operator=(WString str);
	void operator=(WChar str[]);
	operator WString();
	WChar operator[](int index);
};