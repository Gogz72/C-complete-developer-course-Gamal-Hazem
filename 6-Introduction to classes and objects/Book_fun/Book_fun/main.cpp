#include <iostream>
#include "Book.h"

using namespace std;

void printDetails(const Book& book);

int main()
{
	Book Mein_kampf ("Adolf hitler", "mein kampf", "Politics", 590);

	Book Menschen("Hueber", "Menschen", "language", 100);

	printDetails(Mein_kampf);

	printDetails(Menschen);

	Mein_kampf.printDetails();

	Menschen.printDetails();


	return 0;
}

void printDetails(const Book& book)
{
	cout << "the book passed by refrence to a global function is " << book.getBookname()
		<< " written by " << book.getAuthor() << " it is about " << book.getGenre() << " and it is "
		<< book.getPages() << " pages" << endl;
}