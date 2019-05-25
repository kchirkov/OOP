#include "pch.h"
#include "library.h"

library::library() {}

void library::addBook(library book) {
	lib.push_back(book);
}

void library::getBooks() {
	for (int i = 0; i < lib.size(); i++) {
		cout << i + 1 <<
			": Title: " << lib[i].title << endl <<
			"Author: " << lib[i].author << endl <<
			"Year: " << lib[i].year << endl;
	}
}

void library::setyear(int year) {
	this->year = year;
}
int library::getyear() {
	return year;
}
void library::setauthor(string author) {
	this->author = author;
}
string library::getauthor() {
	return author;
}
void library::settitle(string title) {
	this->title = title;
}
string library::gettitle() {
	return title;
}

library::~library(){}