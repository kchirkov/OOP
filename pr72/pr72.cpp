

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class figure {
	int corners;
public:
	figure(int scorners) : corners(scorners) {}
	virtual void getsquareformula() = 0;
};

class chug : public figure {
public:
	chug() : figure(4) {}
	void getsquareformula() = 0;
};

class romb : public chug {
public:
	void getsquareformula() { cout << "d1*d2/2" << endl; }
};

class pryamoug : public chug {
public:
	void getsquareformula() { cout << "a*b" << endl; }
};

int main()
{
	romb a;
	pryamoug b;
	a.getsquareformula();
	b.getsquareformula();
	system("pause");
	return 0;
}
