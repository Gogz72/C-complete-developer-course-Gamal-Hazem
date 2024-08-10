#include <iostream>
#include <stdexcept>

using namespace std;

void positive_process(int num);
void do_something(int num);

int main()
{
	int input;
	try
	{
		cout << "please enter a number" << endl;
		cin >> input;
		do_something(input);
	}

	catch (const invalid_argument& err)
	{
		cerr << err.what() << endl;
	}
	catch (const out_of_range& err)
	{
		cerr << err.what() << endl;
	}

	return 0;
}

void do_something(int num)
{
	try 
	{
		positive_process(num);

		cout << "You have sent a number between 0 and 100" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "do something reports an error" << endl;
		throw; // rethrows the argument caught if left unspecfied
	}
	catch (const out_of_range& err)
	{
		cout << "do something reports an error" << endl;
		throw;
	}

}

void positive_process(int num)
{
	
	if (num < 0)
	{
		throw invalid_argument("the number entered is negative");
	}
	else if (num > 100)
	{
		throw out_of_range("the number exceedes the limit"); // this is the mesage that will be printed in the err.what() if it catches an out of range error
	}
	else
		cout << "the number enterd is valid" << endl;

}