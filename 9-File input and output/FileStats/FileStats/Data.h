#ifndef DATA_H
#define DATA_H

#include <vector>
using namespace std;

class Data
{
	public:

		void add_data(int num);
		void set_data(int num, int pos);
		int getData(int pos) const;
		void printDataAll() const;
		int maximum_num() const;
		int minimum_num() const;
		float average_score()const;

	private:

		vector <int> data;

};


#endif