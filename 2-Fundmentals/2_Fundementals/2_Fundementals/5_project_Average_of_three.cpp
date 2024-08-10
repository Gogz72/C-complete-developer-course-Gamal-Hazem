#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3;
    
	cout << "enter three numbers to calculate the Average\nNumber 1:" << endl;
	cin >> num1;

	cout << "Number 2:" << endl;
	cin >> num2;

	cout << "Number 3:" << endl;
	cin >> num3;

	cout << "your average is:\n" << ((num1 + num2 + num3) / 3) << endl;


	return 0;
}