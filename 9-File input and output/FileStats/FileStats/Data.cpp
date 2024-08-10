#include "Data.h"
#include <iostream>
using namespace std;

void Data::add_data(int num)
{
	this->data.push_back(num);
}
void Data::set_data(int num, int pos)
{
	this->data[pos] = num;
}
int Data::getData(int pos) const
{
	return data[pos];
}
void Data::printDataAll() const
{
	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}
}
int Data::maximum_num() const
{
	int maximum;

	maximum = data[0];

	for (int i = 1; i < data.size(); i++)
	{
		if (data[i] > maximum)
			maximum = data[i];
		
	}

	return maximum;
}
int Data::minimum_num() const
{
	int minimum;

	minimum = data[0];

	for (int i = 1; i < data.size(); i++)
	{
		if (data[i] < minimum)
			minimum = data[i];

	}

	return minimum;
}
float Data::average_score() const
{
	float average;
	float sum = 0;

	for (int i = 0; i < data.size(); i++)
	{
		sum += data[i];
	}

	average = sum / data.size();

	return average;
}