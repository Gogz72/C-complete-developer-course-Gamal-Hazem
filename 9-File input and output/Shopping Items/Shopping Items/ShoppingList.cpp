#include "ShoppingList.h"
#include <iostream>

using namespace std;

void List::print_items() const
{
	for (int i = 0; i < products.size(); i++)
	{
		cout << products[i] << "\t" << products_num[i]<< endl;
	}


}
void List::addItem(const string& product)
{
	for (int i = 0; i < products.size(); i++)
	{
		if (product == products[i])
		{
			products_num[i] += 1;
			return;
		}
	}

	products.push_back(product);
	products_num.push_back(1);
}
