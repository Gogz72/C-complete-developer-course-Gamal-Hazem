#include <iostream>

using namespace std;

int main()
{
	enum Directions {UP,DOWN,RIGHT,LEFT,STANDING_STILL};

	Directions mydirection = STANDING_STILL;

	if (mydirection == UP)
	{
		cout << "UP!" << endl;
	}
	else if (mydirection == DOWN)
	{
		cout << "DOWN" << endl;
	}
	else if (mydirection == LEFT)
	{
		cout << "LEFT" << endl;
	}
	else if (mydirection == RIGHT)
	{
		cout << "RIGHT" << endl;
	}
	else if (mydirection == STANDING_STILL)
	{
		cout << "STANDING STILL" << endl;
	}


	return 0;
}