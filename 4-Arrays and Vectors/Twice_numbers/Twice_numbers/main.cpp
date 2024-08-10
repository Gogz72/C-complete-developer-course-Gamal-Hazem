#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 10> twice_number{};
	int num = 0;
		
	for (int j = 0; j < 10; j++)
	{
		
		
		if (j % 2 == 0 && j != 0)
			num += 2;

		twice_number[j] = num;

	}

	for (int k = 0; k < 10; k++)
	{
		cout << twice_number[k] << endl;

	}
	return 0;
}