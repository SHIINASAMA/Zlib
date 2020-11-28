/**@file	ZFile.h
* @brief	�ļ����
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once

#include "ZString.h"
#include <iostream>
#include <fstream>
#include <istream>

class ZFile
{
public:
	/**@brief		���ض��ļ�д��һ��
	* @param path	�ⲿ��Դ·��
	* @param str	д����ַ���
	* @param append �Ƿ����ӵ�β��
	* @retval		д���Ƿ�ɹ�
	*/
	static BOOL WriteLine(ZString path, ZString str, BOOL append = TRUE);

	/**@brief		���ض��ļ�д���ַ�
	* @param path	�ⲿ��Դ·��
	* @param ch		д����ַ�
	* @param append	д���Ƿ�ɹ�
	*/
	static BOOL Write(ZString path, WChar ch, BOOL append = TRUE);

	/**@brief		���ض��ļ���ȡһ��
	* @param path	�ⲿ�ļ�·��
	* @retval		��ȡ���ַ���
	*/
	static ZString ReadLine(ZString path);

	/**@brief		���ض��ļ���ȡ�ַ�
	* @param path	�ⲿ�ļ�·��
	*/
	static WChar Read(ZString path);

	/**@brief		�ж��ļ��Ƿ����
	* @param		�ļ�·��
	* @retval		���
	*/
	static BOOL Exists(ZString path);

private:
	FILE* file;

public:
	/**@brief		���ļ�·����ʼ��һ��ZFile����
	*/
	ZFile(ZString path);

	/**@brief		�ж��ļ��Ƿ�򿪳ɹ�����ʼ����Ӧ���ֶ�����
	* @retval		���
	*/
	BOOL IsGood();

	/**@brief		д��һ���ַ�
	* @param ch		Ҫд����ַ�
	* @retval		д���Ƿ�ɹ�
	*/
	BOOL Write(WChar ch);

	/**@brief		д���ַ���
	* @param path	Ҫд����ַ���
	* @param		д���Ƿ�ɹ�
	*/
	BOOL WriteLine(ZString str);

	/**@brief		��ȡһ���ַ�
	* @retval		��ȡ�����ַ�����Ҫ�жϷǿ�
	*/
	WChar Read();

	/**@brief		��ȡ�ַ���
	* @retval		��ȡ�����ַ�������Ҫ�жϷǿ�
	*/
	ZString ReadLine();

	/**@brief		�رյ�ǰ�ļ�
	*/
	void Close();
};