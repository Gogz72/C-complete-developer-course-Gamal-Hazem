#include <iostream>
#include <string>
using namespace std;

int main()
{
	string adj1, adj2, adj3, girlsName, boysName, occ1, occ2, placeName, clothing, hobby, mansName;

	cout << "***************Welcome to the Madlibs Game.************************" << endl;

	cout << "please enter an adjective" << endl;
	getline(cin, adj1);

	cout << "please enter a Girl's Name" << endl;
	getline(cin, girlsName);

	cout << "please enter an adjective" << endl;
	getline(cin, adj2);

	cout << "please enter an occupation" << endl;
	getline(cin, occ1);

	cout << "please enter a Name for a Place" << endl;
	getline(cin, placeName);

	cout << "please enter a Cloting" << endl;
	getline(cin, clothing);

	cout << "please enter a Hobby" << endl;
	getline(cin, hobby);

	cout << "please enter an adjective" << endl;
	getline(cin, adj3);

	cout << "please enter an Occupation" << endl;
	getline(cin, occ2);

	cout << "please enter a Boy's Name" << endl;
	getline(cin, boysName);

	cout << "please enter a Man's Name" << endl;
	getline(cin, mansName);

	cout << "***********STORY***********" << endl;

	cout << "There once was a " << adj1 << " girl named " << girlsName << " who was a " << adj2 << " " << occ1 << "in the Kingdom of " << placeName << ". She wanted to marry the " << adj3 << " " << occ2 << " named " << boysName << "but her fatherm, King " << mansName << " forbid her from seeing him.";













	return 0;
}