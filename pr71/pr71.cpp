
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class animal {
	string name;
	int legs;
	int age;
public:
	animal(string sname, int slegs, int sage) : name(sname), legs(slegs), age(sage) {}
	string getname() { return name; }
	int getlegs() { return legs; }
	int getage() { return age; }
	virtual void say() = 0;
};

class cat : public animal {
public:
	cat(string sname, int slegs, int sage) : animal(sname, slegs, sage) {}
	void say() { cout << "koshechka govorit nyaaaaa" << endl; }
};

class dog : public animal {
public:
	dog(string sname, int slegs, int sage) : animal(sname, slegs, sage) {}
	void say() { cout << "sobachka govorit gav" << endl; }
};

class parrot : public animal {
public:
	parrot(string sname, int slegs, int sage) : animal(sname, slegs, sage) {}
	void say() { cout << "popugaychik govorit durak" << endl; }
};

int main()
{
	cat Neko("Neko", 4, 5);
	cout << Neko.getname() << endl;
	Neko.say();

	system("pause");
	return 0;
}