/**@file	ZBitmap.h
* @brief	Bmp图像相关
* @author	SHIINASAMA(SHIINA_KAORU@OUTLOOK.COM)
* @date		2020-11-28
*/
#pragma once
#include "ZImage.h"
/**@brief Bmp图像类
*/
class ZBitmap :public ZImage
{
private:
	HBITMAP hmap;

public:
	/**@brief 默认构造函数
	*/
	ZBitmap();

	/**@brief		根据路径初始化资源
	* @param path	外部资源路径
	*/
	ZBitmap(ZString path);
	/**@brief	根据资源 ID 初始化 ZBitmap 对象
	* @param	ID 资源ID
	*/
	ZBitmap(WORD ID);

	/**@brief	根据 ID 加载资源
	* @param	ID
	*/
	void LoadRes(WORD ID);

	/**@brief	根据路径加载资源
	* @param	path
	*/
	void LoadResFromFile(ZString path);

	/**@brief 返回BITMAP对象
	* @retval BITMAP结构
	*/
	BITMAP GetBitmap();

	void operator=(HBITMAP hBmp);
	operator HBITMAP();
};
