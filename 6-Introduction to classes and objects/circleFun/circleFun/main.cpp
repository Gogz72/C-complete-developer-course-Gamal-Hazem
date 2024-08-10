#include <iostream>
#include "Circle.h"
using namespace std;

void printCircleDetails(const Circle& circle);

int main()
{
	Circle C1;
	Circle C2(5.0);

	printCircleDetails(C1);
	printCircleDetails(C2);

	return 0;
}

void printCircleDetails(const Circle& circle)
{

	cout << "the details of the circle passed are:" << endl
		<< "1. Radius: " << circle.getRadius() << endl
		<< "2.Area: " << circle.area() << endl
		<< "3.Circumfrence " << circle.circumfrence() << endl;

}