
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string s;
	cout << "Enter the text: " << endl;
	getline(cin, s);
	ofstream writetext("writetext.txt");
	writetext << s;
	writetext.close();
}

