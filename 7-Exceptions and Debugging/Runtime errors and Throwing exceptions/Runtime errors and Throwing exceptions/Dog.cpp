#include "Dog.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Dog::Dog(string breed)
{
	if (breed == "Poodle")
		throw runtime_error("Poodle?! that is not a real dog");
	else
		this->breed = breed;
}

string Dog::getBreed() const noexcept
{
	return breed;
}