#include <iostream>
#include <stdexcept>

using namespace std;

char number_to_grade(int num);

int main()
{
	char grade;
	try
	{
		grade = number_to_grade(69);
		cout << grade << endl;
        grade = number_to_grade(100);
		cout << grade << endl;
		grade =number_to_grade(121);
		cout << grade << endl;


	}
	catch (const out_of_range& err)
	{
		cerr << err.what() << endl;
	}


	return 0;
}

char number_to_grade(int num)
{
	if ((num >= 0) && (num <= 59))
		return 'F';
	else if ((num >= 60) && (num <= 69))
		return 'D';
	else if ((num >= 70) && (num <= 79))
		return 'C';
	else if ((num >= 80) && (num <= 89))
		return 'B';
	else if ((num >= 90) && (num <= 100))
		return 'A';
	else
		throw out_of_range("your percentage should be within 0 and 100");




}

