

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, z, t;
	a = -0.6;
	b = 5.3;
	if (a >= b)
		z = 1 - (2 * cos(a)*sin(b));
	else
		z = sqrt(fabs(a*a - b * b));
	if (z < b)
		t = pow((z + a * a*b), (1 / 3.0));
	if (z == b)
		t = 1 - log10(z) + cos(a*a*b);
	if (z > b)
		t = 1 / (cos(z*a));
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "z = " << z << endl;
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}