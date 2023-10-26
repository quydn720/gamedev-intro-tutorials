#include "SoftBrick.h"

void CSoftBrick::Render()
{
	/*CAnimations* animations = CAnimations::GetInstance();
	if (state == 0) {
		animations->Get(1600)->Render(x, y);
	}*/
	RenderBoundingBox();
}

void CSoftBrick::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - 16 / 2;
	t = y - 16 / 2;
	r = l + 16;
	b = t + 16;
}
