#pragma once
#include "..\\SSEngine_SOURCE\\ssSceneManager.h"
#include "ssPlayScene.h"


//#ifdef  _DEBUG
//#pragma comment(lib, "..\\x64\\Debug\\SSEngine_Windows.lib")
//#else
//#pragma comment(lib, "..\\x64\\Release\\SSEngine_Windows.lib")
//#endif //  _DEBUG

namespace ss
{
	void InitializeScenes()
	{
		SceneManager::CreateScene<PlayScene>(L"PlayScene");

		SceneManager::LoadScene(L"PlayScene");
	}
}