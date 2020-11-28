/**@file	ZNotify.h
* @brief	系统托盘控件类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

/**@brief 系统托盘控件类
*/
class ZNotify : public ZControl
{
	NOTIFYICONDATA data;

public:
	/**@brief					初始化ZNotify对象
	* @param TipStr				提示文本
	* @param Icon				托盘图标
	* @param CallBackMessage	自定义消息
	* @param Style				托盘风格
	*/
	ZNotify(ZString TipStr, ZIcon Icon, UINT CallBackMessage, UINT Style = NIF_ICON | NIF_MESSAGE | NIF_TIP);

	/**@brief		初始化ZNotify对象
	* @param data	NOTIFYICONDATA结构体
	*/
	ZNotify(NOTIFYICONDATA data);

	/**@brief 销毁托盘
	*/
	void Delete();

	/**@brief		初始化
	* @param hWnd	父项句柄
	*/
	void Init(HWND hWnd);
};
