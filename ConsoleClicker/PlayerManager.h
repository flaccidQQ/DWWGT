#pragma once
#include <string>
#include "ShopManager.h"

class PlayerManager
{
public:
	PlayerManager();
	~PlayerManager();

	int  getGold() { return gold; }
	void  setGold(int v) { gold = v; }
	void  decreaseGold(int v) { gold -= v; }
	void  increaseGold(int v) { gold += v; }

	int  getgps() { return gps; }
	void  setgps(int v) { gps = v; }
	void  decreasegps(int v) { gps -= v; }
	void  increasegps(int v) { gps += v; }

	int  getgpc() { return gpc; }
	void  setgpc(int v) { gpc = v; }
	void  decreasegpc(int v) { gpc -= v; }
	void  increasegpc(int v) { gpc += v; }

	int  gettotgold() { return totGold; }
	void  settotgold(int v) { totGold = v; }
	void  decreasetotgold(int v) { totGold -= v; }
	void  increasetotgold(int v) { totGold += v; }

	int  getclicks() { return clicks; }
	void  setclicks(int v) { clicks = v; }
	void  decreaseclicks(int v) { clicks -= v; }
	void  increaseclicks(int v) { clicks += v; }

	int  getitemsbought() { return itemsbought; }
	void  setitemsbought(int v) { itemsbought = v; }
	void  decreaseitemsbought(int v) { itemsbought -= v; }
	void  increaseitemsbought(int v) { itemsbought += v; }

	std::wstring getItBoToString();
	std::wstring getTotGoldToString();
	std::wstring getClicksToString();
	std::wstring getGoldToString();
	std::wstring getGpcToString();
	std::wstring getGpsToString();

	int gpcStringLength();

	void checkedGoldDecrease(int v);
	void goldovertime(float fElapsedTime);
	void clickD();


private:
	int gold;
	int gpc;

	int gps;
	float loop;

	int clicks;
	int totGold;

	int itemsbought; 
};

