#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;
class Person
{
	public:
		Person(string name);
		void setName(string name);
		string getName() const noexcept;
	private:
		string name;
};



#endif