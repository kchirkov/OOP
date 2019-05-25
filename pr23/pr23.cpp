#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, y, t;
	a = 4.6;
	b = 1.5;
	if (a <= b)
		y = ((a - b) / (a + b))*((a + b) / (a*a - a * b + b * b));
	else
		y = a + log(b*b);
	if (y == b)
		t = (2 * y + sqrt(y*y - a)) / (2 * b - sqrt(a*a - y));
	if (y < b)
		t = sin(y)*sin(y) + 1 / (tan(a - b));
	if (y > b)
		t = -pow(-y * sin(a), 1 / 3.0) + 1 / sqrt(y*sin(b));
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}
