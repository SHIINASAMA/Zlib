#pragma once
#include <Windows.h>
#include "ZString.h"

class ZFont
{
private:
	HFONT font;

public:
	//����һ���������
	void Create(ZString FontName);
	//�߼������������� API �����������
	void CreateEx(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic,
		DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision,
		DWORD iQuality, DWORD iPitchAndFamily, LPCWSTR pszFaceName);

	operator HFONT();
};
