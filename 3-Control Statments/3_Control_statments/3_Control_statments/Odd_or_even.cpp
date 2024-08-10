#include <iostream>
using namespace std;

int main()
{
	int i;

	for (i = 0; i <= 50; i++)
	{
		if (i % 2 == 1)
			cout << i << " is even" << endl;
		else
			cout << i << " is odd" << endl;
	}



	return 0;
}