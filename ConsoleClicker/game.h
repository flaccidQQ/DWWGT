#pragma once
#include "olcConsoleGameEngine.h"
#include "EventHandler.h"


class ClickerGame : public olcConsoleGameEngine
{

public:
	ClickerGame() { 
	};

private:

	
	EventHandler events; 
	
	void WriteText(int x, int y, wstring s); 
	void HandleItems(); 
	void UI(float fElapsedTime);
	int uiL[4] = { 104, 111, 118, 125 }; 
	
	bool menuClickd = false;
	void menuScreen();


	bool blingCoin = false; 
	float coinEffectTimer = 0; 
	void clickTheButton(); 
	void blingEffect(float fElapsedTime); 

	int loob = 0; 
	
	bool mouseOverItem = false; 

	int itemPosHolder = NULL;
	int itemSize() { int i = events.shop.items->at(itemPosHolder).getSize(); return i; }
	int itemPosX() { int i = events.shop.items->at(itemPosHolder).getX(); return i; }
	int itemPosY() { int i = events.shop.items->at(itemPosHolder).getY(); return i; }
	std::wstring itemName() { std::wstring s = events.shop.items->at(itemPosHolder).getItemText(0); return s; }
	std::wstring itemPrice() { std::wstring s = events.shop.items->at(itemPosHolder).getItemText(1); return s; }
	std::wstring itemGpc() { std::wstring s = events.shop.items->at(itemPosHolder).getItemText(2); return s; }
	std::wstring itemGps() { std::wstring s = events.shop.items->at(itemPosHolder).getItemText(3); return s; }
	
	


	protected:
	virtual bool OnUserCreate()
	{
		return true;
	}


	
	virtual bool OnUserUpdate(float fElapsedTime)
	{
		if (m_keys[1].bPressed)
		{
			clickTheButton();
		}

		events.player.goldovertime(fElapsedTime);
		UI(fElapsedTime);
		HandleItems();
		blingEffect(fElapsedTime);
		menuScreen();

		return true;
	}
};
