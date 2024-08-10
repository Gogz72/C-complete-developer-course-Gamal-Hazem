#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()

{
	Rectangle r1;
	Rectangle r2(5.0, 6.0);

	cout << "r1's parameters are before changing are" << endl << "Length: "
		<< r1.getLength() << endl << "Width: " << r1.getWidth() << endl
		<< "Area: " << r1.area() << endl << "Perimiter " << r1.perimeter() << endl;

	cout << "r2's parameters are before changing are" << endl << "Length: "
		<< r2.getLength() << endl << "Width: " << r2.getWidth() << endl
		<< "Area: " << r2.area() << endl << "Perimiter " << r2.perimeter() << endl;

	r1.setLength(6.0);
	r1.setWidth(9.0);

	cout << "r1's parameters after changing are" << endl << "Length: "
		<< r1.getLength() << endl << "Width: " << r1.getWidth() << endl
		<< "Area: " << r1.area() << endl << "Perimiter " << r1.perimeter() << endl;
	


	return 0;
}