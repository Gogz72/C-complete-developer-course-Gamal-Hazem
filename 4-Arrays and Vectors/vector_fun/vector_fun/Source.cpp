#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	vector <string> friends_vec;

	friends_vec.push_back("Alii");
	friends_vec.push_back("Anezoo");
	friends_vec.push_back("ShamSham");
	friends_vec.push_back("Maha");
	friends_vec.push_back("Sondos");

	for (int i = 0; i < friends_vec.size(); i++)
	 {
		cout << friends_vec[i] << endl;
	 }

	cout << endl;

	friends_vec.insert(friends_vec.begin() + 2, "John Baugh");



	for (int i = 0; i < friends_vec.size(); i++)
	{
		cout << friends_vec[i] << endl;
	}

	cout << endl;

	friends_vec.pop_back();

	for (int i = 0; i < friends_vec.size(); i++)
	{
		cout << friends_vec[i] << endl;
	}

	cout << endl;


	friends_vec.insert(friends_vec.begin(), "GAMAL HAZEM");

	friends_vec.erase(friends_vec.end() - 1);

	friends_vec.insert(friends_vec.end(), "Sondos");



	for (int i = 0; i < friends_vec.size(); i++)
	{
		cout << friends_vec[i] << endl;
	}

	cout << endl;





	return 0;
}