/**@file	ZProgressBar.h
* @brief	进度条控件类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"
#include "ZRange.h"

/**@brief 进度条控件类
*/
class ZProgressBar : public ZControl
{
protected:
	ZString Type = L"msctls_progress32";
	DWORD Style = WS_CHILD | WS_VISIBLE | PBS_SMOOTH;

public:
	/**@brief		初始化一个 ZProgressBar 对象
	* @param X		控件的X坐标
	* @param Y		控件的Y坐标
	* @param W		控件的宽
	* @param H		控件的高
	* @param Max	进度最大值
	* @param Min	进度最小值
	*/
	ZProgressBar(int X, int Y, int W, int H, UINT Max = 100, UINT Min = 0);

	/**@brief		初始化一个 ZProgressBar 对象
	* @param Rect	控件的坐标和大小
	* @param Max	区间最大值
	* @param Min	区间最小值
	*/
	ZProgressBar(ZRect Rect, UINT Max = 100, UINT Min = 0);

	/**@brief		初始化
	* @param hWnd	父项句柄
	*/
	void Init(HWND hWnd);

	/**@brief		设置进度值
	* @param value	目标值
	*/
	void SetValue(UINT value);

	/**@brief	获取进度值
	* @retval	进度值
	*/
	UINT GetValue();

	/**@brief 获取进度条区间
	* @retval 区间
	*/
	ZRange GetRange();

	/**@brief		设置进度条区间
	* @param Max	最大值
	* @param Min	最小值
	*/
	void SetRange(UINT Max, UINT Min);

	/**@brief		设置进度条区间
	* @param Range	目标区间
	*/
	void SetRange(ZRange Range);
};