#pragma once
#include "SpriteHandler.h"
#include "PlayerManager.h"
#include "ShopManager.h"
#include "FileReadWrite.h"

class EventHandler
{
public:
	EventHandler() {};

	SpriteHandler sprite; 
	PlayerManager player; 
	ShopManager shop; 
	FileReadWrite readWrite;

	void PurchaseItem(int i);

	void saveGame();
	
	void loadGame();

	void newGame();

};


