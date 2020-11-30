#include "ZThread.h"

ZThread::ZThread(FUNC func, PARAM param)
{
	this->func = func;
	this->param = param;
}

void ZThread::Run()
{
	this->hThread = CreateThread(NULL, 0, func, param, 0, &this->Id);
}

void ZThread::Stop()
{
	TerminateThread(this->hThread, 0);
	CloseHandle(this->hThread);
}