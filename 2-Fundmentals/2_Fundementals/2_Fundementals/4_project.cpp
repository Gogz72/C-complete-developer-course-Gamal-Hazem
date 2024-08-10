#include <iostream>
#include <string>

using namespace std;

int main()
{

	string fullName;
	string Location;
	int initialScore;

	cout << "please enter your full name." << endl;
	
	getline(cin, fullName); // I can't use cin bare bone when trying to scan a string with spaces because it will think that the program has ended and the first word will only be stored

	//cin >> fullName;

	cout << "please enter your Location." << endl;

	getline(cin, Location);

	//cin >> Location;

	cout << "please enter your initial score (0-100)." << endl;

	cin >> initialScore;

	// Note: when I cin an int then i getline before i getline i need to write a cin.get(); 

	cout << "Hello " << fullName << "\nWe heard you are from " << Location << "\nyour original score is " << initialScore << ", but five points were added, your score is " << initialScore + 5;











	return 0;
}