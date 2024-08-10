#include <iostream>
#include "AngryCatException.h"

using namespace std;

void feed_kitty(int treats);

int main()
{

	int treats;

	cout << "enter the amount of treats you want to guve to the cat" << endl;

	cin >> treats;

	try
	{
		feed_kitty(treats);
	}
	catch (const Angry_cat_exception& err)
	{
		cerr << err.what() << endl;
	}

	return 0;
}

void feed_kitty (int treats)
{
	if (treats > 5)
	{
		cout << " kitty is happy with number of treats" << endl;
	}

	else if (treats < 3)
	{
		throw Angry_cat_exception();
	}

	else if ((treats > 3) && (treats <5))
	{
		throw Angry_cat_exception("kitty is not satsfied");
	}



}