#include "Player.h"
using namespace std;

Player::Player(string name, Race race, int hitpoints, int magicpoints)
{
	this->name = name;
	this->race = race;
	this->hitpoints = hitpoints;
	this->magicpoints = magicpoints;
}
string Player::getName() const
{
	return name;
}
Race Player::getRace() const
{
	return race;
}
string Player::whatRace() const
{
	if (race == 0)
		return "HUMAN";

	else if (race == 1)
		return "ELF";

	else if (race == 2)
		return "DWARF";

	else if (race == 3)
		return "ORC";

	else if (race == 4)
		return "TROLL";


}
int Player::getHitPoints() const
{

	return hitpoints;

}
int Player::getMagicPoints() const
{
	return magicpoints;
}
void Player::setName(string name)
{
	this->name = name;
}
void Player::setRace(Race race)
{
	this->race = race;
}
void Player::setHitPoints(int hitpoints)
{
	this->hitpoints = hitpoints;
}
void Player::setMagicPoints(int magicpoints)
{
	this->magicpoints = magicpoints;
}
