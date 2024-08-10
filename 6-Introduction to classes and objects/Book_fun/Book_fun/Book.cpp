#include "Book.h"
#include <iostream> // it is considred good pracctice to include files where they are needed only and not in H files
using namespace std;

Book::Book(string author, string book_name, string genre, int pages)
{
	this->author = author;
	this->book_name = book_name;
	this->genre = genre;
	this->pages = pages;

}

string Book::getAuthor() const
{
	return author;
}
string Book::getBookname() const
{
	return book_name;
}
string Book::getGenre() const
{
	return genre;
}
int Book::getPages() const
{
	return pages;
}
void Book::printDetails() const
{
	cout << "the book is printed from the member function is " << book_name
		<< " written by " << author << " it is about " << genre << " and it is "
		<< pages << " pages" << endl;

}