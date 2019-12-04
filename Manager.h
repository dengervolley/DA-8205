#pragma once
#include "Map.h"
#include "Gameplay.h"
class Manager
{
	void newGame();
	void continueGame();
	void save();
public:
	Manager();
	void menu();
	
	Map map;
	Gameplay play;
	~Manager();
};

