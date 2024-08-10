#include <iostream>

using namespace std;

int square(int a);


int main()
{
	int prompt;

	cin >> prompt;

	int num;

	num = square(prompt);

	cout << num << endl;

	return 0;
}


int square(int a)
{

	return a * a;

}