#include "ssMeshRenderer.h"
#include "ssGameObject.h"
#include "ssTransform.h"

namespace ss
{
	MeshRenderer::MeshRenderer()
		: Component(COMPONENTTYPE::MESH)
	{
	}

	MeshRenderer::~MeshRenderer()
	{
	}

	void MeshRenderer::Initialize()
	{
	}

	void MeshRenderer::Update()
	{
		//·ÎÁ÷
	}

	void MeshRenderer::LateUpdate()
	{
	}

	void MeshRenderer::Render()
	{
		GetOwner()->GetComponent<Transform>()->SetConstantBuffer();

		mShader->Update();
		mMesh->Render();
	}
}