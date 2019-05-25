

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child {
	string name;
	string surname;
	int age;
public:

	void setName(string sname) { name = sname; }

	void setSurname(string ssurname) { surname = ssurname; }

	void setAge(int sage) { age = sage; }

	void display() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
	}	
};

int main() {

	string name, surname;
	int age;
	Child c1, c2;
	cout << "Enter name of the first child: ";
	cin >> name;
	c1.setName(name);
	cout << "Enter surname of the first child: ";
	cin >> surname;
	c1.setSurname(surname);
	cout << "Enter age of the first child: ";
	cin >> age;
	c1.setAge(age);

	cout << "Enter name of the second child: ";
	cin >> name;
	c2.setName(name);
	cout << "Enter surname of the second child: ";
	cin >> surname;
	c2.setSurname(surname);
	cout << "Enter age of the second child: ";
	cin >> age;
	c2.setAge(age);

	c1.display();
	c2.display();

	system("pause");
	return 0;
}

