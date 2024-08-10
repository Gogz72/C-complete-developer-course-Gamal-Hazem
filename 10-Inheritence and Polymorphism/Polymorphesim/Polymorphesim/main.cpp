#include "Animal.h"
#include "Dog.h"
#include <iostream>

using namespace std;

int main()
{
	Animal* Dogptr = new Dog("Fido", 50.0, "Rot");

	cout << Dogptr->eat() << "\t" << Dogptr->makeNoise() << endl;



	return 0;
}

// this section is fairly complicated it is about polmorphism which is many forms of an object and it is about the virtual keyword that does something called a late binding
// binding is a feature in any programming language that if there is an overload of data it chooses one of the overloads in c++ the default is an early binding that means
// that the compiler chooses the earliest declaration of the overload overriding other methods or functions so to differentiate it we use the keyword virtual
// another note is that for example in this code there is nothing called as a generic animal that makes a noise so we use a pure virtual method that prevents the creation of that object
// and only permits the creation of the child classes check Animal.h and Animal.cpp
// VI note the creation of the pointer can be done by two ways the default decleration and by dynamic allocation using a pointer of the base class which is now an abstact class due to the pure
// virtual modifier 