#include <iostream>
#include <string>
#include <vector>

#define CAPACITY 5

using namespace std;

int main()
{
	string name;
	float weight;
	vector <string> names;
	vector <float> weights;

	for (int i = 0; i < CAPACITY; i++)

	{
		cout << "Please enter the full name and weight of client" << endl;

		cout << "Full name:" << endl;
		getline(cin, name);
		names.push_back(name);

		cout << "weight:" << endl;
		cin >> weight;
		cin.get();                  // important as it consumes the '\n' comman "enter" waiting in the inpur buffer
		weights.push_back(weight); 
			

	}

	cout << "client names and their respective weights are:" << endl;


	for (int i = 0; i < names.size(); i++)
	{
		cout << "name: " << names[i] << endl;
		cout << "weight: " << weights[i] << endl<<endl;

	}





	return 0;
}