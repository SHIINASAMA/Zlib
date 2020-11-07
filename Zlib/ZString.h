#pragma once
#include <Windows.h>
#include <cassert>
#define WString LPCWSTR
#define WChar wchar_t
#define AString char*
#define AChar char

class ZString {
public:
	void Pause(WString str);
	void Pause(AString str);
	WString ToWString();
	AString ToAString();
	int Len();

	void operator=(WString str);
	//void operator=(AString str);
	operator WString();
	WChar operator[](int index);
private:
	WString str;
};
