#include <iostream>
#include <string>
using namespace std;

struct sPackage
{
	char packagetype;
	int monthly_fees;
	int extra_fees;
	int jams;

};
struct sPerson
{
	string name;
	sPackage package;
};

int main()
{
	bool prompt = 1;
	

	sPerson person;

	while (prompt)
	{
		int n;
		int total_price;

		cout << "do want to continue press 1 if yes and 0 if no" << endl;

		cin >> prompt;

		if (prompt == 0)
			break;

		cin.get();

		cout << "please enter your name:" << endl;

		getline(cin, person.name);

		cout << "please enter your package type" << endl;

		cin >> person.package.packagetype;

		switch (person.package.packagetype)
		{

		case 'A':
		case 'a':

			person.package.monthly_fees = 8;
			person.package.extra_fees = 5;
			person.package.jams = 2;
			break;
		case 'B':
		case 'b':
			person.package.monthly_fees = 12;
			person.package.extra_fees = 4;
			person.package.jams = 4;
			break;
		case 'C':
		case 'c':
			person.package.monthly_fees = 15;
			person.package.extra_fees = 3;
			person.package.jams = 6;
			break;

		default:
			cout << "you have entered an incorrect type" << endl;
		}

		cout << "please enter how many jams have you acquired this month sir" << endl;

		cin >> n;
		
		total_price = person.package.monthly_fees + ((n - person.package.jams) * person.package.extra_fees);

		cout << "Hello " << person.name << " your monthly fees according to your package is " << person.package.monthly_fees << endl << "this month you have acquirred " << n << " jams, your package contains " << person.package.jams << " jams monthly, an the extra fees for each jam is " << person.package.extra_fees << endl << "so your total price will be:" << total_price<<endl;

	}





	return 0;
}