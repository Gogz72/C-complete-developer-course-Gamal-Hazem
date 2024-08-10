#include "Rectangle.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void read_data(ifstream& inputData,vector <Rectangle*>& data);
void print_details(vector<Rectangle*>& data,ofstream& output);
void clear_data(vector <Rectangle*>& data);

int main()
{
	
	vector <Rectangle*> data;
	ifstream inputData;
	ofstream output;

	inputData.open("rectangles.txt");
	output.open("output.txt");

	if (!inputData)
	{
		cout << "there was a problem reading from the file " << endl;
		return 1;
	}


	read_data(inputData, data);

	print_details(data,output);
	clear_data(data);


	inputData.close();
	output.close();

	return 0;
}
void read_data(ifstream& inputData, vector <Rectangle*>& data)
{
	int length, width;


	while (!inputData.eof())
	{

		inputData >> length;
		inputData >> width;

		Rectangle* Recptr = new Rectangle(length, width);
		data.push_back(Recptr);

	}

}

void print_details(vector<Rectangle*>& data,ofstream& output)
{
	cout << "your data is: " << endl;
	for (int i = 0; i < data.size(); i++)
	{
		cout << "the perimeter and the area respectivle of Rectangle number " << i + 1 << "are" << endl;
		cout << data[i]->perimeter() << "          " << data[i]->area() << endl;

		output << "the perimeter and the area respectivle of Rectangle number " << i + 1 << "are" << endl;
		output << data[i]->perimeter() << "          " << data[i]->area() << endl;

	}
}

void clear_data(vector <Rectangle*>& data)
{

	for (int i = 0; i < data.size(); i++)
	{
		delete data[i];
		data[i] = nullptr;
	}

	//delete Recptr; dont delete it again as it is already pointing to the last member in the vector
	//Recptr = nullptr;
	data.clear();
}
