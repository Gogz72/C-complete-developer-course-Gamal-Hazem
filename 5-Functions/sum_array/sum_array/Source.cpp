#include <iostream>

using namespace std;


int sum_array(int arr[], int n);


int main()
{

	int array[40];
	int n;

	cout << "please enter the size of your array (maximum is 40)" << endl;

	cin >> n;
	cin.get();

	cout << "enter the contents" << endl;

	for (int i = 0; i < n; i++)
		cin >> array[i];

	cout << "the sum of the array indviduals is   " << sum_array(array, n) << endl;


	return 0;
}

int sum_array(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;



}