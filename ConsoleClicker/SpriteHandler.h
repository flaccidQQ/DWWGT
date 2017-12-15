#pragma once
#include "olcConsoleGameEngine.h"

class SpriteHandler : public olcSprite
{
public:
	SpriteHandler() {
		abcdeSprite = new olcSprite(L"Sprites/abcde.spr");
		fghijSprite = new olcSprite(L"Sprites/fghij.spr");
		klmnoSprite = new olcSprite(L"Sprites/klmno.spr");
		pqrstSprite = new olcSprite(L"Sprites/pqrst.spr");
		uvwSprite = new olcSprite(L"Sprites/uvw.spr");
		xyzSprite = new olcSprite(L"Sprites/xyz.spr");
		oneToFiveSprite = new olcSprite(L"Sprites/12345.spr");
		sixToZeroSprite = new olcSprite(L"Sprites/67890.spr");
	}

	olcSprite *abcdeSprite = nullptr;
	olcSprite *fghijSprite = nullptr;
	olcSprite *klmnoSprite = nullptr;
	olcSprite *pqrstSprite = nullptr;
	olcSprite *uvwSprite = nullptr;
	olcSprite *xyzSprite = nullptr;
	olcSprite *oneToFiveSprite = nullptr;
	olcSprite *sixToZeroSprite = nullptr;
};



