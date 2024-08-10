#ifndef ANGRY_CAT_EXPECT_H
#define ANGRY_CAT_EXPECT_H

#include <stdexcept>

using namespace std;

class Angry_cat_exception : public runtime_error 
{
	public:
		Angry_cat_exception();
		
		Angry_cat_exception(const string& state);
	

};



#endif
