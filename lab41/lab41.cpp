#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child {
	string name;
	string surname;
	int age;
public:
	Child(string sname, string ssurname, int sage) : name(sname), surname(ssurname), age(sage) {}
	Child(const Child& c) {
		name = c.name;
		surname = c.surname;
		age = c.age;
	}
	Child operator= (const Child& c) {
		return Child(c.name, c.surname, c.age);
	}
	void setname(string sname) { name = sname; }
	void setsurname(string ssurname) { surname = ssurname; }
	void setage(int sage) { age = sage; }
	void display() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
	}
	~Child() {}
};

int main() {

	string name, surname;
	int age;
	cout << "Enter name of the first child: ";
	cin >> name;
	cout << "Enter surname of the first child: ";
	cin >> surname;
	cout << "Enter age of the first child: ";
	cin >> age;
	Child c1(name, surname, age);
	Child c2 = c1;
	Child c3(c2);
	c1.display();
	c2.display();
	c3.display();
	system("pause");
	return 0;
}