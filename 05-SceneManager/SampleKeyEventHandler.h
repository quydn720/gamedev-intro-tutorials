#pragma once

#include "Scene.h"
#include "Game.h"
#include <dinput.h>

class CSampleKeyHandler : public CSceneKeyHandler
{
public:
	virtual void KeyState(BYTE* states);
	virtual void OnKeyDown(int KeyCode);
	virtual void OnKeyUp(int KeyCode);
	CSampleKeyHandler(LPSCENE s) :CSceneKeyHandler(s) {};
};

class CMapSceneHandler : public CSceneKeyHandler {
public:
	CMapSceneHandler(LPSCENE s) :CSceneKeyHandler(s) {};
	void KeyState(BYTE* states) {};
	void OnKeyDown(int KeyCode)
	{
		switch (KeyCode) {
		case DIK_S: {
			CGame::GetInstance()->InitiateSwitchScene(1);
			break;
		}
		default: {
			break;
		}
		}
	};
	void OnKeyUp(int KeyCode) {};
};