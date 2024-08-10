#include <iostream>
#include <string>
#include "House.h"

using namespace std; 
// the functions in the public are called modfieres and there are two types the setting type and the getting type



int main()
{
	House myHouse;
	House yourHouse;
	House theHouse(4, 8, "red", "mrEVIL");

	myHouse.print_house_details();
	myHouse.set_house_name("Gogz's House");
	myHouse.set_color("Green");
	myHouse.set_numStories(2);
	myHouse.set_numWindows(4);
	myHouse.print_house_details();

	yourHouse.print_house_details();
	yourHouse.set_house_name("Sandra's house");
	yourHouse.set_color("Yellow");
	yourHouse.set_numStories(1);
	yourHouse.set_numWindows(3);
	yourHouse.print_house_details();

	theHouse.print_house_details();



	return 0;
}


