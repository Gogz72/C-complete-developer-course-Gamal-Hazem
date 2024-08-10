#include "Circle.h"
#include <iostream>

using namespace std;

int main()
{
	int arr_size = 0;
	Circle** Circptrarr;
	double radius = 0;

	cout << "please enter the array size" << endl;
	cin >> arr_size;

	Circptrarr = new Circle* [arr_size];

	for (int i = 0; i < arr_size; i++)
	{
		cout << "please enter the radius of the circle number " << i + 1 << endl;

		cin >> radius;

		Circptrarr[i] = new Circle(radius);

	}

	for (int i = 0; i < arr_size; i++)
	{
		cout << "the area and circumferecne respectivley of circle number " << i + 1 << endl;

		cout << Circptrarr[i]->area() << "     " << Circptrarr[i]->circumfrence() << endl;
	}

	for (int i = 0; i < arr_size; i++)
	{

		delete Circptrarr[i];

		Circptrarr[i] = nullptr;

	}

	delete[] Circptrarr;
	Circptrarr = nullptr;
	



	return 0;
}

// look at it in a more simple way to dynamically create an enity you create a pointer and write new 
// in this example it is a dynamically created array of pointers and each pointer creats a new entity
