/**@file	ZIcon.h
* @brief	Icon图像相关
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/

#pragma once
#include "ZImage.h"

/**@brief Icon图像类
*/
class ZIcon : public ZImage
{
	HICON hIcon;
public:
	void operator=(HICON hIcon);
	operator HICON();

	/**@brief		根据路径初始化ZIcon对象
	* @param path	外部资源路径
	*/
	ZIcon(ZString path);

	/**@brief		根据资源ID初始化ZIcon对象
	* @param ID		资源ID
	*/
	ZIcon(WORD ID);

	/**@brief		根据路径加载ZIcon对象
	* @param Path	外部资源路径
	*/
	void LoadResFromFile(ZString Path);

	/**@brief		根据资源ID初始化ZIcon对象
	* @param ID		资源ID
	*/
	void LoadRes(WORD ID);
};
