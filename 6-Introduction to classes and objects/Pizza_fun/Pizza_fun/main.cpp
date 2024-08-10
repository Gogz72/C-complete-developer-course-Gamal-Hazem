#include "Pizza.h"
#include <iostream>

using namespace std;

Pizza order_pizza();
void print_pizza_details(const Pizza& pizza);

int main()
{
	Pizza myPizza = order_pizza();
	print_pizza_details(myPizza);

	return 0;
}

Pizza order_pizza()
{
	string name;
	int cost = 0;
	int diameter;
	string toppings[10] = { " " };
	int topping_number = 0;
	string topping;
	int i = 0;
	char prompt;

	cout << "please enter your pizza specification " << endl;

	cin >> name >> diameter;

	if (name == "pepperoni")
		cost += 10;

	else if (name == "special")
		cost += 15;

	if (diameter == 6)
		cost += 5;

	else if (diameter == 10)
		cost += 9;

	cout << "what toppings would you like to add " << endl;

	while (i == 0)
	{
		cout << "enter y to add toppings and n to cancel " << endl;

		cin >> prompt;

		if (prompt == 'y')
		{
			cout << " please enter your topping" << endl;

			cin >> topping;

			toppings[topping_number] = topping;

			topping_number += 1;

			if (topping_number == 9)
			{
				cout << "you have reached the limit for the toppings and the order is now out for delivery" << endl;
				i = 1;
			}

		}
		else if (prompt == 'n')
		{
			cout << " thank you from ordering ftom geezo's pizza you order will be shortly in the way" << endl;
			i = 1;
		}

	}
	Pizza yourPizza(name, cost, diameter);

	if (toppings[0] != " ")
	{
		for(int i = 0; i<topping_number-1;i++)
		{
			yourPizza.addTopping(toppings[i]);
		}
	}

	return yourPizza;

}

void print_pizza_details(const Pizza& pizza)
{
	cout << "your pizza will have" << endl;
	pizza.printToppings();
	cout << " and it will cost " << pizza.getCost();

}