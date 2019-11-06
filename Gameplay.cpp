#include "Gameplay.h"
#include "Manager.h"
#include<iostream>
#include<cstdlib>
#include <windows.h>
using namespace std;

Gameplay::Gameplay()
{
}

int Gameplay::controls(int key)
{
	switch (key)
	{
	case 119: cout << "go up" << endl;	map.updateMap(); break;
	case 97: cout << "go left" << endl; 	map.updateMap(); break;
	case 115: cout << "go back" << endl;	map.updateMap(); break;
	case 100: cout << "go right" << endl; 	map.updateMap(); break;
	case 32: cout << "attack" << endl; 	map.updateMap(); break;
	case 27: Manager menu; menu.menu(); break;
	}
	return 0;
}


Gameplay::~Gameplay()
{
	cout << "Gameplay destructed "; Sleep(1000);
}
