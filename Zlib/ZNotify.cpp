#include "ZNotify.h"

ZNotify::ZNotify(ZString TipStr, ZIcon Icon, UINT CallBackMessage, UINT Style)
{
	lstrcpy(data.szTip, TipStr);
	data.hIcon = Icon;
	data.uCallbackMessage = CallBackMessage;
	data.uFlags = Style;
}

ZNotify::ZNotify(NOTIFYICONDATA data)
{
	this->data = data;
}

void ZNotify::Delete()
{
	Shell_NotifyIcon(NIM_DELETE, &data);
}

void ZNotify::Init(HWND hWnd)
{
	data.hWnd = hWnd;
	Shell_NotifyIcon(NIM_ADD, &this->data);
}