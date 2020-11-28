/**@file	ZWindow.h
* @brief	������
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZControl.h"

#ifdef HIDE
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
#else
#endif

/**@brief ������
*/
class ZWindow : public ZControl
{
protected:
	/**@brief ����ע����
	*/
	void RegClass();

	/**@brief ��ʼ��Ϣѭ��
	*/
	void StartLoop();

public:
	/**@brief ģʽ�Ի��򷵻�ֵö��
	*/
	enum DialogResult
	{
		Yes = 0,
		No = 1
	};
	DialogResult Result = No;

	//��ʼ��һ�� ZWindow ����
	ZWindow(ZString Text, ZString Name, int X, int Y, int W, int H, WNDPROC WndProc, DWORD Style = WS_OVERLAPPEDWINDOW);
	//��ʼ��һ�� ZWindow ����
	ZWindow(ZString Text, int X, int Y, int W, int H, UINT Style, WNDCLASSEX wcex);
	//�ͷ���Դ
	~ZWindow();

	/**@brief		��ʼ��
	* @param hWnd	������
	*/
	void Init(HWND hWnd);
	/**@brief		չʾģʽ�Ի���
	* @param hWnd	������
	*/
	DialogResult ShowDialog(HWND hWnd);

	/**@brief �������壨���а�����ע����ͳ�ʼ����
	*/
	void Create();

	/**@brief ���д��壬��ʱ������������ʼ��Ϣѭ��
	*/
	void Run();

	/**@brief		���ó���ͼ�꣨���Ƽ�ʹ�ã�
	* @param Icon	Ŀ��ͼ��
	*/
	void SetIcon(ZIcon Icon);

	/**@brief ���ó���ͼ�꣨�Ƽ���
	* @param Icon	Ŀ��ͼ��
	*/
	void SetIconEx(ZIcon Icon);

	/**@brief		��ǰ������ӿؼ�
	* @param Con	Ŀ��ؼ�
	*/
	void AddControl(ZControl* Con);

	/**@brief		�ӵ�ǰ�����Ƴ��ؼ�
	* @param hWnd	�ӿؼ����
	*/
	void RemoveControl(HWND hWnd);
};
