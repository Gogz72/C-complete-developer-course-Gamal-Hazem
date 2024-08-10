#include <iostream>
using namespace std;


int main()
{
	// int array [rows] [columnbs]

	const int	rows = 2;

	const int	col = 3;

	int n;

	int mynums[rows][col] =
	{ {1 ,2 ,3},
	  {4 ,5 ,6} };


	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < col; j++)
		{
			cout << mynums[i][j] << "  ";
		}

		cout << endl;

	}


	cout << endl;

	cout << "enter a number";
	cout << endl;

	cin >> n;

	mynums[1][0] = n;

	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < col; j++)
		{
			cout << mynums[i][j] << "  ";
		}

		cout << endl;

	}

	cout << endl;

	cout << "now in reverse";
	
	cout << endl;


	for (int i = rows - 1 ; i >= 0; i--)
	{

		for (int j = col -1 ; j >= 0; j--)
		{
			cout << mynums[i][j] << "  ";
		}

		cout << endl;

	}


	return 0;
}