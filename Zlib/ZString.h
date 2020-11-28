/**@file	ZString.h
* @brief	�ַ���
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

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
	/**@brief		��ʼ��һ���� ZString ����
��	*/
	ZString();

	/**@brief		�� WString ��ʼ��һ�� ZString ����
	* @param str	Դ WString
	*/
	ZString(WString str);

	/**@brief		�� AString ��ʼ��һ�� ZString ����
	* @param str	Դ AString
	*/
	ZString(AString str);

	/**@brief		�� WString ת���� ZString ����
	* @param str	Դ WString
	*/
	void Pause(WString str);

	/**@brief		�� AString ת���� ZString ����
	* @param str	Դ AString
	*/
	void Pause(AString str);

	/**@brief ��� WString ����
	* @retval Ŀ�� WString
	*/
	WString ToWString();

	/**@brief ��� AString ����
	* @retval Ŀ�� AString
	*/
	AString ToAString();

	/**@brief	��ȡ�ַ�������
	* @retval	�ַ�������
	*/
	int Len();

	void operator=(WString str);
	void operator=(WChar str[]);
	operator WString();
	WChar operator[](int index);
};