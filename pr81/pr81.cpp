
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin("text.txt");	

	while (!fin.eof()) {
		string s;
		fin >> s;	
		cout << s << endl;
	}

	fin.close();	

	system("pause");
	return 0;
}


