#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Race.h"
using namespace std;

class Player
{
	public:
		Player(string name, Race race, int hitpoints, int magicpoints);
		string getName() const;
		Race getRace() const;
		string whatRace() const;
		int getHitPoints() const;
		int getMagicPoints() const;
		void setName(string name);
		void setRace(Race race);
		void setHitPoints(int hitpoints);
		void setMagicPoints(int magicpoints);
		virtual string attack() const = 0;




	private:
		string name;
		Race race;
		int hitpoints;
		int magicpoints;

};

#endif