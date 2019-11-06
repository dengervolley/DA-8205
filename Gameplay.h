#pragma once
#include "Map.h"
class Gameplay
{
public:
	Gameplay();
	Map map;
	int controls(int key);
	~Gameplay();
};

