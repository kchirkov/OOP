#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
	double re;
	double im;
public:
	Complex() {}

	Complex(double re, double im) : re(re), im(im) {}

	Complex operator= (const Complex& c) 
	{ 
		return Complex(c.re, c.im); 
	}

	friend const Complex operator++ (Complex& c, int) {
		Complex old(c);
		c.re++;
		return old;
	}

	friend const Complex operator-- (Complex& c, int) {
		Complex old(c);
		c.re--;
		return old;
	}

	friend const bool operator== (const Complex& c1, const Complex& c2) {
		return (c1.re == c2.re) && (c1.im == c2.im);
	}

	friend const ostream& operator<< (ostream& out, const Complex& c) {
		out << c.re;
		if (c.im < 0) {
			out << c.im << "i";
		}
		else {
			out << "+" << c.im << "i";
		}
		return out;
	}

	friend const istream& operator>> (istream& in, Complex& c) {
		in >> c.re >> c.im;
		return in;
	}

	~Complex() {}
};
int main() {
	Complex c1;
	cout << "Enter complex number re(space)im: ";
	cin >> c1;
	Complex c2 = c1;

	if (c1 == c2) {
		c2--;
		c1++;
	}
	cout << c1;
	cout << endl << c2;
	cout << endl;

	system("pause");
	return 0;
}