/**@file	ZRange.h
* @brief	区间结构
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include <Windows.h>
#include <Commctrl.h>

/**@brief 区间类
*/
class ZRange
{
public:
	int X1;
	int X2;

	/**@brief	实例化一个ZRange对象
	*/
	ZRange();
	/**@brief	实例化一个ZRange对象
	* @param X1 最小值
	* @param X2 最大值
	*/
	ZRange(int X1, int X2);

	void operator=(PBRANGE Range);
	operator PBRANGE();
};
