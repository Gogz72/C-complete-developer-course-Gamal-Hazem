#include <iostream>

using namespace std;

int main()
{
	int* myptr = new int (123); // the new int syntax means that this pointer will point at a dynamic memory at the heap containing an int we can fill the address using two syntax
	*myptr = 123;               // the derfrencing which is known and using the (123) 

	cout << *myptr << endl;

	delete myptr; // this is to prevent memory leaking as now we are not using the memory in the heap

	myptr = nullptr; // this is to prevent dangling pointer because even if i delete and another process takes the memory the pointer is still pointing to it so i need not to point at it

	bool* myboolptr = new bool(true);

	cout << boolalpha << *myboolptr << endl;

	delete myboolptr;

	myboolptr = nullptr;


	return 0;
}