#pragma once
#include "ssScene.h"

namespace ss
{
	class SceneManager
	{
	public:
		static void Initialize();
		static void Update();
		static void LateUpdate();
		static void Render();

	private:
		static Scene* mPlayScene;
	};
}
