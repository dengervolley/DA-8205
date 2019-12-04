#include "Map.h"
#include <conio.h>
#include<iostream>
#include <string>
#include <windows.h>
using namespace std;

Charachter Dimasik;
Enemy Badboy;
NPC RandomFriendlyGuy;

Map::Map()
{

}

void Map::createMap()
{
	Dimasik.set_Name("Dimasik");
	Dimasik.set_Phrase("I`m back!!!");
	//Dimasik.XP = 0;
	Dimasik.set_lvl(1);
	//Dimasik.lvl = 1;
	Dimasik.set_attackPower();
	Dimasik.set_hp();


	
	RandomFriendlyGuy.set_Name("FriendlyGuy");
	RandomFriendlyGuy.set_Phrase("Lololo");


	Badboy.set_Name("Badboy");
	Badboy.set_Phrase("Anu idi suda!");
	Badboy.set_lvl(2);
	Badboy.set_hp();
	Badboy.set_attackPower();
	
	int i = 0;
	cout << "Map is created" << endl;
}

void Map::updateMap()
{
	cout << "Map is updated" << endl;
 
	int i = rand()%3;
	 
	if (i == 0) {
		RandomFriendlyGuy.tellPhrase();
	}
	else if (i == 1) {
		Dimasik.tellPhrase();
		cout << Dimasik.get_lvl() << " lvl" << endl;
		cout<<Dimasik.get_hp()<<" hp" << endl;
		cout << Dimasik.get_attackPower() << " attack power" << endl;
		cout << Dimasik.get_XP() << " experience" << endl;
	}
	else if (i == 2) {
		Badboy.tellPhrase();
		cout << Badboy.get_lvl() << " lvl" << endl;
		cout << Badboy.get_hp() << " hp" << endl;
		cout << Badboy.get_attackPower() << " attack power" << endl;
	}

}


Map::~Map()
{
	cout << "Map is destructed "; Sleep(1000);
}
