#pragma once
#include "ZControl.h"
class ZNotify : public ZControl
{
	NOTIFYICONDATA data;

public:
	//��ʼ��ZNotify����
	ZNotify(ZString TipStr, ZIcon Icon, UINT CallBackMessage, UINT Style = NIF_ICON | NIF_MESSAGE | NIF_TIP);
	//��ʼ��ZNotify����
	ZNotify(NOTIFYICONDATA data);

	//ɾ������
	void Delete();

	void Init(HWND hWnd);
};
