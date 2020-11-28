/**@file	ZString.h
* @brief	字符串
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
	/**@brief		初始化一个空 ZString 对象
、	*/
	ZString();

	/**@brief		用 WString 初始化一个 ZString 对象
	* @param str	源 WString
	*/
	ZString(WString str);

	/**@brief		用 AString 初始化一个 ZString 对象
	* @param str	源 AString
	*/
	ZString(AString str);

	/**@brief		将 WString 转化成 ZString 对象
	* @param str	源 WString
	*/
	void Pause(WString str);

	/**@brief		将 AString 转化成 ZString 对象
	* @param str	源 AString
	*/
	void Pause(AString str);

	/**@brief 输出 WString 对象
	* @retval 目标 WString
	*/
	WString ToWString();

	/**@brief 输出 AString 对象
	* @retval 目标 AString
	*/
	AString ToAString();

	/**@brief	获取字符串长度
	* @retval	字符串长度
	*/
	int Len();

	void operator=(WString str);
	void operator=(WChar str[]);
	operator WString();
	WChar operator[](int index);
};