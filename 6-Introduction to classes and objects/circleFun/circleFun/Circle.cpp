#include "Circle.h"
#include <cmath>
//#define PI 	3.14159265358979323846
using namespace std;

Circle::Circle() : PI(3.14159265358979323846) // it is wriiten only at the constructor this is called a member init list that can have many variables
{
	this->radius = 1.0;
}

Circle::Circle(double radius) : PI(3.14159265358979323846)
{
	this->radius = radius;
}

double Circle::getRadius()  const 
{
	return radius;
}
void Circle::setRadius(double radius)
{
	this->radius = radius;
}
double Circle::circumfrence() const
{
	return 2 * PI * radius;
}
double Circle::area() const
{
	return PI * (pow(radius, 2));
}