#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream infile;
	vector <int> data;
	int sum = 0;
	int num;

	infile.open("input.txt");

	while (!infile.eof())
	{
		infile >> num;
		data.push_back(num);
		sum += num;
	}

	infile.close();

	cout << "the data collected is:" << endl;

	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}

	cout << "the sum is of the data is equal to " << sum << endl;



}