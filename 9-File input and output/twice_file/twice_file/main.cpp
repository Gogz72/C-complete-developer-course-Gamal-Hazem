#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	ifstream input;
	ofstream output;
	int num;

	input.open("input.txt");
	output.open("output.txt");

	if (!input)
	{
		cout << "there was a prblem opening the file" << endl;
		return 1;
	}

	cout << "priniting the double of the numbers given from the input file" << endl;

	while (!input.eof())
	{
		input >> num;
		output << num * 2 << endl;

	}

	input.close();
	output.close();


	return 0;
}