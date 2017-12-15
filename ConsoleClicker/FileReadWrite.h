#pragma once
#include <fstream>
#include <string>
#include <vector>

class FileReadWrite
{
public:


	std::vector<int> dataVector;

	bool readFile() {
		int i;
		inFile.open("datababe");
		dataVector.clear();
		if (!inFile)
		{
			inFile.clear();
			inFile.close();
			return false;
		}
		if (inFile)
		{
			while (inFile >> i)
			{
				dataVector.push_back(i);
			}
			inFile.close();
			return true;
		}
	}
	
	void writeFile(int playerGold, int playerGpc, int playerGps, int playerClicks, int playerTotGold, int playerItems)
	{
		outFile.open("datababe");
		if (outFile)
		{
			outFile << playerGold << "\n" << playerGpc << "\n" << playerGps << "\n" << playerClicks << "\n" << playerTotGold << "\n" << playerItems;
		}
		outFile.clear();
		outFile.close();
	}
private:
	std::ifstream inFile;
	std::ofstream outFile;

};