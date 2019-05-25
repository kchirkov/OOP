
#include "pch.h"
#include <iostream>
using namespace std;

class screen {
	int screensize;
public:
	screen(double sscreensize) : screensize(sscreensize) {}
	virtual void mediumsize() = 0;
};

class keyboard {
	int keycaps;
public:
	keyboard(double skeycaps) : keycaps(skeycaps) {}
	virtual void height() = 0;
};

class smartphone : public screen, keyboard {
public:
	smartphone(double sscreensize, double skeycaps) : screen(sscreensize), keyboard(skeycaps) {}
	void mediumsize() { cout << "average screensize: 5 inch" << endl; }
	void height() { cout << "virtual keyboard height=0" << endl; }
};

class pc : public screen, keyboard {
public:
	pc(double sscreensize, double skeycaps) : screen(sscreensize), keyboard(skeycaps) {}
	void mediumsize() { cout << "average screensize: 21 inch" << endl; }
	void height() { cout << "average keyboard height = 2 cm" << endl; }
};

class laptop : public screen, keyboard {
public:
	laptop(double sscreensize, double skeycaps) : screen(sscreensize), keyboard(skeycaps) {}
	void mediumsize() { cout << "average screensize: 16 inch" << endl; }
	void height() { cout << "average keyboard height= 0,5 cm" << endl; }
};


int main()
{
	laptop a(6, 0);
	pc b(24, 60);
	a.mediumsize();
	a.height();
	b.mediumsize();
	b.height();
	system("pause");
	return 0;
}
