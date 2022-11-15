#include "CommonProcess.h"

//ゲーム中に削除するとき
bool CommonProcess::Destroy()
{
	if (m_IsDestroy) 
	{
		Uninit();
		//delete this;
		return true;
	}

	return false;
}

//Uninitの時に呼ぶ。絶対true
bool CommonProcess::Release()
{
	delete this;
	return true;
}
