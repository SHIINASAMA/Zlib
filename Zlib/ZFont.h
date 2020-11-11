#pragma once
#include <Windows.h>
#include "ZString.h"

class ZFont
{
private:
	HFONT font;

public:
	//创建一个字体对象
	void Create(ZString FontName);
	//高级：根据完整的 API 创建字体对象
	void CreateEx(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic,
		DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision,
		DWORD iQuality, DWORD iPitchAndFamily, LPCWSTR pszFaceName);

	operator HFONT();
};
