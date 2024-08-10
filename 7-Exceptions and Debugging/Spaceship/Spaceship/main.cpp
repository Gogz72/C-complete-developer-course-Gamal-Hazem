#include "WarpDriveOverheating.h"
#include <iostream>

using namespace std;

void WarpTest(float temp);

int main()
{
	try
	{
		for (float i = 70.0; i < 85.0; i++)
		{
			WarpTest(i);
		}
	}

	catch (const WarpDriveExpect& err)
	{
		cerr << err.what() << endl;
	}



	return 0;
}

void WarpTest(float temp)
{

	if (temp > 80.0)
		throw WarpDriveExpect();
	else
		cout << "Warp Drive is within working temp limits" << endl;

}