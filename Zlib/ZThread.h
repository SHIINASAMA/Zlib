/**@file	ZThread.h
* @brief	�߳����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-30
*/

#pragma once
#include <Windows.h>

/**@brief ������ַ
*/
#define FUNC LPTHREAD_START_ROUTINE

/**@brief ����
*/
#define PARAM LPVOID

/**@brief	����ת����
* @param X	ԭ����
*/
#define MAKEPARAM(X) ((LPVOID)X)

/**@brief �߳���
*/
class ZThread
{
private:
	DWORD Id;
	HANDLE hThread;
	FUNC func;
	PARAM param;

public:
	/**@brief		��ʼ��һ��ZThread����
	* @param func	������ַ
	* @param param	��������
	*/
	ZThread(FUNC func, PARAM param);

	/**@brief �����߳�
	*/
	void Run();

	/**@brief �����߳� \n ע�⣺\n�̵߳Ľ���Ӧ����ִ�к����ڲ����˳��������ǿ�ʹ�øú���ǿ���˳�
	*/
	void Stop();
};