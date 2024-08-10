#include <iostream>
using namespace std;


int main()
{
	char gender;
	int age;

	cout << "please enter your age and gender." << endl;
	cout << "age:" << endl;
	cin >> age;
	
	cout << "gender (M-Male / F-Female)" << endl;
	cin >> gender;

	if (gender == 'f' || gender == 'F') // this writing is better than gender == 'f' || 'F'
	{
		if (age >= 60)
			cout << "you are qualified for the discount" << endl;
		else
			cout << "Sorry you are not old enough Maam" << endl;

	}

	else
		cout << "you are not qualified for the dicount SIR" << endl;
 

	return 0;
}