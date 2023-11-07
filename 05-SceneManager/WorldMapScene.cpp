#include "WorldMapScene.h"
#include "Textures.h"
#include "Sprites.h"
#include "debug.h"
#include "SampleKeyEventHandler.h"

void WorldMapScene::Render()
{
	float x = CGame::GetInstance()->GetBackBufferWidth() / 2;
	float y = CGame::GetInstance()->GetBackBufferHeight() / 2;
	y -= 20; // HUD height

	CSprites::GetInstance()->Get(-100)->Draw(x, y);
}

void WorldMapScene::Load()
{
	LPTEXTURE tex = CTextures::GetInstance()->Get(40);
	CSprites::GetInstance()->Add(-100, 0, 0, 235, 163, tex);
}

void WorldMapScene::Update(DWORD dt)
{
	CGame::GetInstance()->SetCamPos(0.0f, 0.0f);
}

void WorldMapScene::Unload()
{
}

void WorldMapScene::LoadAssets(LPCWSTR assetFile)
{
	key_handler = new CWorldMapSceneHandler(this);
	DebugOut(L"[INFO] Done loading world map screen\n");
}
