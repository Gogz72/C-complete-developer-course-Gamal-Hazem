#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>

using namespace std;

class Pizza
{
	public:
		Pizza(string name, int cost, int diameter);
		void addTopping(string topping);
		int getCost() const;
		void printToppings() const;


	private:
		vector <string> toppings;
		string name;
		int cost; 
		int diameter;

};




#endif