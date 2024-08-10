#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
	vector <string> names(5);

	names.at(0) =  "Jimmy";
	names.at(1) = "Gogz";
	names.at(2) = "Gamal";
	names.at(3) = "Gawageez";
	names.at(4) = "Gogzy";

	for (int i = 0; i < names.size(); i++)
	{
		cout << names[i] << endl;
	}

	// if i have an error and i know where it is but want to know the reason we use the following code

	try 
	{
		names.at(5) = "BOOM error";
	}
	catch (const out_of_range& symbol)
	{
		cout << symbol.what() << endl;
	}

	return 0;
}