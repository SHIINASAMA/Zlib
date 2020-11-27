#pragma once

#include "ZString.h"
#include <iostream>
#include <fstream>
#include <istream>

class ZFile
{
public:
	static BOOL WriteLine(ZString path, ZString str, BOOL append = TRUE);
	static BOOL Write(ZString path, WChar ch, BOOL append = TRUE);

	static ZString ReadLine(ZString path);
	static WChar Read(ZString path);

	static BOOL Exists(ZString path);

private:
	FILE* file;

public:
	ZFile(ZString path);
};