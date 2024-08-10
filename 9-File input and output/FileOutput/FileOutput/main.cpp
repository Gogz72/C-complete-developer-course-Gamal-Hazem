#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printformatted(ofstream& outfile, int num);

int main()
{

	ofstream outfile;
	int n;

	cout << "please enter the maximum number of iteration" << endl;

	cin >> n;

	printformatted(outfile, n);


	return 0;
}


void printformatted(ofstream& outfile, int num)
{
	outfile.open("output.txt");

	cout << " printing on the text file now" << endl;

	outfile << fixed << showpoint;  // fixed means that the floating numbers displayed will count on the percision function to determine its length
									// and the show point means that even if the point is useless is displayes it sticks with percision and displays zeros after the .

	for (int i = 0; i < num; i++)
	{
		outfile << "the sequence of number is:" << endl;

		outfile << setw(12) << setprecision(2) << (i * 5.345);
		outfile << setw(12) << setprecision(3) << (i * 3.1459) << endl;


	}

	outfile.close();



}