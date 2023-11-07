#pragma once
#include "Scene.h"

class WorldMapScene : public CScene
{
	virtual void Render();
	virtual void Load();
	virtual void Update(DWORD dt);
	virtual void Unload();

	void LoadAssets(LPCWSTR assetFile);
public:
	WorldMapScene(LPCWSTR filePath) : CScene(id, filePath) {
		LoadAssets(filePath);
	}
};


