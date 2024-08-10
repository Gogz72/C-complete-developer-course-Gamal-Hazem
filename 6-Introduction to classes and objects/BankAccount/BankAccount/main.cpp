#include "BankAccount.h"
#include <iostream>

using namespace std;

void run_program();

int main()
{
	run_program();
	return 0;
}


void run_program()
{

	BankAccount Nezo_BA("Omar Nezar", 700);
	BankAccount Maha_BA("Maha Nabhan");
	int amount;
	int service;
	bool state = 0;

	while (state == 0)
	{
		cout << "Welcome " << Maha_BA.getOwner() << endl;
		cout << "please select the service you would like to use " << endl;
		cout << "1. Deposit" << endl << "2. Withdraw" << endl << "3. Check balance" << endl << "4. Exit" << endl;
		cin >> service;
		switch (service)
		{
		case 1:
			cout << "please enter the amount you want to deposit:" << endl;
			cin >> amount;
			if (amount > 0)
			{
				Maha_BA.deposit(amount);
			}
			else
			{
				cout << "please enter a valid number (the process will be terminated please try again)" << endl;
				continue;

			}
			break;

		case 2:
			cout << "please enter the amount you want to withdraw:" << endl;
			cin >> amount;
			if ((amount > 0)&&(amount<Maha_BA.getBalance()))
			{
				Maha_BA.withdraw(amount);
			}
			else if (amount <= 0)
			{
				cout << "please enter a valid number (the process will be terminated please try again)" << endl;
				continue;

			}
			else if (amount > Maha_BA.getBalance())
			{
				cout << "you dont have enough in your balance" << endl;
				continue;

			}
			break;

		case 3:
			cout << Maha_BA.getBalance() << endl;

			break;

		case 4:
			state = 1;

			break;

		default:

			cout << "please enter a valid number (the process will be terminated please try again)" << endl;

			continue;

			break;
		}


	}


}