#include <iostream>

using namespace std;

int global_var;
void modify_global();

int main()
{
	cout << "global variable before incrementing was = " << global_var << endl;

	for (int i = 0; i < 100; i++)
		modify_global();

	cout << "global variable after incrementing was = " << global_var << endl;

	return 0;
}

void modify_global()
{
	global_var++;

}



// some notes at the end From now on i will write my notes of each section at the bottom of every code
// the local and global vars i already knew the thing that comfirmed my suspesions was the static keyword
// which now I have understood and it means that that variable is local and is only accesible in a certian scope
// but it is protected from destruction meaning its lifetime is protected

