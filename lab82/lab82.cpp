
#include "pch.h"
#include <iostream>
#include <cmath>
#include <list>
using namespace std;

class Complex {
	double re;
	double im;
public:
	Complex(double re, double im) : re(re), im(im) {}
	
	void setnumber(double sre, double sim) {
		re = sre;
		im = sim;
	}


	void display() {
		cout << "Complex number: " << re;
		if (im < 0) {
			cout << im << "i" << endl;
		}
		else {
			cout << "+" << im << "i" << endl;
		}
	}

	~Complex() {}
};

int main() {
	
	list<Complex> c;
	int n;

	cout << "Enter number of complex numbers:" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		double re, im;
		cout << "Complex number " << i + 1 << endl;
		cout << "Enter Re: "<<endl;
		cin >> re;
		cout << "Enter Im: "<<endl;
		cin >> im;
		c.push_back(Complex(re, im));
	}

	for (auto a:c) {
		a.display();
	}

	system("pause");
	return 0;
}