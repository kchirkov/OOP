#include "pch.h"
#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
	Complex c1, c2;
	char dei;
	c1.init(1.0, 1.0);
	c2.init(1.0, 1.0);
	cout << "your numbers: " << endl << "c1 = 1 + 1i " << "c2 = 1 + 1i" << endl;
	cout << "vvedite deystvie s/v/u/d" << endl;
	cin >> dei;
	if (dei == 's')
		c1.add(c2);
	if (dei == 'v')
		c1.min(c2);
	if (dei == 'u')
		c1.umn(c2);
	if (dei == 'd')
		c1.del(c2);
	cout << "real = " << c1.re << " "<< "im = " << c1.im << endl;
	system("pause");
	return 0;
}