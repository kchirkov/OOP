
#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, x, y, t;
	a = 3.5;
	x = -0.7;
	if (a <= x)
		y = a + log(x + a);
	else
		y = sqrt(sin(a*x));
	if (y < a)
		t = y / (a - x);
	if (y = a)
		t = y / (a - x) + (a + x) / (y*y);
	if (y > a)
		t = tan(a*x) + cos(2 * a*y);
	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}
