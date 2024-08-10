#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int x = 0;
	vector <int> mynums;

	cout << "Welcome to the number duplicator program please enter numbers you wish to duplicate and when and to end the precessing enter a negative number" << endl;

	while (x>=0)
	{
		cout << "please enter an integer" << endl;

		cin >> x;

		if (x >= 0)
		{
			mynums.push_back(x);

		}



	}

	for (int i = 0; i < mynums.size(); i++)
	{
		cout << mynums[i] * 2 << endl;

	}






	return 0;
}
