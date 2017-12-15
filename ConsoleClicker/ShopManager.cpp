#include "ShopManager.h"

ShopManager::ShopManager()
{
	createItem(clickUpgrade1, L"CLICK", 100, 1, 0, 4, 4);
	createItem(clickUpgrade2, L"CLICKA", 1000, 15, 0, 4, 10);
	createItem(clickUpgrade3, L"CLICKARA", 10000, 150, 0, 4, 16);
	createItem(clickUpgrade4, L"CLICKAGA", 100000, 1500, 0, 4, 22);

	createItem(motUpgrade1, L"MOT", 500, 0, 1, 4, 34);
	createItem(motUpgrade2, L"MOTA", 5000, 0, 15, 4, 40);
	createItem(motUpgrade3, L"MOTARA", 50000, 0, 150, 4, 46);
	createItem(motUpgrade4, L"MOTAGA", 500000, 0, 1500, 4, 52);

	createItem(motUpgrade1, L"MIX", 25000, 200, 50, 4, 64);
	createItem(motUpgrade2, L"MIXA", 250000, 2000, 500, 4, 70);
	createItem(motUpgrade3, L"MIXARA", 2500000, 20000, 5000, 4, 76);
	createItem(motUpgrade4, L"MIXAGA", 25000000, 200000, 50000, 4, 82);
}

Item ShopManager::newItem(Item *i, std::wstring n, int p,int g, int gS, int x, int y)
{
	i = new Item(n,p,g,gS,x,y);
	return *i;
}

void ShopManager::createItem(Item *i, std::wstring n, int p,int g, int gS, int x, int y)
{
	items->push_back(newItem(i, n, p,g,gS, x, y));
}

