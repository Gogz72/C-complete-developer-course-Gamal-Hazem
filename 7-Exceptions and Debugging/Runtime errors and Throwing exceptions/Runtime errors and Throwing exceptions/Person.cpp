#include "Person.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Person::Person(string name)
{

	setName(name);

}

void Person::setName(string name)
{
	if (name == "Gamal")
		throw runtime_error("this name scares Gamal when you call him by it it is to serious for him");
	else
		this->name = name;


}

string Person::getName() const noexcept // no except indentifier is like a comment that this member doesnt throw an exception
{
	return name;
}
