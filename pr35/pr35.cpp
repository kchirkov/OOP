﻿
#include "pch.h"
#include "pch.h"
#include "library.h"

int main()
{
	library book1, book2,lib;
	int year;
	string title, author;

	cout << "First book:"<<endl;
	cout << "Enter author: ";
	getline(cin, author);
	book1.setauthor(author);

	cout << "Enter year: ";
	cin >> year;
	cin.ignore();
	book1.setyear(year);

	cout << "Enter title: ";
	getline(cin, title);
	book1.settitle(title);

	lib.addBook(book1);
	cout << "Second book:"<<endl;
	cout << "Enter author: ";
	getline(cin, author);
	book2.setauthor(author);

	cout << "Enter year: ";
	cin >> year;
	cin.clear();
	cin.ignore();
	book2.setyear(year);

	cout << "Enter title: ";
	getline(cin, title);
	book2.settitle(title);

	cout << endl;
	lib.addBook(book2);

	lib.getBooks();

	system("pause");
	return 0;

}
