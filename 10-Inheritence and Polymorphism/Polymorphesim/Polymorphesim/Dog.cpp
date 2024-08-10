#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
	this->breed = breed;
}
string Dog::getBreed() const
{
	return breed;
}
void Dog::digHole() const
{
	cout << "Digging a hole" << endl;
}

string Dog::makeNoise() const
{

	return "hao hao";

}

void Dog::chaseMouse() const
{
	cout << "come here boiiiiiiii" << endl;
}

string Dog::eat() const
{
	return "I love Dog food";
}

