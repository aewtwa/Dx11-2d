#include "ssSceneManager.h"

#include "ssResources.h"

#include "ssGameObject.h"
#include "ssTransform.h"
#include "ssMeshRenderer.h"

namespace ss
{
	Scene* SceneManager::mActiveScene = nullptr;
	std::map<std::wstring, Scene*> SceneManager::mScenes = {};

	void SceneManager::Initialize()
	{
		/*mPlayScene = new Scene();

		{
			GameObject* object = new GameObject();
			Transform* tr = new Transform();
			tr->SetPosition(Vector3(0.5f, 0.2f, 0.0f));
			tr->SetScale(Vector3(2.0f, 2.0f, 1.0f));
			object->AddComponent(tr);

			MeshRenderer* meshRenderer = new MeshRenderer();
			meshRenderer->SetMesh(Resources::Find<Mesh>(L"TriangleMesh"));
			meshRenderer->SetShader(Resources::Find<Shader>(L"TriangleShader"));
			object->AddComponent(meshRenderer);

			mPlayScene->AddGameObject(object, LAYER::NONE);
		}

		{
			GameObject* object = new GameObject();
			Transform* tr = new Transform();
			tr->SetPosition(Vector3(-0.5f, -0.2f, 0.0f));
			object->AddComponent(tr);

			MeshRenderer* meshRenderer = new MeshRenderer();
			meshRenderer->SetMesh(Resources::Find<Mesh>(L"TriangleMesh"));
			meshRenderer->SetShader(Resources::Find<Shader>(L"TriangleShader"));
			object->AddComponent(meshRenderer);

			mPlayScene->AddGameObject(object, LAYER::NONE);
		}*/
	}

	void SceneManager::Update()
	{
		mActiveScene->Update();
	}

	void SceneManager::LateUpdate()
	{
		mActiveScene->LateUpdate();
	}

	void SceneManager::Render()
	{
		mActiveScene->Render();
	}

	Scene* SceneManager::LoadScene(const std::wstring name)
	{
		std::map<std::wstring, Scene*>::iterator iter
			= mScenes.find(name);

		if (iter == mScenes.end())
			return nullptr;

		mActiveScene = iter->second;
		return iter->second;
	}
}
