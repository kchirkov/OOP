#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
	double re;
	double im;
public:
	Complex(double real, double im2) : re(real), im(im2) {}
	Complex(const Complex& c) {
		re = c.re;
		im = c.im;
	}
	Complex operator=(const Complex& c)
	{
		return Complex(c.re, c.im);
	}
	void setcomplex(double real, double im2) {
		re = real;
		im = im2;
	}

	double getmodule() { return sqrt(re * re + im * im); }

	void display() {
		cout << "Number: " << re;
		if (im < 0) {
			cout << "-" << im << "i" << endl;
		}
		else {
			cout << "+" << im << "i" << endl;
		}
		cout << "Module: " << getmodule() << endl;
	}
	~Complex() {};
};

int main() {
	double re, im;
	cout << "Enter re(1): ";
	cin >> re;
	cout << "Enter im(1): ";
	cin >> im;
	Complex c1(re, im);
	Complex c2 = c1;

	c1.display();
	c2.display();

	system("pause");
	return 0;
}