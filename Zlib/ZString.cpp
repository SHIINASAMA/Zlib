#include "ZString.h"

ZString::ZString()
{
}

ZString::ZString(WString str)
{
	this->str = str;
}

ZString::ZString(AString str)
{
	Pause(str);
}

void ZString::Pause(WString str)
{
	this->str = str;
}

void ZString::Pause(AString str)
{
	int nLen = MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str, -1, NULL, 0);
	if (nLen == 0)
	{
		return;
	}
	wchar_t* pResult = new wchar_t[nLen];
	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str, -1, pResult, nLen);
	this->str = pResult;
}

WString ZString::ToWString()
{
	return this->str;
}

AString ZString::ToAString()
{
	int nLen = WideCharToMultiByte(CP_ACP, 0, str, -1, NULL, 0, NULL, NULL);
	if (nLen == 0)
	{
		return NULL;
	}
	char* pResult = new char[nLen];
	WideCharToMultiByte(CP_ACP, 0, str, -1, pResult, nLen, NULL, NULL);
	return pResult;
}

int ZString::Len()
{
	WString str = this->str;
	int len = 0;
	while (*str++)
	{
		len++;
	}
	return len;
}

void ZString::operator=(WString str)
{
	this->str = str;
}

void ZString::operator=(WChar str[])
{
	this->str = &str[0];
}

ZString::operator WString()
{
	return this->str;
}

WChar ZString::operator[](int index)
{
	WString str = this->str;
	str += index;
	WChar c = *str;
	return c;
}