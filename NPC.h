#pragma once
#include <string>
#include <iostream>
using namespace std;
class NPC
{
	string name;
	string phrase;
public:
	NPC();
	void set_Name(string s);
	void set_Phrase(string s);
	
	void tellPhrase();
	~NPC();
};

class Enemy : public NPC {
	int lvl;
	int hp;
	int attackPower;
public:
	Enemy();
	void set_lvl(int l);
	void set_attackPower();
	void set_hp();
	int get_hp();
	int get_attackPower();
	int get_lvl();
	int struckBack();
	~Enemy();
};

class Charachter : public Enemy {
	int XP;
public:
	Charachter();
	void set_XP(int xp);
	int get_XP();
	~Charachter();

};