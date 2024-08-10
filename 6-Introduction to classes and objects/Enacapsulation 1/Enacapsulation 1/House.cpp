#include "House.h"

House::House() // this is called a constructor and it is like a function that will always go through every time an object is created like default settings (they can be overloaded wit parameters)
{
	this -> numStories = 1;
	this->numWindows = 4;
	this->house_name = "Player";
	this->color = "white";

}

House::~House() // now this is called a deconstructor and it does the opposite of the constructor it is a faunction that goes through when the lifetime of the object ends (no Overloading!!)
{
	cout << "the " << color << " house with " << numStories << " and " << numWindows << " that belongs to " << house_name << " is being destroyed" << endl;

}

House::House(int numStories, int numWindows, string color, string house_name) // the overload with parameters
{
	this->numStories = numStories;
	this->numWindows = numWindows;
	this->color = color;
	this->house_name = house_name;
}

void House:: set_numStories(int numStories) // the house :: is used to tell the compliler that this function belongs to the class 
{
	this->numStories = numStories; // the this is used to identify that i am using the private variable i also can not write this if the parameter is not the same name 
	// it is just good code that the parameter is the same name as the data member
}

void House::set_numWindows(int numWindows)
{
	this->numWindows = numWindows;
}
void House::set_color(string color)
{
	this->color = color;
}
void House::set_house_name(string house_name)
{
	this->house_name = house_name;
}
int House::get_numStories() const // the const is to prevent the function from modifying or to access the private variables
{
	return numStories;
}
int House::get_numWindows() const
{
	return numWindows;

}
string House::get_color() const
{
	return color;
}
string House::get_house_name() const
{
	return house_name;
}
void House::print_house_details() const
{
	cout << "the house under investigation is " << house_name << endl;
	cout << "The color of the house is " << color << endl;
	cout << "The house has " << numStories << " stories" << endl;
	cout << "The house has " << numWindows << " windows" << endl << endl;
}
