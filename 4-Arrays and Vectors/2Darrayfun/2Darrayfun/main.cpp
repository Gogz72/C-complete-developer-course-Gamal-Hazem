#include <iostream>
using namespace std;


int main()
{    
 // int array [rows] [columnbs]

 const int	rows = 2;

 const int	col = 3;

	int mynums[rows][col] =
	{ {1 ,2 ,3},
	  {4 ,5 ,6} };
 

	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < col; j++)
		{
			cout << mynums[i][j];
		}

		cout << endl;

	}


	cout << endl;

	cout << "enter a number";

	cin >> mynums[2][0];

	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < col; j++)
		{
			cout << mynums[i][j];
		}

		cout << endl;

	}

	cout << endl;

	cout << "now in reverse";

	for (int i = rows; i > 0; i--)
	{

		for (int j = col; j > 0; j--)
		{
			cout << mynums[i][j];
		}

		cout << endl;

	}


	return 0;
}