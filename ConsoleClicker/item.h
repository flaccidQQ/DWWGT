#pragma once
#include <string>


//Item m‰‰rittelyt
class Item
{
public:
	Item(std::wstring n, int p,int g, int gS, int xP,int yP);
	~Item() {};

	//GET SET osio
	std::wstring getItemText(int i);
	std::wstring hep;

	int getItemLocation(int v);

	void setX(int v){ x = v; }
	int getX() { return x; }
	void setY(int v) { y = v; }
	int getY() { return y; }
	int getPrice() { return price; }

	int getGps() { return gps; }
	int getGpc() { return gpc; }

	int setSize(std::wstring n);
	int getSize()
	{
		return size;
	}


private:
	std::wstring name;
	int id;
	int price;

	int gpc;
	int gps;

	int x;
	int y;
	int size;
	
};

