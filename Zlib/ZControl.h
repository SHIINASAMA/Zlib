/**@file	ZControl.h
* @brief	控件基类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include <Windows.h>
#include "ZGraphics.h"
#include "ZFont.h"

class ZControl
{
protected:
	HWND hWnd;
	HINSTANCE hInstance;
	WNDCLASSEX wcex;

	ZString ClassName;
	ZString Text;
	ZString Type;
	DWORD Style;
	DWORDLONG ID;
	ZRect Rect;
	ZFont Font;

	/**@brief 用于注册类
	*/
	void RegClass();

	/**@brief 开始消息循环
	*/
	void StartLoop();

public:
	ZControl();

	/**@brief		初始化
	* @param hWnd	父项句柄
	*/
	virtual void Init(HWND hWnd);

	/**@brief 获取对象类名
	* @retval 类名
	*/
	ZString GetClassName();

	/**@brief 获取句柄
	* @retval 句柄
	*/
	HWND GetHandle();

	/**@brief 获取文本
	* @retval 文本
	*/
	ZString GetText();

	/**@brief		设置文本
	* @param str	设置的文本
	*/
	void SetText(ZString str);

	/**@brief 获取当前使用的字体
	* @retval 当前使用的字体
	*/
	ZFont GetFont();

	/**@brief		设置字体
	* @param Font	目标字体
	*/
	void SetFont(ZFont Font);

	/**@brief	获取控件当前的位置
	* @retval	位置
	*/
	ZRect GetPosition();

	/**@brief		设置控件位置
	* @param Rect	目标位置
	*/
	void SetPosition(ZRect Rect);

	/**@brief	获取控件大小
	* @retval	大小
	*/
	ZSize GetSize();

	/**@brief		设置控件大小
	* @param Size	目标大小
	*/
	void SetSize(ZSize Size);

	/**@brief	返回当前矩阵
	* @retval	矩阵
	*/
	ZRect GetRect();
};
