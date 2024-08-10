#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
	int number, guessed_no, diff;

	guessed_no = 200;

	int i = 0;

	srand(time(nullptr));

	number = rand() % 100 + 1;

	while (guessed_no != number)
	{

		cout << "enter a number between 1-100" << endl;

		cin >> guessed_no;

		diff = guessed_no - number;

		i++;

		if (guessed_no <= 100)
	 {
		

		if (diff == 0)
		{
			cout << "congratulations you have guessed the correct number which is " << number << endl << "total amout of guesses were " << i;
			break;

		}
		else if ((10 > diff) && (diff >= 1))
		{
			cout << "you are close (higher)" << endl;

		}
		else if ((20 > diff) && (diff >= 10))
		{
			cout << "thats a high guess" << endl;

		}
		else if (diff >= 20)
		{
			cout << "thats a very high guess" << endl;

		}
		else if ( ( - 10 < diff) && (diff <= -1))
		{
			cout << "you are close (lower)" << endl;

		}
		else if (( - 20 < diff) && (diff <= -10))
		{
			cout << "thats a low guess" << endl;

		}
		else if (diff <= -20)
		{
			cout << "thats a very low guess" << endl;

		}




	 }
		else 
			cout << "thats a wasted guess try again"<< endl;

}

	return 0;
}