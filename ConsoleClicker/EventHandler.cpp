#include "EventHandler.h"

void EventHandler::saveGame()
{
	readWrite.writeFile(player.getGold(), player.getgpc(), player.getgps(), player.getclicks(), player.gettotgold(), player.getitemsbought());
}

void EventHandler::loadGame()
{
	if (readWrite.readFile())
	{
		player.setGold(readWrite.dataVector.at(0));
		player.setgpc(readWrite.dataVector.at(1));
		player.setgps(readWrite.dataVector.at(2));
		player.setclicks(readWrite.dataVector.at(3));
		player.settotgold(readWrite.dataVector.at(4));
		player.setitemsbought(readWrite.dataVector.at(5));
	}
}

void EventHandler::newGame()
{
	player.setGold(0);
	player.setgpc(1);
	player.setgps(0);
	player.setclicks(0);
	player.settotgold(0);
	player.setitemsbought(0);
}

void EventHandler::PurchaseItem(int i)
{
	if (player.getGold() - shop.items->at(i).getPrice() >= 0)
	{
		player.checkedGoldDecrease(shop.items->at(i).getPrice());
		player.increasegpc(shop.items->at(i).getGpc());
		player.increasegps(shop.items->at(i).getGps());
		player.increaseitemsbought(1);
	}
}