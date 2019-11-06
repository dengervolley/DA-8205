#include "Map.h"
#include <conio.h>
#include<iostream>
#include <windows.h>
using namespace std;



Map::Map()
{

}

void Map::createMap()
{
	cout << "Map is created" << endl;
}

void Map::updateMap()
{
	cout << "Map is updated" << endl;
}


Map::~Map()
{
	cout << "Map is destructed "; Sleep(1000);
}
