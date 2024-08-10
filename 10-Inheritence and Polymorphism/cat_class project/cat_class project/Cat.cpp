#include "Cat.h"
#include <iostream>

using namespace std;
Cat::Cat(string name, double weight, string breed) : Animal(name, weight)
{
	this->breed = breed;
}
string Cat::getBreed() const
{
	return breed;
}
string Cat::makeNoise() const
{
	return "MEOW";
}
void Cat::chaseMouse() const
{
	cout << "I am chasing a mouse" << endl;
}
string Cat::eat() const
{
	return "I love cat food";

}