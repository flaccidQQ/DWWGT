#include "game.h"

	void ClickerGame::WriteText(int x, int y, wstring s)
	{
		int sP = 0;
		for (auto i : s)
		{
			wchar_t ab = i;
			switch (ab)
			{
			case 'A':
				DrawPartialSprite(x + sP, y, events.sprite.abcdeSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case 'B':
				DrawPartialSprite(x + sP, y, events.sprite.abcdeSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case 'C':
				DrawPartialSprite(x + sP, y, events.sprite.abcdeSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case 'D':
				DrawPartialSprite(x + sP, y, events.sprite.abcdeSprite, 0, 18, 3, 5);
				sP += 4;
				break;
			case 'E':
				DrawPartialSprite(x + sP, y, events.sprite.abcdeSprite, 0, 24, 3, 5);
				sP += 4;
				break;
			case 'F':
				DrawPartialSprite(x + sP, y, events.sprite.fghijSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case 'G':
				DrawPartialSprite(x + sP, y, events.sprite.fghijSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case 'H':
				DrawPartialSprite(x + sP, y, events.sprite.fghijSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case 'I':
				DrawPartialSprite(x + sP, y, events.sprite.fghijSprite, 0, 18, 3, 5);
				sP += 4;
				break;
			case 'J':
				DrawPartialSprite(x + sP, y, events.sprite.fghijSprite, 0, 24, 3, 5);
				sP += 4;
				break;
			case 'K':
				DrawPartialSprite(x + sP, y, events.sprite.klmnoSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case 'L':
				DrawPartialSprite(x + sP, y, events.sprite.klmnoSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case 'M':
				DrawPartialSprite(x + sP, y, events.sprite.klmnoSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case 'N':
				DrawPartialSprite(x + sP, y, events.sprite.klmnoSprite, 0, 18, 3, 5);
				sP += 4;
				break;
			case 'O':
				DrawPartialSprite(x + sP, y, events.sprite.klmnoSprite, 0, 24, 3, 5);
				sP += 4;
				break;
			case 'P':
				DrawPartialSprite(x + sP, y, events.sprite.pqrstSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case 'Q':
				DrawPartialSprite(x + sP, y, events.sprite.pqrstSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case 'R':
				DrawPartialSprite(x + sP, y, events.sprite.pqrstSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case 'S':
				DrawPartialSprite(x + sP, y, events.sprite.pqrstSprite, 0, 18, 3, 5);
				sP += 4;
				break;
			case 'T':
				DrawPartialSprite(x + sP, y, events.sprite.pqrstSprite, 0, 24, 3, 5);
				sP += 4;
				break;
			case 'U':
				DrawPartialSprite(x + sP, y, events.sprite.uvwSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case 'V':
				DrawPartialSprite(x + sP, y, events.sprite.uvwSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case 'W':
				DrawPartialSprite(x + sP, y, events.sprite.uvwSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case 'X':
				DrawPartialSprite(x + sP, y, events.sprite.xyzSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case 'Y':
				DrawPartialSprite(x + sP, y, events.sprite.xyzSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case 'Z':
				DrawPartialSprite(x + sP, y, events.sprite.xyzSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case '1':
				DrawPartialSprite(x + sP, y, events.sprite.oneToFiveSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case '2':
				DrawPartialSprite(x + sP, y, events.sprite.oneToFiveSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case '3':
				DrawPartialSprite(x + sP, y, events.sprite.oneToFiveSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case '4':
				DrawPartialSprite(x + sP, y, events.sprite.oneToFiveSprite, 0, 18, 3, 5);
				sP += 4;
				break;
			case '5':
				DrawPartialSprite(x + sP, y, events.sprite.oneToFiveSprite, 0, 24, 3, 5);
				sP += 4;
				break;
			case '6':
				DrawPartialSprite(x + sP, y, events.sprite.sixToZeroSprite, 0, 0, 3, 5);
				sP += 4;
				break;
			case '7':
				DrawPartialSprite(x + sP, y, events.sprite.sixToZeroSprite, 0, 6, 3, 5);
				sP += 4;
				break;
			case '8':
				DrawPartialSprite(x + sP, y, events.sprite.sixToZeroSprite, 0, 12, 3, 5);
				sP += 4;
				break;
			case '9':
				DrawPartialSprite(x + sP, y, events.sprite.sixToZeroSprite, 0, 18, 3, 5);
				sP += 4;
				break;
			case '0':
				DrawPartialSprite(x + sP, y, events.sprite.sixToZeroSprite, 0, 24, 3, 5);
				sP += 4;
				break;
			case ' ':
				DrawPartialSprite(x + sP, y, events.sprite.abcdeSprite, 4, 0, 1, 1);
				sP += 4;
				break;
			}
		}
	}

	void ClickerGame::UI(float fElapsedTime)
	{
		Fill(0, 0, ScreenWidth(), ScreenHeight(), ' ', BG_DARK_GREY);
		
		//TOPRIGHT
		Fill(ScreenWidth() / 2 + 10, 1, ScreenWidth() - 1, 99, ' ', BG_YELLOW);
		Fill(ScreenWidth() / 2 + 11, 2, ScreenWidth() - 2, 98, ' ', BG_DARK_YELLOW);
		Fill(ScreenWidth() / 2 + 12, 3, ScreenWidth() - 3, 97, PIXEL_SOLID, BG_BLACK);

		//BOTRIGHT
		Fill(ScreenWidth() / 2 + 10, 101, ScreenWidth() - 1, ScreenHeight(), ' ', BG_YELLOW);
		Fill(ScreenWidth() / 2 + 11, 102, ScreenWidth() - 2, ScreenHeight() - 1, ' ', BG_DARK_YELLOW);
		Fill(ScreenWidth() / 2 + 12, 103, ScreenWidth() - 3, ScreenHeight() - 2, PIXEL_SOLID, BG_BLACK);

		//TOPLEFT
		Fill(1, 1, 119, 99, ' ', BG_YELLOW);
		Fill(2, 2, 118, 98, ' ', BG_DARK_YELLOW);
		Fill(3, 3, 117, 97, PIXEL_SOLID, BG_BLACK);

		//BOTLEFT
		Fill(1, 101, ScreenWidth() / 2 - 9, ScreenHeight(), ' ', BG_YELLOW);
		Fill(2, 102, ScreenWidth() / 2 - 10, ScreenHeight() - 1, ' ', BG_DARK_YELLOW);
		Fill(3, 103, ScreenWidth() / 2 - 11, ScreenHeight() - 2, PIXEL_SOLID, BG_BLACK);

		//Coin, or whatever
		Fill(ScreenWidth() / 2 - 5, ScreenHeight() - 31, ScreenWidth() / 2 + 6, ScreenHeight() - 20, ' ', BG_YELLOW);
		Fill(ScreenWidth() / 2 - 4, ScreenHeight() - 30, ScreenWidth() / 2 + 5, ScreenHeight() - 21, ' ', BG_DARK_YELLOW);
		WriteText(ScreenWidth() / 2 - 1, ScreenHeight() - 28, L"1");

		WriteText(4, uiL[0], L"GLD   " + events.player.getGoldToString());
		WriteText(4, uiL[1], L"GPC   " + events.player.getGpcToString());
		WriteText(4, uiL[2], L"GPS   " + events.player.getGpsToString());
		WriteText(ScreenWidth() / 2 + 13,  uiL[0], L"CLICKS " + events.player.getClicksToString());
		WriteText(ScreenWidth() / 2 + 13, uiL[1], L"TGOLD  " + events.player.getTotGoldToString());
		WriteText(ScreenWidth() / 2 + 13, uiL[2], L"ITEMS  " + events.player.getItBoToString());
		WriteText(ScreenWidth() / 2 + 21, 45, L"MOUSEOVER ITEMS FOR INFO");
		DrawLine(ScreenWidth() / 2 + 21, 51, ScreenWidth() - 13, 51, '.', FG_DARK_YELLOW);
		DrawLine(ScreenWidth() / 2 + 21, 43, ScreenWidth() - 13, 43, '.', FG_DARK_YELLOW);

		//Menu button
		Fill(ScreenWidth() / 2 - 3, 2, ScreenWidth() / 2 + 4,11, '.', FG_DARK_GREY);
		Fill(ScreenWidth() / 2 - 2, 3, ScreenWidth() / 2 + 3, 10, PIXEL_SOLID, FG_BLACK);
		WriteText(ScreenWidth() / 2 - 1, 4, L"M");
	}

	void ClickerGame::menuScreen()
	{
		if (menuClickd)
		{
			Fill(ScreenWidth() / 2 - 50, 5, ScreenWidth() / 2 + 49, 100, ' ', BG_DARK_GREY);
			Fill(ScreenWidth() / 2 - 49, 6, ScreenWidth() / 2 + 48, 99, ' ', BG_BLACK);
			WriteText(ScreenWidth() / 2 - 7, 10, L"MENU");

			Fill(ScreenWidth() / 2 - 10, 28, ScreenWidth() / 2 + 10, 37, ' ', BG_GREY);
			Fill(ScreenWidth() / 2 - 9, 29, ScreenWidth() / 2 + 9, 36, ' ', BG_BLACK);
			WriteText(ScreenWidth() / 2 - 6, 30, L"NEW");

			Fill(ScreenWidth() / 2 - 10, 38, ScreenWidth() / 2 + 10, 47,' ', BG_GREY);
			Fill(ScreenWidth() / 2 - 9, 39, ScreenWidth() / 2 + 9, 46, ' ', BG_BLACK);
			WriteText(ScreenWidth() / 2 - 7, 40, L"SAVE");

			Fill(ScreenWidth() / 2 - 10, 48, ScreenWidth() / 2 + 10, 57, ' ', BG_GREY);
			Fill(ScreenWidth() / 2 - 9, 49, ScreenWidth() / 2 + 9, 56, ' ', BG_BLACK);
			WriteText(ScreenWidth() / 2 - 7, 50, L"LOAD");

			Fill(ScreenWidth() / 2 - 10, 58, ScreenWidth() / 2 + 10, 67, ' ', BG_GREY);
			Fill(ScreenWidth() / 2 - 9, 59, ScreenWidth() / 2 + 9, 66, ' ', BG_BLACK);
			WriteText(ScreenWidth() / 2 - 7, 60, L"BACK");

			Fill(ScreenWidth() / 2 - 10, 78, ScreenWidth() / 2 + 10, 87, ' ', BG_GREY);
			Fill(ScreenWidth() / 2 - 9, 79, ScreenWidth() / 2 + 9, 86, ' ', BG_RED);
			WriteText(ScreenWidth() / 2 - 7, 80, L"EXIT");
		}
	}

	void ClickerGame::clickTheButton()
	{
		if (((m_mousePosY >= ScreenHeight() - 30) && (m_mousePosY <= ScreenHeight() - 20)) && ((m_mousePosX >= ScreenWidth() / 2 - 5) && (m_mousePosX <= ScreenWidth() / 2 + 6)))
		{
			coinEffectTimer = 0;
			events.player.clickD();
			blingCoin = true;
		}
		if ((m_mousePosY >= 2 && m_mousePosY <= 11) && ((m_mousePosX >= ScreenWidth() / 2 - 3) && (m_mousePosX <= ScreenWidth() / 2 + 4)))
		{
			menuClickd = true;
		}
		if (menuClickd)
		{
			if ((m_mousePosY >= 28 && m_mousePosY <= 37) && ((m_mousePosX >= ScreenWidth() / 2 - 10) && (m_mousePosX <= ScreenWidth() / 2 + 10)))
			{
				events.newGame();
				menuClickd = false;
			}
			if ((m_mousePosY >= 38 && m_mousePosY <= 47) && ((m_mousePosX >= ScreenWidth() / 2 - 10) && (m_mousePosX <= ScreenWidth() / 2 + 10)))
			{
				events.saveGame();
				menuClickd = false;
			}
			if ((m_mousePosY >= 48 && m_mousePosY <= 57) && ((m_mousePosX >= ScreenWidth() / 2 - 10) && (m_mousePosX <= ScreenWidth() / 2 + 10)))
			{
				events.loadGame();
				menuClickd = false;
			}
			if ((m_mousePosY >= 58 && m_mousePosY <= 67) && ((m_mousePosX >= ScreenWidth() / 2 - 10) && (m_mousePosX <= ScreenWidth() / 2 + 10)))
			{
				menuClickd = false;
			}
			if ((m_mousePosY >= 78 && m_mousePosY <= 87) && ((m_mousePosX >= ScreenWidth() / 2 - 10) && (m_mousePosX <= ScreenWidth() / 2 + 10)))
			{
				exit(0);
			}
		}
	}

	void ClickerGame::blingEffect(float fElapsedTime)
	{
		if (blingCoin)
		{
			Fill(ScreenWidth() / 2 - 5, ScreenHeight() - 31, ScreenWidth() / 2 + 6, ScreenHeight() - 20, ' ', BG_DARK_YELLOW);
			Fill(ScreenWidth() / 2 - 4, ScreenHeight() - 30, ScreenWidth() / 2 + 5, ScreenHeight() - 21, ' ', BG_YELLOW);
			WriteText(ScreenWidth() / 2 - 1, ScreenHeight() - 28, L"1");
			WriteText(ScreenWidth() / 2 - events.player.gpcStringLength(), ScreenHeight() - 31 + coinEffectTimer, events.player.getGpcToString());
			if (coinEffectTimer >= -50.0f)coinEffectTimer -= 50.0f * fElapsedTime;
			if (coinEffectTimer <= -50.0f)
			{
				coinEffectTimer = 0;
				blingCoin = false;
			}
		}
	}

	void ClickerGame::HandleItems()
	{
		for (int i = 0; i < events.shop.items->size(); i++)
		{
			itemPosHolder = i;
			DrawLine(itemPosX() - 1, itemPosY() + 5, itemPosX() + 112, itemPosY() + 5, '.', FG_DARK_YELLOW);
			
			if (((m_mousePosX >= itemPosX()) && (m_mousePosX <= itemPosX() + itemSize())) && ((m_mousePosY >= itemPosY()) && (m_mousePosY <= itemPosY() + 4)))
			{
				mouseOverItem = true;
				Fill(ScreenWidth() / 2 + 12, 3, ScreenWidth() - 4, 97, PIXEL_SOLID, FG_BLACK);
				WriteText(ScreenWidth() / 2 + 13 , 4, L"NAME"); 
				WriteText(ScreenWidth() / 2 + 13, 10, itemName());
				DrawLine(ScreenWidth() / 2 + 12, 16,ScreenWidth() - 4,16, '.', FG_DARK_YELLOW);
				WriteText(ScreenWidth() / 2 + 13, 22, L"GOLD PER CLICK");
				WriteText(ScreenWidth() / 2 + 13, 28, itemGpc());
				DrawLine(ScreenWidth() / 2 + 12, 34, ScreenWidth() - 4, 34, '.', FG_DARK_YELLOW);
				WriteText(ScreenWidth() / 2 + 13, 40, L"GOLD PER SECOND");
				WriteText(ScreenWidth() / 2 + 13, 46, itemGps());
				DrawLine(ScreenWidth() / 2 + 12, 52, ScreenWidth() - 4,52, '.', FG_DARK_YELLOW);
				if (m_keys[1].bPressed) events.PurchaseItem(itemPosHolder);
			}
		
			WriteText(itemPosX(), itemPosY(), itemName());
			WriteText(itemPosX() + 56, itemPosY(), L"PRICE " + itemPrice());
		}
	}



int main()
{
	ClickerGame Game;
	Game.ConstructConsole(256, 126, 4, 4);
	Game.Start();
	return 0;
}