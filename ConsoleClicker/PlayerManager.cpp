#include "PlayerManager.h"


//constructor, määritellään pelaajalle aloitusarvot
PlayerManager::PlayerManager()
{
	gold = 0;
	gps = 0;
	gpc = 1;
	clicks = 0;
	totGold = 0;
	itemsbought = 0;
}

PlayerManager::~PlayerManager()
{

}


std::wstring PlayerManager::getTotGoldToString()
{
	std::wstring t = std::to_wstring(totGold);
	return t;
}

std::wstring PlayerManager::getClicksToString()
{
	std::wstring t = std::to_wstring(clicks);
	return t;
}

std::wstring PlayerManager::getItBoToString()
{
	std::wstring t = std::to_wstring(itemsbought);
	return t;
}


std::wstring PlayerManager::getGoldToString()
{
	std::wstring t = std::to_wstring(gold);
	return t;
}


std::wstring PlayerManager::getGpcToString()
{
	std::wstring t = std::to_wstring(gpc);
	return t;
}

std::wstring PlayerManager::getGpsToString()
{
	std::wstring t = std::to_wstring(gps);
	return t;
}


void PlayerManager::checkedGoldDecrease(int v) {
	if (gold > 0) gold -= v;
	if (gold < 0) gold = 0;
}

int PlayerManager::gpcStringLength()
{
	int b = 0;
	for each(wchar_t a in getGpcToString())
	{
		b += 1;
	}
	if (b >= 2) return  b = 4;
	else return b;
}

void PlayerManager::clickD()
{
	gold += gpc;
	totGold += gpc;
	clicks += 1;
}

void PlayerManager::goldovertime(float fElapsedTime)
{
	if (loop == 0.0f)
	{
		gold += gps;
		totGold += gps;
	}
	loop += 10.0f * fElapsedTime;
	if (loop >= 10.0f) loop = 0.0f;
}