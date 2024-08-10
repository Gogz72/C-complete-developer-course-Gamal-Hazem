#include "BankAccount.h"
#include <iostream>


BankAccount::BankAccount(string owner)
{
	this->owner = owner;

	this -> balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	this->owner = owner;
	this->balance = balance;

}
void BankAccount::deposit(int amount)
{
	balance += amount;
}

void BankAccount::withdraw(int amount)
{
	balance -= amount;
}
string BankAccount::getOwner() const
{
	return owner;
}
int BankAccount::getBalance() const
{
	return balance;
}