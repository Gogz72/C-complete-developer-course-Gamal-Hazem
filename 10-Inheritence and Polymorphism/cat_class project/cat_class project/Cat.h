#ifndef CAT_H
#define CAT_H	

#include "Animal.h"
using namespace std;

class Cat : public Animal
{
	public:
		Cat(string name, double weight, string breed);
		string getBreed() const;
		string makeNoise() const;
		void chaseMouse() const;
		string eat() const;

	private:
		string breed;


};

#endif