#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int i;
	int dice_value;

	srand(time(nullptr));

	for (i = 0; i <= 10; i++)
	{
		dice_value = rand() % 6 + 1; // the plus 1 helps as if it is not there the range of values would be drom 0 to 5
		cout << dice_value << endl;
	}

	


	return 0;
}
