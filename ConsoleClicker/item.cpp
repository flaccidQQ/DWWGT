#include "item.h"



Item::Item(std::wstring n, int p,int g, int gS, int xP, int yP)
{
	name = n;
	price = p;
	x = xP;
	y = yP;
	gpc = g;
	gps = gS;
	size = setSize(getItemText(0));
}

std::wstring Item::getItemText(int i) 
{
	switch (i)
	{
	case 0:
		hep = (name);
		return hep;
		break;
	case 1:
		hep = std::to_wstring(price);
		return hep;
		break;
	case 2:
		hep = std::to_wstring(gpc);
		return hep;
		break;
	case 3:
		hep = std::to_wstring(gps);
		return hep;
		break;
	case 4:
		hep = (name + L" " + std::to_wstring(price) + L" G " + std::to_wstring(gpc) + L" GPC " + std::to_wstring(gps) + L" GPS");
		return hep;
		break;
	}
}

int Item::getItemLocation(int v)
{
	switch (v)
	{
	case 0:
		return x;
		break;
	case 1:
		return y;
		break;
	}

}


int Item::setSize(std::wstring s)
{
	int sizeP = 0;
	for each(wchar_t t in s)
	{
		sizeP += 4;
	}
	return sizeP;
}
