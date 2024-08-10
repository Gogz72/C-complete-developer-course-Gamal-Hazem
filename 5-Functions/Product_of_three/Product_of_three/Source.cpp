#include <iostream>

using namespace std;


int product_of_three(int a, int b, int c);

int main()
{
	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	cin.get();

	int product = product_of_three(n1, n2, n3);

	cout << "the product is " << product << endl;


	return 0;
}

int product_of_three(int a, int b, int c)
{
	return a * b * c;
}