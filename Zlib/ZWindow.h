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

	//初始化一个 ZWindow 对象
	ZWindow(ZString Text, ZString Name, int X, int Y, int W, int H, WNDPROC WndProc, DWORD Style = WS_OVERLAPPEDWINDOW);
	//初始化一个 ZWindow 对象
	ZWindow(ZString Text, int X, int Y, int W, int H, UINT Style, WNDCLASSEX wcex);
	//释放资源
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
