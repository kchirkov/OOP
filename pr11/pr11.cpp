

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char name[20];
	cout << "Enter your name!" << endl;
	cin.getline(name, 19);
	cout << "Hello, " << name << "!" << endl;
	
	system("pause");
	return 0;
}
