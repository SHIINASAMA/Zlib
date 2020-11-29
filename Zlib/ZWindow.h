/**@file	ZWindow.h
* @brief	窗体类
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

#ifdef HIDE
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
#else
#endif

/**@brief 窗体类
*/
class ZWindow : public ZControl
{
protected:
	/**@brief 用于注册类
	*/
	void RegClass();

	/**@brief 开始消息循环
	*/
	void StartLoop();

public:
	/**@brief 模式对话框返回值枚举
	*/
	enum DialogResult
	{
		Yes = 0,
		No = 1
	};
	DialogResult Result = No;

	/**@brief			初始化一个ZWindow对象
	* @param Text		控件文本
	* @param Name		控件类名
	* @param X			控件X坐标
	* @param Y			控件Y坐标
	* @param W			控件的宽
	* @param H			控件的高
	* @param WndProc	消息循环
	* @param Style		控件的风格
	*/
	ZWindow(ZString Text, ZString Name, int X, int Y, int W, int H, WNDPROC WndProc, DWORD Style = WS_OVERLAPPEDWINDOW);

	/**@brief			初始化一个ZWindow对象
	* @param Text		控件文本
	* @param X			控件X坐标
	* @param Y			控件Y坐标
	* @param W			控件的宽
	* @param H			控件的高
	* @param Style		控件的风格
	* @param wcex		WNDCLASSEX
	*/
	ZWindow(ZString Text, int X, int Y, int W, int H, UINT Style, WNDCLASSEX wcex);

	/**@brief 控件资源释放
	*/
	~ZWindow();

	/**@brief		初始化
	* @param hWnd	父项句柄
	*/
	void Init(HWND hWnd);
	/**@brief		展示模式对话框
	* @param hWnd	父项句柄
	*/
	DialogResult ShowDialog(HWND hWnd);

	/**@brief 创建窗体（其中包括了注册类和初始化）
	*/
	void Create();

	/**@brief 运行窗体，此时进入阻塞，开始消息循环
	*/
	void Run();

	/**@brief		设置程序图标（不推荐使用）
	* @param Icon	目标图标
	*/
	void SetIcon(ZIcon Icon);

	/**@brief 设置程序图标（推荐）
	* @param Icon	目标图标
	*/
	void SetIconEx(ZIcon Icon);

	/**@brief		向当前窗体添加控件
	* @param Con	目标控件
	*/
	void AddControl(ZControl* Con);

	/**@brief		从当前窗体移除控件
	* @param hWnd	子控件句柄
	*/
	void RemoveControl(HWND hWnd);
};
