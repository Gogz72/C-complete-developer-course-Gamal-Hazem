#include <iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(const double* const num);

int main()
{
	double* doubleptr = new double(30.5);

	noConst();
	cp2ncd();
	ncp2cd();
	cp2cd();
	noChange(doubleptr); // this means that the only way to change any thing in the double pointer is in main or in an another fuction with different operators


	return 0;
}

void noConst()
{
	cout << " in no Const" << endl;

	int* myPtr = new int(7200);

	cout << "\tthe value held in the pointer is: " << *myPtr << endl;

	*myPtr = 4000;

	cout << "\tthe value held in the pointer after changing it is: " << *myPtr << endl;

	delete myPtr;

	myPtr = new int(2000);

	cout << "\tthe value held in the pointer after deleting and assigneing new memory is: " << *myPtr << endl;


}

void cp2ncd()
{
	cout << " in cp2ncd" << endl;

	int* const myPtr = new int(7200); // notice that the const operator is written after int* read it backwardsly and you will get it

	cout << "\tthe value held in the pointer is: " << *myPtr << endl;

	*myPtr = 4000;

	cout << "\tthe value held in the pointer after changing it is: " << *myPtr << endl;

	delete myPtr;

	//myPtr = new int(2000);

	cout << "\tthe value held in the pointer after deleting and assigneing new memory is: an error which makes sense as the pointer is const" << endl;


}

void ncp2cd()
{
	cout << " in cp2ncd" << endl;

	const int* myPtr = new int(7200); // notice that the const operator is written before int* read it backwardsly and you will get it

	cout << "\tthe value held in the pointer is: " << *myPtr << endl;

	//*myPtr = 4000;

	cout << "\tthe value held in the pointer after changing it is: an error which makes sense as the data is const " << endl;

	delete myPtr;

	myPtr = new int(2000);

	cout << "\tthe value held in the pointer after deleting and assigneing new memory is: "<<*myPtr << endl;


}

void cp2cd()
{
	cout << " in cp2ncd" << endl;

	const int* const myPtr = new int(7200); // notice that the const operator is written before int* read it backwardsly and you will get it

	cout << "\tthe value held in the pointer is: " << *myPtr << endl;

	//*myPtr = 4000;

	cout << "\tthe value held in the pointer after changing it is: an error which makes sense as the data is const " << endl;

	delete myPtr;

	//myPtr = new int(2000);

	cout << "\tthe value held in the pointer after deleting and assigneing new memory is: an error as it is all const " << endl;


}

void noChange(const double* const numptr)
{
	cout << " the double value is " << *numptr << endl;

}