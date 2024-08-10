#include <iostream>
using namespace std;

int main()
{
	int myint = 150;
	int* ptrint1;
	ptrint1 = &myint;

	double mydouble = 150.5;
	double* mydoubleptr = &mydouble;


	cout << "the value of my int is " << myint << endl;
	cout << "the address that that pointer is pointing at is " << ptrint1 << endl;
	cout << "and the pointer derfrenced is " << *ptrint1 << endl;

	*ptrint1 = 200;

	cout << "the changed value of the int is " << *ptrint1 << endl;

	cout << "the value of my double is " << mydouble << endl;
	cout << "the address that that pointer is pointing at is " << mydoubleptr << endl;
	cout << "and the pointer derfrenced is " << *mydoubleptr << endl;

	*mydoubleptr = 200;

	cout << "the changed value of the double is " << *mydoubleptr << endl;


	return 0;
}