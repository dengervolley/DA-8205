#include "Manager.h"
#include <conio.h>
#include<iostream>
#include <windows.h>
using namespace std;


Manager::Manager()
{
	
}

void Manager::menu()
{
	int n;
	cout << "New game - 1" << endl;
	cout << "Continue - 2" << endl;
	cout << "Save progress - 3" << endl;
	cout << "Exit - 4" << endl;
	char ch = _getch();
	n = static_cast<int>(ch);
	switch (n) {
	case 49: {

		newGame(); 
		
	}break;
	case 50: continueGame(); break;
	case 51: save(); break;
	case 52: cout << "Exit"; exit(0); break;
	}
}

void Manager::newGame()
{
	char ch;
	cout << "Starting the new game" << endl;
	map.createMap();
	while (true)
	{
		ch = _getch();
		play.controls(ch);
	}

	
}

void Manager::continueGame()
{
	cout << "Continuing" << endl;
	char ch;
	while (true)
	{
		ch = _getch();
		play.controls(ch);
	}

}

void Manager::save()
{
	cout << "Saved" << endl;
	char ch;
	while (true)
	{
		ch = _getch();
		play.controls(ch);
	}
}




Manager::~Manager()
{
	cout << "Manager Destructed "; Sleep(1000);
}
