#pragma once
#include "ZControl.h"
class ZNotify : public ZControl
{
	NOTIFYICONDATA data;

public:
	//初始化ZNotify对象
	ZNotify(ZString TipStr, ZIcon Icon, UINT CallBackMessage, UINT Style = NIF_ICON | NIF_MESSAGE | NIF_TIP);
	//初始化ZNotify对象
	ZNotify(NOTIFYICONDATA data);

	//删除对象
	void Delete();

	void Init(HWND hWnd);
};
