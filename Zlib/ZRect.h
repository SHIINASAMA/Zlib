/**@file	ZRect.h
* @brief	矩阵类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZPoint.h"
#include "ZSize.h"

/**@brief 矩阵类
*/
class ZRect
{
public:
	ZPoint A;
	ZPoint B;

	/**@brief 初始化 ZRect 对象
	*/
	ZRect();

	/**@brief		初始化 ZRect 对象
	* @param Rect	源对象
	*/
	ZRect(RECT Rect);

	/**@brief	初始化 ZRect 对象
	* @param A	左上角的点
	* @param B	右下角的点
	*/
	ZRect(ZPoint A, ZPoint B);

	/**@brief	初始化 ZRect 对象
	* @param X1 左上角点X坐标
	* @param Y1 左上角点Y坐标
	* @param X2 右下角点Y坐标
	* @param Y2 右下角点Y坐标
	*/
	ZRect(long X1, long Y1, long X2, long Y2);

	/**@brief	获取矩阵大小
	* @retval	大小
	*/
	ZSize GetSize();

	/**@brief		设置矩阵大小
	* @param Size	目标大小
	*/
	void SetSize(ZSize Size);

	/**@brief	获取RECT结构
	* @retval	结构
	*/
	RECT GetRect();

	operator RECT();
	operator LPCRECT();
};
