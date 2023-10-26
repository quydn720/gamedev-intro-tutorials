#include "MapScene.h"
#include "debug.h"
#include "Sprites.h"
#include "SampleKeyEventHandler.h"

void MapScene::Render()
{
	CSprites::GetInstance()->Get(-999)->Draw(156, 100);
}

void MapScene::Load()
{
	LPTEXTURE tex = CTextures::GetInstance()->Get(30);
	CSprites::GetInstance()->Add(-999, 0, 0, 255, 255, tex);
}

void MapScene::Update(DWORD dt)
{
}

void MapScene::Unload()
{
}

void MapScene::LoadAssets(LPCWSTR assetFile)
{
	key_handler = new CMapSceneHandler(this);
	DebugOut(L"[INFO] Done loading map screen\n");
}
