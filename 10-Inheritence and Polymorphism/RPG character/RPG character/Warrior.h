#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"
using namespace std;

class Warrior : public Player
{
	public:

		Warrior(string name, Race race, int hitpoints, int magicpoints) : Player(name, race, hitpoints, magicpoints)
		{}

		string attack() const;



};

#endif