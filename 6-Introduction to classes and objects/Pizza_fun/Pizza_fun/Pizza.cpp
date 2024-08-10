#include "Pizza.h"
#include <iostream>

using namespace std;

Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;

}

void Pizza::addTopping(string topping)
{
	toppings.push_back(topping);
}

int Pizza::getCost() const
{
	return cost;
}

void Pizza::printToppings() const
{
	cout << "your toppings are : " << endl;
	for (int i = 0; i <= toppings.size(); i++)
		cout << i+1 << ". " << toppings[i] << endl;
		
}