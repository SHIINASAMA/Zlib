/**@file	ZColor.h
* @brief	颜色相关
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/
#pragma once

#include <Windows.h>

/**@brief 颜色相关
*/
class ZColor
{
private:
	COLORREF color;

public:
	/**@brief 根据RGB值初始化一个ZColor对象
	* @param R 红
	* @param G 绿
	* @param B 蓝
	*/
	ZColor(BYTE R, BYTE G, BYTE B);

	operator COLORREF();
	void operator=(COLORREF color);

	/**@brief 获取红值
	* @retval 结果
	*/
	BYTE GetRVar();

	/**@brief 获取绿值
	* @retval 结果
	*/
	BYTE GetGVar();

	/**@brief 获取蓝值
	* @retval 结果
	*/
	BYTE GetBVar();
};
