#include <iostream>
#include <stdexcept>

using namespace std;

void divider(int num1, int num2);

int main()
{
	try
	{
		divider(10, 5);
		divider(2, 0);
	}

	catch (const invalid_argument& err)
	{
		cerr << err.what() << endl;
	}


	return 0;

}

void divider(int num1, int num2)
{
	int result;

	if (num2 != 0)
	{
		result = num1 / num2;
	}
	else
	{
		throw invalid_argument("cant divide bys zero");
	}

	cout << result << endl;


}

// the notes that can be recorded is that the debugging of visual studio is very extensive and that it has many features like watch and the breakpoints with its functions