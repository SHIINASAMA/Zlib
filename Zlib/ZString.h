#pragma once
#include <Windows.h>
#include <cassert>
#define ZString LPCWSTR
#define ZChar wchar_t
#define AString char*
#define AChar char

ZString ZA2Z(AString str);

AString ZZ2A(ZString str);

int ZStrLen(ZString str);
