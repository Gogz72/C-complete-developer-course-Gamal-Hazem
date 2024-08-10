#ifndef BOOK_H
#define BOOK_H

#include <string>


class Book     // this class is imutable because it has no setting functions
{
	public:
		Book(string author, string book_name, string genre, int pages);
		string getAuthor() const;
		string getBookname() const;
		string getGenre() const;
		int getPages() const;
		void printDetails() const;

  

	private:
		string author;
		string book_name;
		string genre;
		int pages;

};

#endif