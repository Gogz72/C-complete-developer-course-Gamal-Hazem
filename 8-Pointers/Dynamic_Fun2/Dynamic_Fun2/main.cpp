#include <iostream>
#include "Dog.h"
using namespace std;

int main()
{
	//////////////////// Dynamic Objects ///////////////////
	Dog* DogPtr = new Dog("Fiedo", "German Shepard");
	Dog* yourDogPtr = new Dog("Rocky", "Golden retriver");

	cout << "printing the following classes using the arrow operator" << endl;
	cout << DogPtr->getBreed() << endl;
	cout << DogPtr->getName() << endl;
	cout << endl;

	cout << "printing the following classes using the derefrencing operator" << endl;
	cout << (*yourDogPtr).getBreed() << endl;
	cout << (*yourDogPtr).getName() << endl; // the bracket is used as the . operator has a higher priority than the * 

	///////Dont forget to delete pointers and point to nullptr

	delete DogPtr;
	delete yourDogPtr;

	DogPtr = nullptr;
	yourDogPtr = nullptr;

	////////////////// Dynamic Arrays /////////////////////

	int arr_size = 0;
	cout << "please enter the size of the array" << endl;
	cin >> arr_size;

	int* myArrPtr = new int[arr_size];

	cout << "please enter the contents of the array" << endl;

	for (int i = 0; i < arr_size; i++)
		cin >> myArrPtr[i];

	cout << "your array is" << endl;

	for (int i = 0; i < arr_size; i++)
		cout << myArrPtr[i];

	delete[] myArrPtr; // dont forget the []
	myArrPtr = nullptr;





	return 0;
}