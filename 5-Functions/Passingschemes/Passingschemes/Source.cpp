#include <iostream>

using namespace std;

void change_value_to_triple(int x, int& y);

int main()
{
	int a, b;

	a = 20;

	b = a;
	
	cout << "a is equal to   " << a << endl;

	change_value_to_triple(b, a);

	cout << "now we back at main and a equals  " << a << endl;

	return 0;
}

void change_value_to_triple(int x, int& y)
{

	cout << "changing value now....." << endl;
	y = x * 3;

}