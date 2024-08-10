#include "ShoppingList.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream list;
	string product;
	List mylist;

	list.open("shopping.txt");

	if (!list)
	{
		cout << "there was a problem reading the file" << endl;

		return 1;

	}

	while (!list.eof())
	{
		list >> product;
		mylist.addItem(product);
	}

	list.close();

	mylist.print_items();

	return 0;

}