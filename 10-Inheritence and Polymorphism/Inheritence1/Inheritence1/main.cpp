#include"Animal.h"
#include "Dog.h"
#include <iostream>

using namespace std;


int main()
{
	Dog myDog("fido", 50.0, "Golden Retriver");


	cout << "My Dog's name is " << myDog.getName() << " he is " << myDog.getWeight() << " kg" << endl
		<< "and his breed is " << myDog.getBreed() << " and he makes this noise: " << myDog.makeNoise() << " and when he chases mice he says: " << endl;
	myDog.chaseMouse();
	cout << "and he when he digs a hole he says ";
	myDog.digHole();


	return 0;
}