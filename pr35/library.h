#pragma once
#include "pch.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class library
{
	vector<library> lib;
	int year;
	string author, title;
public:
	library();
	void addBook(library);
	void getBooks();
	void setyear(int);
	int getyear();
	void setauthor(string);
	string getauthor();
	void settitle(string);
	string gettitle();
	~library();
};