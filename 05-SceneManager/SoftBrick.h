#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"


class CSoftBrick : public CGameObject
{
public:
	CSoftBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

