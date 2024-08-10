#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>

using namespace std;

int main()
{
	Animal* mycatptr = new Cat("pepsi", 7.0, "tabi");

	cout << mycatptr->makeNoise() << endl;

	//mycatptr->chaseMouse(); to access this function i need to make a direct cat object so i need to cast it to cat pointer

	//((Cat*)mycatptr)->chaseMouse(); // this is an old style of casting

	reinterpret_cast<Cat*> (mycatptr)->chaseMouse(); // c++ devs like to use this

	delete mycatptr;
	mycatptr = nullptr;

	return 0;
}