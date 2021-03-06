#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Alive {	
protected:
	string name;
	int age;
public:
	Alive(string sname, int sage) : name(sname), age(sage) {};

	string getname() { return name; }

	int getage() { return age; }

	virtual void habitat() = 0;
};

class Animal : public Alive {	
public:
	Animal(string sname, int sage) : Alive(sname, sage) {};

	void habitat() { cout << "my habitat is surface of the Earth" << endl; }
};

class Fish : public Alive {
public:
	Fish(string sname, int sage) : Alive(sname, sage) {};

	void habitat() { cout << "my habitat is ocean" << endl; }
};

class Bird : public Alive {
public:
	Bird(string sname, int sage) : Alive(sname, sage) {};

	void habitat() { cout << "haha i'm flying lOOsers" << endl; }
};

int main() {

	string name;
	int age;

	cout << endl << "Animal data" << endl;
	cout << "name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	Animal a(name, age);

	cout << "Fish data" << endl;
	cout << "name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	Fish f(name, age);

	cout << endl << "Bird data" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	Bird b(name, age);

	cout << endl << "Animal" << endl << "Name: " << a.getname() << endl << "Age: " <<
		a.getage() << endl;
	a.habitat();

	cout << endl << "Bird" << endl << "Name: " << b.getname() << endl << "Age: " <<
		b.getage() << endl;
	b.habitat();

	cout << endl << "Fish" << endl << "Name: " << f.getname() << endl << "Age: " <<
		f.getage() << endl;
	f.habitat();

	system("pause");
	return 0;
}