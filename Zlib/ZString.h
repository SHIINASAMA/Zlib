#pragma once
#include <Windows.h>
#include <cassert>
#define WString LPCWSTR
#define WChar wchar_t
#define AString char*
#define AChar char

class ZString {
public:
	ZString();
	ZString(WString str);
	ZString(AString str);
	void Pause(WString str);
	void Pause(AString str);
	WString ToWString();
	AString ToAString();
	int Len();

	void operator=(WString str);
	void operator=(WChar str[]);
	//void operator=(AString str);
	operator WString();
	WChar operator[](int index);
private:
	WString str;
};
