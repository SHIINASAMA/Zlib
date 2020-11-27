#include "ZFile.h"

BOOL ZFile::WriteLine(ZString path, ZString str, BOOL append)
{
	ZString formatStr;
	if (append)
	{
		formatStr = L"a+,ccs=utf-8";
	}
	else
	{
		formatStr = L"w,ccs=utf-8";
	}

	FILE* file = _wfsopen(path, formatStr, _SH_DENYNO);
	if (file == NULL)
	{
		return FALSE;
	}

	fwprintf_s(file, L"%s", (WString)str);
	fclose(file);
	return TRUE;
}

BOOL ZFile::Write(ZString path, WChar ch, BOOL append)
{
	ZString formatStr;
	if (append)
	{
		formatStr = L"a+,css=utf-8";
	}
	else
	{
		formatStr = L"w,css=utf-8";
	}

	FILE* file = _wfsopen(path, formatStr, _SH_DENYNO);
	if (file == NULL)
	{
		return FALSE;
	}

	fwprintf_s(file, L"%c", ch);
	fclose(file);
	return TRUE;
}

ZString ZFile::ReadLine(ZString path)
{
	FILE* file = _wfsopen(path, L"r,ccs=utf-8", _SH_DENYNO);
	if (file)
	{
		UINT len = -1;
		WChar ch;
		do
		{
			fwscanf_s(file, L"%c", &ch, sizeof(WChar));
			len++;
		} while (ch != L'\n');
		if (len == 0)
		{
			return ZString();
		}
		else
		{
			fseek(file, 0, SEEK_SET);
			WChar* str = new WChar[len];
			fwscanf_s(file, L"%s", str, sizeof(str));
			fclose(file);
			return ZString(str);
		}
	}
	else
	{
		return ZString();
	}
}

WChar ZFile::Read(ZString path)
{
	FILE* file = _wfsopen(path, L"r,ccs=utf-8", _SH_DENYNO);
	if (file)
	{
		WChar ch;
		fwscanf_s(file, L"%c", &ch);
		return ch;
	}
	else
	{
		return NULL;
	}
}

BOOL ZFile::Exists(ZString path)
{
	FILE* file = _wfsopen(path, L"r", _SH_DENYNO);
	if (file)
	{
		fclose(file);
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}