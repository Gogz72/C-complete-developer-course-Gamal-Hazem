#include <iostream>

using namespace std;

void countdown(int num);
int sum_of_values(int num);
int factorial(int num);


int main()
{

	//countdown(10);

	//int total_sum = sum_of_values(10);

	//cout << "the total sum is = " << total_sum;

	int factorial_result = factorial(5);

	cout << "The factorial result is  " << factorial_result;

	return 0;
}



void countdown(int num)
{
	if (num >= 0)
	{
		cout << num << endl;
		countdown(num - 1);
	}

}

int sum_of_values(int num)
{
	if (num >= 1)
	{
		return (num + sum_of_values(num - 1));

	}

	return num;


}

int factorial(int num)

{
	if (num >= 2)
	{
		return num * factorial(num - 1);
	}

	return num;



}