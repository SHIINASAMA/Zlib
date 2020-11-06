#include "ZString.h"

ZString ZA2Z(AString str)
{
	int nLen = MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str, -1, NULL, 0);
	if (nLen == 0)
	{
		return NULL;
	}
	wchar_t* pResult = new wchar_t[nLen];
	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str, -1, pResult, nLen);
	return pResult;
}

AString ZZ2A(ZString str)
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

int ZStrLen(ZString str)
{
	int len = 0;
	while(*str++)
	{
		len++;
	}
	return len;
}