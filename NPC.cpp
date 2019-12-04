#include "NPC.h"



NPC::NPC()
{
}

void NPC::set_Name(string s)
{
	this->name = s;
}

void NPC::set_Phrase(string s)
{
	this->phrase = s;
}


void NPC::tellPhrase()
{
	cout << endl << this->name<< ": " << this->phrase << endl; 
}

NPC::~NPC()
{
}

Enemy::Enemy()
{
}

void Enemy::set_lvl(int l)
{
	this->lvl = l;
}

void Enemy::set_attackPower()
{
	this->attackPower = this->lvl * 2;
}

void Enemy::set_hp()
{
	this->hp = this->lvl * 10;
}

int Enemy::get_hp()
{
	return this->hp;
}

int Enemy::get_attackPower()
{
	return this->attackPower;
}

int Enemy::get_lvl()
{
	return this->lvl;
}

int Enemy::struckBack()
{

	return this->attackPower;
}

Enemy::~Enemy()
{
}

Charachter::Charachter()
{
}

void Charachter::set_XP(int xp)
{
	this->XP = xp;
}

int Charachter::get_XP()
{
	return this->XP;
}

Charachter::~Charachter()
{
}
