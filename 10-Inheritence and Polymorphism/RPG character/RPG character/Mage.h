#ifndef MAGE_H
#define MAGE_H

#include "Player.h"

using namespace std;

class Mage : public Player
{

	public:
		Mage(string name, Race race, int hitpoints, int magicpoints) : Player(name, race, hitpoints, magicpoints)
		{}

		string attack() const;

};

#endif