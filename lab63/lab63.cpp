#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal {	
protected:
	string name;
	int age;
public:
	Animal(string sname, int sage) : name(sname), age(sage) {};

	string getname() { return name; }

	int getage() { return age; }

	virtual void saying() = 0;
};

class Dog : public Animal {	
public:
	Dog(string sname, int sage) : Animal(sname, sage) {};

	void saying() { cout << "wooof! woof!" << endl; }
};

class Cat : public Animal {
public:
	Cat(string sname, int sage) : Animal(sname, sage) {};

	void saying() { cout << "Nyaaaaaaa" << endl; }
};

int main() {

	string name;
	int age;

	cout << "Cat name" << endl;
	cin >> name;
	cout << "Cat age: "<<endl;
	cin >> age;
	Cat c(name, age);

	cout << "Dog name" << endl;
	cin >> name;
	cout << "Dog age: ";
	cin >> age;
	Dog d(name, age);

	cout << "Dog Name: " << d.getname() << endl << "Dog Age: " <<
		d.getage() << endl;
	d.saying();

	cout << "Cat Name: " << c.getname() << endl << "Cat Age: " <<
		c.getage() << endl;
	c.saying();

	system("pause");
	return 0;
}
