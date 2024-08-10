#ifndef WARP_DRIVE_OVERHEATING_H
#define WARP_DRIVE_OVERHEATING_H

#include <stdexcept>

using namespace std;

class WarpDriveExpect : public overflow_error
{
	public:
		WarpDriveExpect();
};


#endif