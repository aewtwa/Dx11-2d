#pragma once
#include "..\\SSEngine_SOURCE\\ssScript.h"

namespace ss
{

	class PlayerScript : public Script
	{
	public:
		PlayerScript();
		virtual ~PlayerScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render() override;
	};

}