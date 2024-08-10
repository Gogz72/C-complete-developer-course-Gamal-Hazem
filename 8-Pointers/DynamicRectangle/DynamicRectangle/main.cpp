#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
	const int arr_size = 3;
	double length, width;
	Rectangle* Recarr[arr_size]; // this means that i have 3 ready positions that i can dynamcally allocate with the rectangle object

	for (int i = 0; i < arr_size; i++)
	{
		cout << "please enter the dimensions (LxW) of the rectangle number " << i+1 << endl;

		cin >> length >> width;

		Recarr[i] = new Rectangle (length, width);
	}

	for (int i = 0; i < arr_size; i++)
	{
		cout << "this is the area and perimeter respectivley of the rectangle number " << i + 1 << endl;
		cout << Recarr[i]->area() << "  " << Recarr[i]->perimeter() << endl;

	}

	// you always forget to delete you need to delete

	for (int i = 0; i < arr_size; i++)
	{
		delete Recarr[i];
		Recarr[i] = nullptr;

	}



	return 0;
}