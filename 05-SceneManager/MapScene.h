#pragma once
#include "Scene.h"
#include "Sprite.h"
#include "Textures.h"
class MapScene : public CScene
{
	virtual void Render();
	virtual void Load();
	virtual void Update(DWORD dt);
	virtual void Unload();

	void LoadAssets(LPCWSTR assetFile);
public:
	MapScene(LPCWSTR filePath) : CScene(id, filePath) {
		LoadAssets(filePath);
	}
};

