#include <iostream>
#include <array>

using namespace std;

int array_sum(array <int,5> myarray );
void array_sum(array <int, 5> myarray, int& sum);

int main()
{
	array <int, 5> arr { 0 };
	int sum = 0;


	cout << " now enter the contents: " << endl;

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	array_sum(arr, sum);

	cout << "the sum of the array object is " << sum;


	return 0;

}


int array_sum(array <int, 5> myarray)
{
	int sum = 0;
	for (int i = 0 ; i<5 ; i++)
		sum += myarray[i];
	return sum;

}

void array_sum(array <int, 5> myarray, int& sum)
{
	sum = 0;
	for (int i = 0; i < 5; i++)
		sum += myarray[i];
}
