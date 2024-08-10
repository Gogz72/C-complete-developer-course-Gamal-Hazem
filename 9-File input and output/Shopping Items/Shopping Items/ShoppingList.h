#ifndef SHOPPING_LIST_H
#define SHOPPING_LIST_H

#include <vector>
#include <string>

using namespace std;

class List
{
	public:
		void print_items() const;
		void addItem(const string& product);
	private:
		vector <string> products;
		vector <int> products_num;

};



#endif