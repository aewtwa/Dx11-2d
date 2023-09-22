#pragma once
#include "ssEnums.h"
#include "CommonInclude.h"
#include "SSEngine.h"
#include "ssMath.h"
#include "ssGraphicsDevice_DX11.h"
		  
#include "ssMesh.h"
#include "ssShader.h"
#include "ssConstantBuffer.h"

using namespace ss::graphics;
using namespace ss::enums;
using namespace ss::math;

namespace ss::renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
	};

	CBUFFER(TransformCB, CBSLOT_TRANSFORM)
	{
		Vector3 pos;
		int padd1;

		Vector3 scale;
		int padd2;
	};

	extern Mesh* mesh;
	extern Shader* shader;
	extern ConstantBuffer* constantBuffers[];

	// Initialize the renderer
	void Initialize();
	void Release();
}
