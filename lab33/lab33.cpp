
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
	double re;
	double im;
public:
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
};

int main() {
	double re, im;
	Complex c1, c2;
	cout << "Enter re(1): ";
	cin >> re;
	cout << "Enter im(1): ";
	cin >> im;
	c1.setcomplex(re, im);

	cout << "Enter re(2): ";
	cin >> re;
	cout << "Enter im(2): ";
	cin >> im;
	c2.setcomplex(re, im);

	c1.display();
	c2.display();

	system("pause");
	return 0;
}
