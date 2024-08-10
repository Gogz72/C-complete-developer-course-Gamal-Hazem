#include "Person.h"
#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{

	try
	{
		Dog D1("Poodle");
		Dog D2("Golden Ret");


	}



	//try 
	//{
	//	Person p1("Gamal"); // it actually works it gave me an error no lets put it in a try catch and it will tell me the error
	//	Person p2("Gogo");
	//}

	catch (const runtime_error& err)
	{
		cerr << err.what() << endl; // and it gives me the reason that i wrote in the throw excpetion in the object
	}
	return 0;
}