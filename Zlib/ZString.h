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
	//�� WString ��ʼ��һ�� ZString ����
	ZString(WString str);
	//�� AString ��ʼ��һ�� ZString ����
	ZString(AString str);

	// ת�� WString ����
	void Pause(WString str);
	// ת�� AString ����
	void Pause(AString str);

	//��� WString ����
	WString ToWString();
	//��� AString ����
	AString ToAString();

	// ���� ZString ����ĳ���
	int Len();

	void operator=(WString str);
	void operator=(WChar str[]);
	operator WString();
	WChar operator[](int index);
};