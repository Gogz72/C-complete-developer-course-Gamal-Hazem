#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream ages;
	ifstream names;
	ofstream output;
	int temp_age;
	string temp_name;

	ages.open("ages.txt");
	names.open("names.txt");
	output.open("output.txt");

	if ((!ages) || (!names))
	{
		cout << "A problem was encountered while opening the files " << endl;
		return 1;
	}

	cout << "printing to output file now" << endl;

	while ((!ages.eof()) && (!names.eof()))
	{
		getline(names, temp_name);
		ages >> temp_age;

		output << temp_name << "\t" << temp_age << endl;

	}
	cout << "Done" << endl;


	ages.close();
	names.close();
	output.close();




	return 0;
}