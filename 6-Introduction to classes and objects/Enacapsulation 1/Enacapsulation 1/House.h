#ifndef HOUSE_H
#define HOUSE_H

#include<string>
#include <iostream>
using namespace std;

class House
{
public:

	House();

	~House();

	House(int numStories, int numWindows, string color, string house_name);

	void set_numStories(int numStories);

	void set_numWindows(int numWindows);

	void set_color(string color);

	void set_house_name(string house_name);

	int get_numStories() const; // the const is to prevent the function from modifying or to access the private variables

	int get_numWindows() const;

	string get_color() const;

	string get_house_name() const;

	void print_house_details() const;


private:

	int numStories;
	int numWindows;
	string color;
	string house_name;

};

#endif