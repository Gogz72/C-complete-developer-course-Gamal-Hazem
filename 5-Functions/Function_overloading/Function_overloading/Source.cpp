#include <iostream>
#include <string>

using namespace std;

int getresult(int a, int b, int c);
int getresult(int a, int b);
string getresult(string a, string b);
int getresult(int a);

int main()
{
	cout << "the result of the 3 int getresult is " << getresult(1, 1, 1) << endl;

	cout << "the result of the 2 int getresult is " << getresult(1, 1) << endl;

	cout << "the result of the string getresult is " << getresult("Gamal", "Hazem") << endl;

	cout << "the result of the cube getresult is " << getresult(3) << endl;


	return 0;
}


int getresult(int a, int b, int c)
{
	return (a + b + c);
}
int getresult(int a, int b)
{
	return(a + b);
}
string getresult(string a, string b)
{
	return (a + " " + b);
}
int getresult(int a)
{

	return a * a * a;
}
