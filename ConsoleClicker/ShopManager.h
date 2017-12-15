#pragma once
#include "item.h"
#include <list>
#include <vector>


class ShopManager
{
public:
	ShopManager();
	std::vector<Item> items[10];

	Item *clickUpgrade1;
	Item *clickUpgrade2;
	Item *clickUpgrade3;
	Item *clickUpgrade4;

	Item *motUpgrade1;
	Item *motUpgrade2;
	Item *motUpgrade3;
	Item *motUpgrade4;

	Item *tradeUpgrade1;
	Item *tradeUpgrade2;
	Item *tradeUpgrade3;
	Item *tradeUpgrade4;

	Item newItem(Item *i, std::wstring n, int p,int g, int gS, int x, int y);
	void createItem(Item *i, std::wstring n, int p, int g, int gS, int x, int y);

	

};
