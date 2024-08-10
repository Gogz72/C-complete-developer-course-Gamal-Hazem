#ifndef PRIEST_H
#define PRIEST_H

#include "Player.h"

using namespace std;

class Priest : public Player
{

	public:
		Priest(string name, Race race, int hitpoints, int magicpoints) : Player(name, race, hitpoints, magicpoints)
		{}

		string attack() const;

};

#endif