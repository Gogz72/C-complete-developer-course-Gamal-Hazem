#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
	vector <int> numbers;

	try
	{
		numbers.resize(numbers.max_size() + 1);
	}
	catch (const length_error& err)
	{
		cerr << err.what() << endl; // cerr is exactly like cout which opesn the doors of modification
	}

	return 0;


}