
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class transport {
	string mark;
	string name;
	int age;
public:
	int wheels;
	transport(string smark, string sname, int swheels, int sage) : mark(smark), name(sname), wheels(swheels), age(sage) {}
	string getmark() { return mark; }
	string getname() { return name; }
	int getwheels() { return wheels; }
	int getage() { return age; }
	virtual double maxspeedfakeformula() = 0;
};

class automobile : public transport {
public:
	automobile(string smark, string sname, int swheels, int sage) : transport(smark, sname, swheels, sage) {}
	double maxspeedfakeformula() { return wheels * 60; }
};

class bus : public transport {
public:
	bus(string smark, string sname, int swheels, int sage) : transport(smark, sname, swheels, sage) {}
	double maxspeedfakeformula() { return wheels * 30; }
};

class velo : public transport {
public:
	velo(string smark, string sname, int swheels, int sage) : transport(smark, sname, swheels, sage) {}
	double maxspeedfakeformula() { return wheels * 20; }
};

int main()
{
	automobile n1("mersedes", "ML", 4, 2);
	bus n2("peugeot", "big", 4, 3);
	cout <<"auto speed:"<< n1.maxspeedfakeformula() << endl;
	cout <<"bus speed:"<< n2.maxspeedfakeformula() << endl;
	system("pause");
	return 0;
}