#include <iostream>
#include <fstream>
#include <vector>
#include "Data.h"

using namespace std;

int main()
{
	ifstream scores;
	int num;
	Data data;


	scores.open("scores.txt");

	if (!scores)
	{
		cout << " there was a problem reading the scores" << endl;

		return 1;
	}

	while (!scores.eof())
	{
		scores >> num;
		if ((num >= 0)&&(num <=100))
		{
			data.add_data(num);
		}

	}

	cout << "the minimum value is " << data.minimum_num() << endl;
	cout << "the maximum value is " << data.maximum_num() << endl;
	cout << "the average value is " << data.average_score() << endl;


	return 0;
}

