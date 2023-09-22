#pragma once
#include "..\\SSEngine_SOURCE\\ssScene.h"

namespace ss
{
	class PlayScene : public Scene
	{
	public:
		PlayScene();
		virtual ~PlayScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render() override;

	private:
	};
}